const { commaSep } = require("../helpers");

module.exports = {
  // [1, 2, 3, 4, 5]
  expression_array: $ =>
    seq("[", field("element", commaSep($._expression)), "]"),

  // "this is a string"
  expression_string: $ =>
    // Regex credit: https://stackoverflow.com/a/10786066

    /"([^"\\]*(\\.[^"\\]*)*)"/,

  // 50_000
  expression_int: $ => /\d[\d_]*/,

  // 50_000.123
  expression_float: $ => /\d[\d_]*\.\d[\d_]*/,

  expression_true: $ => "true",
  expression_false: $ => "false",
  expression_unit: $ => "unit",
};
