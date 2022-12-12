const { commaSep } = require("../helpers");

module.exports = {
  expression_call: $ =>
    seq(
      field("function", $._expression1),
      field("arguments", $.expression_call_arguments)
    ),

  expression_call_arguments: $ =>
    seq("(", field("argument", commaSep($._expression)), ")"),
};
