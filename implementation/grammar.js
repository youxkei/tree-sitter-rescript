module.exports = grammar({
  name: 'rescript',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    structure_item_region: $ => '',

    comment: $ => token(seq('//', /.*/)),
  }
})
