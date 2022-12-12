const { commaSep1 } = require("../helpers");

module.exports = {
  // Maybe(a)
  type_call: $ =>
    prec.left(
      seq(
        field("function", choice($.type_constructor, $.type_variable)),
        field("arguments", $.type_call_arguments)
      )
    ),

  type_call_arguments: $ =>
    seq("(", field("argument", commaSep1($._type)), ")"),
};
