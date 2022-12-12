const { sep1, commaSep1 } = require("../helpers");

module.exports = {
  // module My.Module exports (..)
  module_header: $ =>
    seq(
      "module",
      field("module_name", $.module_name),
      "exports",
      field("exports", $._exposing),
      ";"
    ),

  module_name: $ => sep1($._proper_name, "."),

  // import (some-pkg) SomeModule as SM (some_function)
  module_import: $ =>
    seq(
      "import",
      field("package", optional($.module_import_package)),
      field("module_name", $.module_name),
      field("alias", optional(seq("as", $.module_import_alias))),
      field("imports", optional($._exposing)),
      ";"
    ),

  module_import_package: $ => seq("(", $._package_name, ")"),

  module_import_alias: $ => $._proper_name,

  _exposing: $ => choice($.exposing_everything, $.exposing_list),

  exposing_everything: $ => $._everything,

  exposing_list: $ => seq("(", commaSep1($._exposing_list_item), ")"),

  _exposing_list_item: $ =>
    choice($.exposing_list_item_type, $.exposing_list_item_value),

  exposing_list_item_type: $ =>
    seq(
      $.exposing_list_item_type_name,
      optional($.exposing_list_item_type_constructors)
    ),

  exposing_list_item_type_name: $ => $._proper_name,

  exposing_list_item_type_constructors: $ => $._everything,

  _everything: $ => seq("(", "..", ")"),

  exposing_list_item_value: $ => $._name,
};
