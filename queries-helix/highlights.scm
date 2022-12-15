(comment) @comment

[
  "["
  "]"
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  ","
  ";"
  "|"
] @punctuation.delimiter

[
  "module"
  "exports"
  "import"
  "as"
] @keyword.control.import

[
  "type"
  "foreign"
  "fn"
  "do"
  "alias"
  "let"
  "in"
] @keyword

[
  "return"
] @keyword.return

[
  "if"
  "then"
  "else"
  "match"
  "with"
  "end"
] @keyword.control.conditional

[
  ".."
] @symbol

[
  (module_name)
  (module_import_alias)
  (qualifier) 
] @namespace

[
  (exposing_list_item_type_name)
  (type_declaration_name)
  (type_constructor_proper_name)
  (type_function ("->"))
] @type

[
  (type_declaration_variable)
  (type_variable)
  (type_open_record_row_variable)
] @variable.parameter

[
  (type_declaration_constructor_name)
  (expression_constructor_proper_name)
  (pattern_constructor_proper_name)
] @variable.other.member

[
  (value_declaration_name) 
  (exposing_list_item_value)
] @function

[
  (pattern_variable)
  (expression_variable_name) 
] @variable

[
  ":"
  "<-"
  "|>"
  (expression_function ("->"))
  (expression_match_arm ("->"))
] @operator

(expression_string) @string

(expression_int) @constant.numeric.integer

(expression_float) @constant.numeric.float

[(expression_true) (expression_false)] @constant.builtin.boolean

(expression_unit) @constant.builtin
