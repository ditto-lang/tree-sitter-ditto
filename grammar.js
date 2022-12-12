module.exports = grammar({
  name: "ditto",

  conflicts: $ => [[$.module_name], [$.type_function, $._type_parens]],

  extras: $ => [
    $.comment,
    // Whitespace, taken from
    // https://github.com/tree-sitter/tree-sitter-javascript/blob/08f70a92f50a2373563d0e1f2a60089a02d19ca4/grammar.js#L12
    /[\s\p{Zs}\uFEFF\u2060\u200B]/,
  ],

  rules: {
    source_file: $ =>
      seq(
        field("header", $.module_header),
        field("import", repeat($.module_import)),
        field("declaration", repeat($._module_declaration))
      ),

    ...require("./rules/module.js"),
    ...require("./rules/types.js"),
    ...require("./rules/expressions.js"),
    ...require("./rules/patterns.js"),
    ...require("./rules/names.js"),
    ...require("./rules/comments.js"),
  },
});
