const { commaSep } = require("../helpers");

module.exports = {
  // fn (arg, arg: ArgType): RetunType -> body
  expression_function: $ =>
    seq(
      "fn",
      "(",
      field("parameter", commaSep($.expression_function_parameter)),
      ")",
      field("return_type", optional($.return_type_annotation)),
      "->",
      field("body", $._expression)
    ),

  expression_function_parameter: $ =>
    seq(
      field("pattern", $._pattern),
      field("type_annotation", optional($.type_annotation))
    ),
};
