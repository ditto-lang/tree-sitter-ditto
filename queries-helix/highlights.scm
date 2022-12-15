; 0
(comment) @comment

; 1
[
  "["
  "]"
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

; 2
[
  ","
  ";"
  "|"
] @punctuation.delimiter

; 3
[
  "module"
  "exports"
  "import"
  "as"
] @keyword.control.import

; 4
[
  "type"
  "foreign"
  "fn"
  "do"
  "alias"
  "let"
  "in"
] @keyword

; 5
[
  "return"
] @keyword.return

; 6
[
  "if"
  "then"
  "else"
  "match"
  "with"
  "end"
] @keyword.control.conditional

; 7
[
  ".."
] @symbol

; 8
[
  (module_name)
  (module_import_alias)
  (qualifier) 
] @namespace

; 9
[
  (exposing_list_item_type_name)
  (type_declaration_name)
  (type_constructor_proper_name)
] @type

; 10
(type_function ("->" @type))

; 11
[
  (type_declaration_variable)
  (type_variable)
  (type_open_record_row_variable)
] @variable.parameter

; 12
[
  (type_declaration_constructor_name)
  (expression_constructor_proper_name)
  (pattern_constructor_proper_name)
] @variable.other.member

; 13
[
  (value_declaration_name) 
  (exposing_list_item_value)
] @function

; 14
[
  (pattern_variable)
  (expression_variable_name) 
] @variable

; 15
[
  ":"
  "<-"
  "|>"
] @operator
; 16
(expression_function ("->" @operator))
; 17
(expression_match_arm ("->" @operator))

; 18
(expression_string) @string

; 19
(expression_int) @constant.numeric.integer

; 20
(expression_float) @constant.numeric.float

; 21
[(expression_true) (expression_false)] @constant.builtin.boolean

; 22
(expression_unit) @constant.builtin
