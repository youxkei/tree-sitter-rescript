module.exports = grammar({
  name: 'rescript',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    implementation: $ => repeatSepTail($.structure_item_region, choice(';', '\n')),

    structure_item_region: $ => seq(optional($.attributes), choice(
      $.open_description,
      $.let_bindings,
      $.type_definition_or_extension,
      $.external_def,
      $.js_import,
      $.exception_def,
      $.include_statement,
    )),

    open_description: $ => seq('open', optional('!'), $.module_long_ident_without_lowercase),

    let_bindings: $ => seq('let', optional('rec'), $.let_binding_body, repeat(seq(optional($.attributes), 'and', $.let_binding_body))),

    let_binding_body: $ => seq(
      $.pattern,
      optional(seq(
        ':',
        choice(
          seq('type', optional($.lident_list), '.', $.typ_expr),
          $.poly_type_expr
        )
      )),
      '=',
      $.expr
    ),

    type_definition_or_extension: $ => seq(
      'type',
      optional(choice('rec', 'nonrec')),
      $.value_path,
      optional($.type_params),
      $.type_equation_and_representation,
    ),

    external_def: $ => seq('external', $.lident, ':', $.typ_expr, '=', $.string),

    js_import: $ => seq('import', choice($.js_ffi_declaration, $.js_ffi_declarations)),

    js_ffi_declarations: $ => seq('{', repeatSep($.js_ffi_declaration, ","), '}'),

    js_ffi_declaration: $ => seq(optional($.attributes), $.lident, ':', $.poly_type_expr), // TODO: parseLident

    exception_def: $ => seq('exception', $.constr_def_without_attrs),

    constr_def_without_attrs: $ => seq($.uident, optional(choice(
      $.constr_decl_args,
      seq('=', $.module_long_ident_without_lowercase),
      seq(':', $.typ_expr),
    ))),

    constr_decl_args: $ => seq('(', choice(
      seq('{', '}'), // TODO: record
      repeatSep1($.typ_expr_region, ','),
    ), ')', optional(seq(':', $.typ_expr))),

    include_statement: $ => seq('include', $.module_expr),

    module_expr: $ => seq(optional($.attributes), choice($.functor_module_expr, $.primary_module_expr)),

    functor_module_expr: $ => seq($.functor_args, optional(seq(':', $.module_type_without_es6_arrow)), '=>', $.module_expr),

    functor_args: $ => seq('(', repeatSep($.functor_arg, ','), ')'),

    functor_arg: $ => choice(
      seq($.uident, optional(choice(
        seq(':', $.module_type),
        seq('.', $.module_long_ident_tail_without_lowercase),
      ))),
      seq('_', ':', $.module_type),
      seq('(', ')'),
    ),

    module_type_without_es6_arrow: $ => seq(optional($.attributes), $.atomic_module_type, optional($.with_constraints)),

    with_constraints: $ => seq('with', repeatSep(seq($.with_constraint, 'and'))),

    with_constraint: $ => choice(
      seq('module', $.module_long_ident_without_lowercase, choice(':=', '='), $.module_long_ident_without_lowercase),
      seq('type', $.value_path, optional($.type_params), choice(
        seq(':=', $.typ_expr),
        seq('=', $.typ_expr, optional($.type_constraints)),
      )),
    ),

    primary_module_expr: $ => seq($.atomic_module_expr, repeat($.module_application)),

    atomic_module_expr: $ => choice(
      $.module_long_ident_without_lowercase,
      seq('{', $.structure_item_region, '}'),
      seq('(', $.constrained_mod_expr, ')'),
      seq('unpack', '(', $.expr, optional(seq(':', optional($.attributes), $.package_type)), ')'),
      seq('%', $.extension),
    ),

    constrained_mod_expr: $ => seq($.module_expr, optional(seq(':', $.module_type))),

    module_long_ident_without_lowercase: $ => repeatSep1($.uident, '.'),

    module_long_ident_tail_without_lowercase: $ => repeatSep1($.uident, '.'),

    type_params: $ => seq(/[ \t\r\f]*/, token.immediate(choice('(', '<')), optional(seq(repeatSep1($.type_param, ','), optional(','))), '>'),

    type_param: $ => seq("'", $.ident), // TODO

    type_equation_and_representation: $ => seq('=', $.lident),

    value_path: $ => seq(optional(seq(repeatSep1($.uident, '.'), '.')), $.lident),

    attributes: $ => repeat1($.attribute),

    attribute: $ => seq('@', $.attribute_id, optional($.payload)),

    attribute_id: $ => repeatSep1(choice($.lident, $.uident), '.'),

    payload: $ => seq(token.immediate('('), optional(choice(
      // seq(':', choice($.signature_item_region, $.typ_expr)),
      seq('?', $.pattern, optional(seq(choice('when', 'if'), $.expr))),
      repeatSepTail($.structure_item_region, choice(';', '\n'))
    )), ')'), // TODO

    pattern: $ => choice(
      $.lident,
    ), // TODO

    typ_expr_region: $ => $.typ_expr,

    typ_expr: $ => choice(
      $.lident,
    ), // TODO

    poly_type_expr: $ => choice(
      $.lident,
    ), // TODO

    expr: $ => choice(
      $.lident,
    ), // TODO

    lident_list: $ => repeat1($.lident),

    ident: $ => choice($.lident, $.uident),

    lident: $ => token(choice(
      seq(/[a-z]/, /[A-Za-z0-9_']*/),
      seq('_', /[A-Za-z0-9_]/, /[A-Za-z0-9_']*/),
      seq('\\', /[^"]+/, '"'),
    )),

    string: $ => seq('"', repeat(token.immediate(choice(
      /[^"\\]/,
      seq('\\', choice(/[^0-9ox]/, /\d{3}/, /o[0-7]{3}/, /x[\da-fA-F]{2}/)),
    ))), '"'),

    uident: $ => token(seq(/[A-Z]/, /[A-Za-z0-9_']*/)),

    comment: $ => token(seq('//', /.*/)),
  }
})

function repeatSep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function repeatSep(rule, separator) {
  return optional(repeatSep1(rule, separator));
}

function repeatSepTail1(rule, separator) {
  return seq(repeatSep1(rule, separator), optional(separator));
}

function repeatSepTail(rule, separator) {
  return optional(repeatSepTail1(rule, separator));
}
