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
    )),

    open_description: $ => seq('open', optional('!'), $.module_long_ident),

    module_long_ident: $ => repeatSep1($.uident, '.'),

    attributes: $ => repeat1($.attribute),

    attribute: $ => seq('@', $.attribute_id, optional($.payload)),

    attribute_id: $ => repeatSep1(choice($.lident, $.uident), '.'),

    payload: $ => seq(token.immediate('('), optional(choice(
      /* seq(':', choice($.signature_item_region, $.typ_expr)),
      seq('?', $.pattern, optional(seq(choice("when", "if"), $.expr))), */
      repeatSepTail($.structure_item_region, choice(';', '\n'))
    )), ')'), // TODO

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
