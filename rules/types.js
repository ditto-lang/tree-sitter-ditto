module.exports = {
  _type: $ => choice($.type_function, $._type1),

  _type1: $ =>
    choice(
      $._type_parens,
      $.type_call,
      $.type_closed_record,
      $.type_open_record,
      $.type_constructor,
      $.type_variable
    ),

  ...require("./types/atoms.js"),
  ...require("./types/call.js"),
  ...require("./types/function.js"),
  ...require("./types/records.js"),

  type_annotation: $ => seq(":", $._type),

  return_type_annotation: $ => seq(":", $._type1),
};
