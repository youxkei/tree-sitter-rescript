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
    )),

    open_description: $ => seq('open', optional('!'), $.module_long_ident),

    module_long_ident: $ => repeatSep1($.uident, '.'),

    let_bindings: $ => seq("let", optional("rec"), $.let_binding_body, repeat(seq(optional($.attributes), "and", $.let_binding_body))),

    let_binding_body: $ => seq(
      $.pattern,
      optional(seq(
        ":",
        choice(
          seq("type", optional($.lident_list), ".", $.typ_expr),
          $.poly_type_expr
        )
      )),
      "=",
      $.expr
    ),

    type_definition_or_extension: $ => seq(
      "type",
      optional(choice("rec", "nonrec")),
      $.value_path,
      optional($.type_params),
      $.type_equation_and_representation,
    ),

    type_params: $ => seq(/[ \t\r\f]*/, token.immediate(choice("(", "<")), optional(seq(repeatSep1($.type_param, ","), optional(","))), ">"),

    type_param: $ => seq("'", $.ident), // TODO

    type_equation_and_representation: $ => seq("=", $.lident),

    value_path: $ => seq(optional(seq(repeatSep1($.uident, "."), ".")), $.lident),

    attributes: $ => repeat1($.attribute),

    attribute: $ => seq('@', $.attribute_id, optional($.payload)),

    attribute_id: $ => repeatSep1(choice($.lident, $.uident), '.'),

    payload: $ => seq(token.immediate('('), optional(choice(
      // seq(':', choice($.signature_item_region, $.typ_expr)),
      seq('?', $.pattern, optional(seq(choice("when", "if"), $.expr))),
      repeatSepTail($.structure_item_region, choice(';', '\n'))
    )), ')'), // TODO

    pattern: $ => choice(
      $.lident,
    ), // TODO

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
