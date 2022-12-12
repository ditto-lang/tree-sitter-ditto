module.exports = {
  _expression: $ => $._expression4,

  _expression4: $ => choice($.expression_let, $._expression3),

  _expression3: $ =>
    choice(
      $.expression_function,
      $.expression_match,
      $.expression_effect,
      $.expression_if,
      $._expression2
    ),

  _expression2: $ => choice($.expression_right_pipe, $._expression1),

  _expression1: $ => choice($.expression_constructor, $._expression0),

  _expression0: $ =>
    choice(
      $.expression_call,
      $.expression_record_access,
      $._expression_parens,
      $.expression_record,
      $.expression_record_update,
      $.expression_true,
      $.expression_false,
      $.expression_unit,
      $.expression_variable,
      $.expression_array,
      $.expression_string,
      $.expression_float,
      $.expression_int
    ),

  ...require("./expressions/atoms.js"),
  ...require("./expressions/call.js"),
  ...require("./expressions/effect.js"),
  ...require("./expressions/function.js"),
  ...require("./expressions/if.js"),
  ...require("./expressions/let.js"),
  ...require("./expressions/literals.js"),
  ...require("./expressions/match.js"),
  ...require("./expressions/pipe.js"),
  ...require("./expressions/records.js"),
};
