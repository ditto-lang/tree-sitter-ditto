const { qualified } = require("../helpers.js");

module.exports = {
  // ((some_expression))
  _expression_parens: $ => seq("(", $._expression, ")"),

  // Just
  // Maybe.Just
  expression_constructor: $ =>
    qualified($, $.expression_constructor_proper_name),
  expression_constructor_proper_name: $ => $._proper_name,

  // x
  // Maybe.map
  expression_variable: $ => qualified($, $.expression_variable_name),
  expression_variable_name: $ => $._name,
};
