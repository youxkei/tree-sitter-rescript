module.exports = grammar({
  name: 'rescript',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    implementation: $ => repeat($.structure_item_region),

    structure_item_region: $ => seq(optional($.attributes), choice(
      $.open_description,
    )),

    open_description: $ => seq('open', optional('!'), $.module_long_ident),

    module_long_ident: $ => repeatSep1($.uident, '.'),

    attributes: $ => repeat1($.attribute),

    attribute: $ => seq('@', $.attribute_id, optional($.payload)),

    attribute_id: $ => repeatSep1(choice($.lident, $.uident), '.'),

    payload: $ => seq('(', ')'), // TODO

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
