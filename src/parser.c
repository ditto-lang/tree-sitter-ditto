#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 269
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 23
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 56

enum {
  anon_sym_module = 1,
  anon_sym_exports = 2,
  anon_sym_SEMI = 3,
  anon_sym_DOT = 4,
  anon_sym_import = 5,
  anon_sym_as = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_DOT_DOT = 10,
  anon_sym_type = 11,
  anon_sym_EQ = 12,
  anon_sym_PIPE = 13,
  anon_sym_DASH_GT = 14,
  anon_sym_COLON = 15,
  anon_sym_foreign = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  sym_expression_string = 19,
  sym_expression_int = 20,
  sym_expression_float = 21,
  sym_expression_true = 22,
  sym_expression_false = 23,
  sym_expression_unit = 24,
  sym__proper_name = 25,
  sym__package_name = 26,
  sym__name = 27,
  sym_comment = 28,
  sym_source_file = 29,
  sym_module_header = 30,
  sym_module_name = 31,
  sym_module_import = 32,
  sym_module_import_package = 33,
  sym_module_import_alias = 34,
  sym__exposing = 35,
  sym_exposing_everything = 36,
  sym_exposing_list = 37,
  sym__exposing_list_item = 38,
  sym_exposing_type = 39,
  sym_exposing_type_name = 40,
  sym_exposing_type_constructors = 41,
  sym__everything = 42,
  sym_exposing_value = 43,
  sym__module_declaration = 44,
  sym__type_declaration = 45,
  sym_empty_type_declaration = 46,
  sym_type_declaration = 47,
  sym_type_declaration_name = 48,
  sym_type_declaration_variables = 49,
  sym_type_declaration_variable = 50,
  sym_type_declaration_constructor = 51,
  sym_type_declaration_constructor_name = 52,
  sym_type_declaration_constructor_fields = 53,
  sym__type = 54,
  sym__type1 = 55,
  sym_type_function = 56,
  sym__type_parens = 57,
  sym_type_call = 58,
  sym_type_constructor = 59,
  sym_type_variable = 60,
  sym_type_annotation = 61,
  sym_return_type_annotation = 62,
  sym_foreign_value_declaration = 63,
  sym_value_declaration = 64,
  sym_value_declaration_name = 65,
  sym__expression = 66,
  sym__expression1 = 67,
  sym_expression_function = 68,
  sym_expression_function_parameter = 69,
  sym_expression_function_parameter_name = 70,
  sym__expression_parens = 71,
  sym_expression_call = 72,
  sym_expression_call_arguments = 73,
  sym_expression_array = 74,
  sym_expression_constructor = 75,
  sym_expression_variable = 76,
  sym__qualified_proper_name = 77,
  sym__qualified_name = 78,
  sym_qualifier = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_source_file_repeat2 = 81,
  aux_sym_module_name_repeat1 = 82,
  aux_sym_exposing_list_repeat1 = 83,
  aux_sym_type_declaration_repeat1 = 84,
  aux_sym_type_declaration_variables_repeat1 = 85,
  aux_sym_type_declaration_constructor_fields_repeat1 = 86,
  aux_sym_expression_function_repeat1 = 87,
  aux_sym_expression_call_arguments_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_exports] = "exports",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_import] = "import",
  [anon_sym_as] = "as",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [anon_sym_foreign] = "foreign",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_expression_string] = "expression_string",
  [sym_expression_int] = "expression_int",
  [sym_expression_float] = "expression_float",
  [sym_expression_true] = "expression_true",
  [sym_expression_false] = "expression_false",
  [sym_expression_unit] = "expression_unit",
  [sym__proper_name] = "_proper_name",
  [sym__package_name] = "_package_name",
  [sym__name] = "_name",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_module_header] = "module_header",
  [sym_module_name] = "module_name",
  [sym_module_import] = "module_import",
  [sym_module_import_package] = "module_import_package",
  [sym_module_import_alias] = "module_import_alias",
  [sym__exposing] = "_exposing",
  [sym_exposing_everything] = "exposing_everything",
  [sym_exposing_list] = "exposing_list",
  [sym__exposing_list_item] = "_exposing_list_item",
  [sym_exposing_type] = "exposing_type",
  [sym_exposing_type_name] = "exposing_type_name",
  [sym_exposing_type_constructors] = "exposing_type_constructors",
  [sym__everything] = "_everything",
  [sym_exposing_value] = "exposing_value",
  [sym__module_declaration] = "_module_declaration",
  [sym__type_declaration] = "_type_declaration",
  [sym_empty_type_declaration] = "empty_type_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_type_declaration_name] = "type_declaration_name",
  [sym_type_declaration_variables] = "type_declaration_variables",
  [sym_type_declaration_variable] = "type_declaration_variable",
  [sym_type_declaration_constructor] = "type_declaration_constructor",
  [sym_type_declaration_constructor_name] = "type_declaration_constructor_name",
  [sym_type_declaration_constructor_fields] = "type_declaration_constructor_fields",
  [sym__type] = "_type",
  [sym__type1] = "_type1",
  [sym_type_function] = "type_function",
  [sym__type_parens] = "_type_parens",
  [sym_type_call] = "type_call",
  [sym_type_constructor] = "type_constructor",
  [sym_type_variable] = "type_variable",
  [sym_type_annotation] = "type_annotation",
  [sym_return_type_annotation] = "return_type_annotation",
  [sym_foreign_value_declaration] = "foreign_value_declaration",
  [sym_value_declaration] = "value_declaration",
  [sym_value_declaration_name] = "value_declaration_name",
  [sym__expression] = "_expression",
  [sym__expression1] = "_expression1",
  [sym_expression_function] = "expression_function",
  [sym_expression_function_parameter] = "expression_function_parameter",
  [sym_expression_function_parameter_name] = "expression_function_parameter_name",
  [sym__expression_parens] = "_expression_parens",
  [sym_expression_call] = "expression_call",
  [sym_expression_call_arguments] = "expression_call_arguments",
  [sym_expression_array] = "expression_array",
  [sym_expression_constructor] = "expression_constructor",
  [sym_expression_variable] = "expression_variable",
  [sym__qualified_proper_name] = "_qualified_proper_name",
  [sym__qualified_name] = "_qualified_name",
  [sym_qualifier] = "qualifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_module_name_repeat1] = "module_name_repeat1",
  [aux_sym_exposing_list_repeat1] = "exposing_list_repeat1",
  [aux_sym_type_declaration_repeat1] = "type_declaration_repeat1",
  [aux_sym_type_declaration_variables_repeat1] = "type_declaration_variables_repeat1",
  [aux_sym_type_declaration_constructor_fields_repeat1] = "type_declaration_constructor_fields_repeat1",
  [aux_sym_expression_function_repeat1] = "expression_function_repeat1",
  [aux_sym_expression_call_arguments_repeat1] = "expression_call_arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_exports] = anon_sym_exports,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_foreign] = anon_sym_foreign,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_expression_string] = sym_expression_string,
  [sym_expression_int] = sym_expression_int,
  [sym_expression_float] = sym_expression_float,
  [sym_expression_true] = sym_expression_true,
  [sym_expression_false] = sym_expression_false,
  [sym_expression_unit] = sym_expression_unit,
  [sym__proper_name] = sym__proper_name,
  [sym__package_name] = sym__package_name,
  [sym__name] = sym__name,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_module_header] = sym_module_header,
  [sym_module_name] = sym_module_name,
  [sym_module_import] = sym_module_import,
  [sym_module_import_package] = sym_module_import_package,
  [sym_module_import_alias] = sym_module_import_alias,
  [sym__exposing] = sym__exposing,
  [sym_exposing_everything] = sym_exposing_everything,
  [sym_exposing_list] = sym_exposing_list,
  [sym__exposing_list_item] = sym__exposing_list_item,
  [sym_exposing_type] = sym_exposing_type,
  [sym_exposing_type_name] = sym_exposing_type_name,
  [sym_exposing_type_constructors] = sym_exposing_type_constructors,
  [sym__everything] = sym__everything,
  [sym_exposing_value] = sym_exposing_value,
  [sym__module_declaration] = sym__module_declaration,
  [sym__type_declaration] = sym__type_declaration,
  [sym_empty_type_declaration] = sym_empty_type_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_type_declaration_name] = sym_type_declaration_name,
  [sym_type_declaration_variables] = sym_type_declaration_variables,
  [sym_type_declaration_variable] = sym_type_declaration_variable,
  [sym_type_declaration_constructor] = sym_type_declaration_constructor,
  [sym_type_declaration_constructor_name] = sym_type_declaration_constructor_name,
  [sym_type_declaration_constructor_fields] = sym_type_declaration_constructor_fields,
  [sym__type] = sym__type,
  [sym__type1] = sym__type1,
  [sym_type_function] = sym_type_function,
  [sym__type_parens] = sym__type_parens,
  [sym_type_call] = sym_type_call,
  [sym_type_constructor] = sym_type_constructor,
  [sym_type_variable] = sym_type_variable,
  [sym_type_annotation] = sym_type_annotation,
  [sym_return_type_annotation] = sym_return_type_annotation,
  [sym_foreign_value_declaration] = sym_foreign_value_declaration,
  [sym_value_declaration] = sym_value_declaration,
  [sym_value_declaration_name] = sym_value_declaration_name,
  [sym__expression] = sym__expression,
  [sym__expression1] = sym__expression1,
  [sym_expression_function] = sym_expression_function,
  [sym_expression_function_parameter] = sym_expression_function_parameter,
  [sym_expression_function_parameter_name] = sym_expression_function_parameter_name,
  [sym__expression_parens] = sym__expression_parens,
  [sym_expression_call] = sym_expression_call,
  [sym_expression_call_arguments] = sym_expression_call_arguments,
  [sym_expression_array] = sym_expression_array,
  [sym_expression_constructor] = sym_expression_constructor,
  [sym_expression_variable] = sym_expression_variable,
  [sym__qualified_proper_name] = sym__qualified_proper_name,
  [sym__qualified_name] = sym__qualified_name,
  [sym_qualifier] = sym_qualifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_module_name_repeat1] = aux_sym_module_name_repeat1,
  [aux_sym_exposing_list_repeat1] = aux_sym_exposing_list_repeat1,
  [aux_sym_type_declaration_repeat1] = aux_sym_type_declaration_repeat1,
  [aux_sym_type_declaration_variables_repeat1] = aux_sym_type_declaration_variables_repeat1,
  [aux_sym_type_declaration_constructor_fields_repeat1] = aux_sym_type_declaration_constructor_fields_repeat1,
  [aux_sym_expression_function_repeat1] = aux_sym_expression_function_repeat1,
  [aux_sym_expression_call_arguments_repeat1] = aux_sym_expression_call_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_expression_string] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_int] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_float] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_true] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_false] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__proper_name] = {
    .visible = false,
    .named = true,
  },
  [sym__package_name] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module_header] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_module_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module_import_package] = {
    .visible = true,
    .named = true,
  },
  [sym_module_import_alias] = {
    .visible = true,
    .named = true,
  },
  [sym__exposing] = {
    .visible = false,
    .named = true,
  },
  [sym_exposing_everything] = {
    .visible = true,
    .named = true,
  },
  [sym_exposing_list] = {
    .visible = true,
    .named = true,
  },
  [sym__exposing_list_item] = {
    .visible = false,
    .named = true,
  },
  [sym_exposing_type] = {
    .visible = true,
    .named = true,
  },
  [sym_exposing_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_exposing_type_constructors] = {
    .visible = true,
    .named = true,
  },
  [sym__everything] = {
    .visible = false,
    .named = true,
  },
  [sym_exposing_value] = {
    .visible = true,
    .named = true,
  },
  [sym__module_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__type_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_empty_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_constructor_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_constructor_fields] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__type1] = {
    .visible = false,
    .named = true,
  },
  [sym_type_function] = {
    .visible = true,
    .named = true,
  },
  [sym__type_parens] = {
    .visible = false,
    .named = true,
  },
  [sym_type_call] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_value_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_value_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_value_declaration_name] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression1] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_function] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_function_parameter_name] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_parens] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_call] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_call_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_array] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__qualified_proper_name] = {
    .visible = false,
    .named = true,
  },
  [sym__qualified_name] = {
    .visible = false,
    .named = true,
  },
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exposing_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_declaration_variables_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_declaration_constructor_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_call_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_argument = 2,
  field_arguments = 3,
  field_body = 4,
  field_constructor = 5,
  field_declaration = 6,
  field_element = 7,
  field_exports = 8,
  field_expression = 9,
  field_field = 10,
  field_fields = 11,
  field_function = 12,
  field_header = 13,
  field_import = 14,
  field_imports = 15,
  field_module_name = 16,
  field_name = 17,
  field_package = 18,
  field_parameter = 19,
  field_return_type = 20,
  field_type_annotation = 21,
  field_variable = 22,
  field_variables = 23,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_constructor] = "constructor",
  [field_declaration] = "declaration",
  [field_element] = "element",
  [field_exports] = "exports",
  [field_expression] = "expression",
  [field_field] = "field",
  [field_fields] = "fields",
  [field_function] = "function",
  [field_header] = "header",
  [field_import] = "import",
  [field_imports] = "imports",
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_package] = "package",
  [field_parameter] = "parameter",
  [field_return_type] = "return_type",
  [field_type_annotation] = "type_annotation",
  [field_variable] = "variable",
  [field_variables] = "variables",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 3},
  [18] = {.index = 33, .length = 1},
  [19] = {.index = 34, .length = 2},
  [20] = {.index = 36, .length = 2},
  [21] = {.index = 38, .length = 2},
  [22] = {.index = 40, .length = 1},
  [23] = {.index = 41, .length = 3},
  [24] = {.index = 44, .length = 3},
  [25] = {.index = 47, .length = 4},
  [26] = {.index = 51, .length = 4},
  [27] = {.index = 55, .length = 2},
  [28] = {.index = 57, .length = 3},
  [29] = {.index = 60, .length = 3},
  [30] = {.index = 63, .length = 1},
  [31] = {.index = 64, .length = 2},
  [32] = {.index = 66, .length = 1},
  [33] = {.index = 67, .length = 1},
  [34] = {.index = 68, .length = 4},
  [35] = {.index = 72, .length = 5},
  [36] = {.index = 77, .length = 3},
  [37] = {.index = 80, .length = 4},
  [38] = {.index = 84, .length = 1},
  [39] = {.index = 85, .length = 4},
  [40] = {.index = 89, .length = 2},
  [41] = {.index = 91, .length = 2},
  [42] = {.index = 93, .length = 3},
  [43] = {.index = 96, .length = 2},
  [44] = {.index = 98, .length = 2},
  [45] = {.index = 100, .length = 2},
  [46] = {.index = 102, .length = 5},
  [47] = {.index = 107, .length = 3},
  [48] = {.index = 110, .length = 3},
  [49] = {.index = 113, .length = 3},
  [50] = {.index = 116, .length = 3},
  [51] = {.index = 119, .length = 3},
  [52] = {.index = 122, .length = 4},
  [53] = {.index = 126, .length = 4},
  [54] = {.index = 130, .length = 4},
  [55] = {.index = 134, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_header, 0},
  [1] =
    {field_header, 0},
    {field_import, 1},
  [3] =
    {field_declaration, 1},
    {field_header, 0},
  [5] =
    {field_declaration, 2},
    {field_header, 0},
    {field_import, 1},
  [8] =
    {field_module_name, 1},
  [9] =
    {field_name, 1},
  [10] =
    {field_exports, 3},
    {field_module_name, 1},
  [12] =
    {field_imports, 2},
    {field_module_name, 1},
  [14] =
    {field_module_name, 2},
    {field_package, 1},
  [16] =
    {field_name, 0},
  [17] =
    {field_name, 1},
    {field_variables, 2},
  [19] =
    {field_name, 1},
    {field_type_annotation, 2},
  [21] =
    {field_expression, 2},
    {field_name, 0},
  [23] =
    {field_arguments, 1},
    {field_function, 0},
  [25] =
    {field_argument, 1},
    {field_function, 0},
  [27] =
    {field_alias, 2},
    {field_alias, 3},
    {field_module_name, 1},
  [30] =
    {field_imports, 3},
    {field_module_name, 2},
    {field_package, 1},
  [33] =
    {field_variable, 1},
  [34] =
    {field_constructor, 3},
    {field_name, 1},
  [36] =
    {field_fields, 1},
    {field_name, 0},
  [38] =
    {field_name, 0},
    {field_type_annotation, 1},
  [40] =
    {field_element, 1},
  [41] =
    {field_argument, 1},
    {field_argument, 2},
    {field_function, 0},
  [44] =
    {field_expression, 3},
    {field_name, 0},
    {field_type_annotation, 1},
  [47] =
    {field_alias, 2},
    {field_alias, 3},
    {field_imports, 4},
    {field_module_name, 1},
  [51] =
    {field_alias, 3},
    {field_alias, 4},
    {field_module_name, 2},
    {field_package, 1},
  [55] =
    {field_variable, 1},
    {field_variable, 2},
  [57] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_name, 1},
  [60] =
    {field_constructor, 4},
    {field_name, 1},
    {field_variables, 2},
  [63] =
    {field_body, 3},
  [64] =
    {field_element, 1},
    {field_element, 2},
  [66] =
    {field_argument, 1},
  [67] =
    {field_return_type, 3},
  [68] =
    {field_argument, 1},
    {field_argument, 2},
    {field_argument, 3},
    {field_function, 0},
  [72] =
    {field_alias, 3},
    {field_alias, 4},
    {field_imports, 5},
    {field_module_name, 2},
    {field_package, 1},
  [77] =
    {field_variable, 1},
    {field_variable, 2},
    {field_variable, 3},
  [80] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
  [84] =
    {field_field, 1},
  [85] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
    {field_variables, 2},
  [89] =
    {field_body, 4},
    {field_return_type, 2},
  [91] =
    {field_body, 4},
    {field_parameter, 1},
  [93] =
    {field_element, 1},
    {field_element, 2},
    {field_element, 3},
  [96] =
    {field_argument, 1},
    {field_argument, 2},
  [98] =
    {field_parameter, 1},
    {field_return_type, 4},
  [100] =
    {field_field, 1},
    {field_field, 2},
  [102] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_constructor, 6},
    {field_name, 1},
    {field_variables, 2},
  [107] =
    {field_body, 5},
    {field_parameter, 1},
    {field_return_type, 3},
  [110] =
    {field_body, 5},
    {field_parameter, 1},
    {field_parameter, 2},
  [113] =
    {field_argument, 1},
    {field_argument, 2},
    {field_argument, 3},
  [116] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_return_type, 5},
  [119] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [122] =
    {field_body, 6},
    {field_parameter, 1},
    {field_parameter, 2},
    {field_return_type, 4},
  [126] =
    {field_body, 6},
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
  [130] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 6},
  [134] =
    {field_body, 7},
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 21,
  [27] = 20,
  [28] = 22,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 31,
  [35] = 35,
  [36] = 33,
  [37] = 22,
  [38] = 35,
  [39] = 33,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 44,
  [47] = 47,
  [48] = 42,
  [49] = 49,
  [50] = 41,
  [51] = 45,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 47,
  [56] = 47,
  [57] = 41,
  [58] = 58,
  [59] = 53,
  [60] = 53,
  [61] = 42,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 86,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 85,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 82,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 86,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 85,
  [166] = 100,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 85,
  [181] = 164,
  [182] = 182,
  [183] = 149,
  [184] = 184,
  [185] = 86,
  [186] = 149,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 164,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 82,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 242,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 241,
  [254] = 244,
  [255] = 242,
  [256] = 256,
  [257] = 241,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 244,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
};

static inline bool anon_sym_LPAREN_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym__proper_name_character_set_1(int32_t c) {
  return (c < 7734
    ? (c < 913
      ? (c < 422
        ? (c < 327
          ? (c < 288
            ? (c < 268
              ? (c < 258
                ? (c < 216
                  ? (c < 192
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 214)
                  : (c <= 222 || c == 256))
                : (c <= 258 || (c < 264
                  ? (c < 262
                    ? c == 260
                    : c <= 262)
                  : (c <= 264 || c == 266))))
              : (c <= 268 || (c < 278
                ? (c < 274
                  ? (c < 272
                    ? c == 270
                    : c <= 272)
                  : (c <= 274 || c == 276))
                : (c <= 278 || (c < 284
                  ? (c < 282
                    ? c == 280
                    : c <= 282)
                  : (c <= 284 || c == 286))))))
            : (c <= 288 || (c < 308
              ? (c < 298
                ? (c < 294
                  ? (c < 292
                    ? c == 290
                    : c <= 292)
                  : (c <= 294 || c == 296))
                : (c <= 298 || (c < 304
                  ? (c < 302
                    ? c == 300
                    : c <= 302)
                  : (c <= 304 || c == 306))))
              : (c <= 308 || (c < 319
                ? (c < 315
                  ? (c < 313
                    ? c == 310
                    : c <= 313)
                  : (c <= 315 || c == 317))
                : (c <= 319 || (c < 323
                  ? c == 321
                  : (c <= 323 || c == 325))))))))
          : (c <= 327 || (c < 366
            ? (c < 348
              ? (c < 338
                ? (c < 334
                  ? (c < 332
                    ? c == 330
                    : c <= 332)
                  : (c <= 334 || c == 336))
                : (c <= 338 || (c < 344
                  ? (c < 342
                    ? c == 340
                    : c <= 342)
                  : (c <= 344 || c == 346))))
              : (c <= 348 || (c < 358
                ? (c < 354
                  ? (c < 352
                    ? c == 350
                    : c <= 352)
                  : (c <= 354 || c == 356))
                : (c <= 358 || (c < 362
                  ? c == 360
                  : (c <= 362 || c == 364))))))
            : (c <= 366 || (c < 390
              ? (c < 376
                ? (c < 372
                  ? (c < 370
                    ? c == 368
                    : c <= 370)
                  : (c <= 372 || c == 374))
                : (c <= 377 || (c < 385
                  ? (c < 381
                    ? c == 379
                    : c <= 381)
                  : (c <= 386 || c == 388))))
              : (c <= 391 || (c < 412
                ? (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))
                : (c <= 413 || (c < 418
                  ? (c >= 415 && c <= 416)
                  : (c <= 418 || c == 420))))))))))
        : (c <= 423 || (c < 520
          ? (c < 478
            ? (c < 458
              ? (c < 437
                ? (c < 430
                  ? (c < 428
                    ? c == 425
                    : c <= 428)
                  : (c <= 431 || (c >= 433 && c <= 435)))
                : (c <= 437 || (c < 452
                  ? (c < 444
                    ? (c >= 439 && c <= 440)
                    : c <= 444)
                  : (c <= 452 || c == 455))))
              : (c <= 458 || (c < 469
                ? (c < 465
                  ? (c < 463
                    ? c == 461
                    : c <= 463)
                  : (c <= 465 || c == 467))
                : (c <= 469 || (c < 473
                  ? c == 471
                  : (c <= 473 || c == 475))))))
            : (c <= 478 || (c < 500
              ? (c < 488
                ? (c < 484
                  ? (c < 482
                    ? c == 480
                    : c <= 482)
                  : (c <= 484 || c == 486))
                : (c <= 488 || (c < 494
                  ? (c < 492
                    ? c == 490
                    : c <= 492)
                  : (c <= 494 || c == 497))))
              : (c <= 500 || (c < 512
                ? (c < 508
                  ? (c < 506
                    ? (c >= 502 && c <= 504)
                    : c <= 506)
                  : (c <= 508 || c == 510))
                : (c <= 512 || (c < 516
                  ? c == 514
                  : (c <= 516 || c == 518))))))))
          : (c <= 520 || (c < 558
            ? (c < 540
              ? (c < 530
                ? (c < 526
                  ? (c < 524
                    ? c == 522
                    : c <= 524)
                  : (c <= 526 || c == 528))
                : (c <= 530 || (c < 536
                  ? (c < 534
                    ? c == 532
                    : c <= 534)
                  : (c <= 536 || c == 538))))
              : (c <= 540 || (c < 550
                ? (c < 546
                  ? (c < 544
                    ? c == 542
                    : c <= 544)
                  : (c <= 546 || c == 548))
                : (c <= 550 || (c < 554
                  ? c == 552
                  : (c <= 554 || c == 556))))))
            : (c <= 558 || (c < 590
              ? (c < 577
                ? (c < 570
                  ? (c < 562
                    ? c == 560
                    : c <= 562)
                  : (c <= 571 || (c >= 573 && c <= 574)))
                : (c <= 577 || (c < 586
                  ? (c < 584
                    ? (c >= 579 && c <= 582)
                    : c <= 584)
                  : (c <= 586 || c == 588))))
              : (c <= 590 || (c < 902
                ? (c < 886
                  ? (c < 882
                    ? c == 880
                    : c <= 882)
                  : (c <= 886 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 911)))))))))))))
      : (c <= 929 || (c < 1244
        ? (c < 1166
          ? (c < 1120
            ? (c < 996
              ? (c < 986
                ? (c < 978
                  ? (c < 975
                    ? (c >= 931 && c <= 939)
                    : c <= 975)
                  : (c <= 980 || c == 984))
                : (c <= 986 || (c < 992
                  ? (c < 990
                    ? c == 988
                    : c <= 990)
                  : (c <= 992 || c == 994))))
              : (c <= 996 || (c < 1006
                ? (c < 1002
                  ? (c < 1000
                    ? c == 998
                    : c <= 1000)
                  : (c <= 1002 || c == 1004))
                : (c <= 1006 || (c < 1017
                  ? (c < 1015
                    ? c == 1012
                    : c <= 1015)
                  : (c <= 1018 || (c >= 1021 && c <= 1071)))))))
            : (c <= 1120 || (c < 1140
              ? (c < 1130
                ? (c < 1126
                  ? (c < 1124
                    ? c == 1122
                    : c <= 1124)
                  : (c <= 1126 || c == 1128))
                : (c <= 1130 || (c < 1136
                  ? (c < 1134
                    ? c == 1132
                    : c <= 1134)
                  : (c <= 1136 || c == 1138))))
              : (c <= 1140 || (c < 1150
                ? (c < 1146
                  ? (c < 1144
                    ? c == 1142
                    : c <= 1144)
                  : (c <= 1146 || c == 1148))
                : (c <= 1150 || (c < 1162
                  ? c == 1152
                  : (c <= 1162 || c == 1164))))))))
          : (c <= 1166 || (c < 1204
            ? (c < 1186
              ? (c < 1176
                ? (c < 1172
                  ? (c < 1170
                    ? c == 1168
                    : c <= 1170)
                  : (c <= 1172 || c == 1174))
                : (c <= 1176 || (c < 1182
                  ? (c < 1180
                    ? c == 1178
                    : c <= 1180)
                  : (c <= 1182 || c == 1184))))
              : (c <= 1186 || (c < 1196
                ? (c < 1192
                  ? (c < 1190
                    ? c == 1188
                    : c <= 1190)
                  : (c <= 1192 || c == 1194))
                : (c <= 1196 || (c < 1200
                  ? c == 1198
                  : (c <= 1200 || c == 1202))))))
            : (c <= 1204 || (c < 1225
              ? (c < 1214
                ? (c < 1210
                  ? (c < 1208
                    ? c == 1206
                    : c <= 1208)
                  : (c <= 1210 || c == 1212))
                : (c <= 1214 || (c < 1221
                  ? (c < 1219
                    ? (c >= 1216 && c <= 1217)
                    : c <= 1219)
                  : (c <= 1221 || c == 1223))))
              : (c <= 1225 || (c < 1236
                ? (c < 1232
                  ? (c < 1229
                    ? c == 1227
                    : c <= 1229)
                  : (c <= 1232 || c == 1234))
                : (c <= 1236 || (c < 1240
                  ? c == 1238
                  : (c <= 1240 || c == 1242))))))))))
        : (c <= 1244 || (c < 1320
          ? (c < 1282
            ? (c < 1264
              ? (c < 1254
                ? (c < 1250
                  ? (c < 1248
                    ? c == 1246
                    : c <= 1248)
                  : (c <= 1250 || c == 1252))
                : (c <= 1254 || (c < 1260
                  ? (c < 1258
                    ? c == 1256
                    : c <= 1258)
                  : (c <= 1260 || c == 1262))))
              : (c <= 1264 || (c < 1274
                ? (c < 1270
                  ? (c < 1268
                    ? c == 1266
                    : c <= 1268)
                  : (c <= 1270 || c == 1272))
                : (c <= 1274 || (c < 1278
                  ? c == 1276
                  : (c <= 1278 || c == 1280))))))
            : (c <= 1282 || (c < 1302
              ? (c < 1292
                ? (c < 1288
                  ? (c < 1286
                    ? c == 1284
                    : c <= 1286)
                  : (c <= 1288 || c == 1290))
                : (c <= 1292 || (c < 1298
                  ? (c < 1296
                    ? c == 1294
                    : c <= 1296)
                  : (c <= 1298 || c == 1300))))
              : (c <= 1302 || (c < 1312
                ? (c < 1308
                  ? (c < 1306
                    ? c == 1304
                    : c <= 1306)
                  : (c <= 1308 || c == 1310))
                : (c <= 1312 || (c < 1316
                  ? c == 1314
                  : (c <= 1316 || c == 1318))))))))
          : (c <= 1320 || (c < 7696
            ? (c < 7357
              ? (c < 4256
                ? (c < 1326
                  ? (c < 1324
                    ? c == 1322
                    : c <= 1324)
                  : (c <= 1326 || (c >= 1329 && c <= 1366)))
                : (c <= 4293 || (c < 5024
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 5109 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7688
                ? (c < 7684
                  ? (c < 7682
                    ? c == 7680
                    : c <= 7682)
                  : (c <= 7684 || c == 7686))
                : (c <= 7688 || (c < 7692
                  ? c == 7690
                  : (c <= 7692 || c == 7694))))))
            : (c <= 7696 || (c < 7716
              ? (c < 7706
                ? (c < 7702
                  ? (c < 7700
                    ? c == 7698
                    : c <= 7700)
                  : (c <= 7702 || c == 7704))
                : (c <= 7706 || (c < 7712
                  ? (c < 7710
                    ? c == 7708
                    : c <= 7710)
                  : (c <= 7712 || c == 7714))))
              : (c <= 7716 || (c < 7726
                ? (c < 7722
                  ? (c < 7720
                    ? c == 7718
                    : c <= 7720)
                  : (c <= 7722 || c == 7724))
                : (c <= 7726 || (c < 7730
                  ? c == 7728
                  : (c <= 7730 || c == 7732))))))))))))))
    : (c <= 7734 || (c < 11428
      ? (c < 7896
        ? (c < 7812
          ? (c < 7774
            ? (c < 7754
              ? (c < 7744
                ? (c < 7740
                  ? (c < 7738
                    ? c == 7736
                    : c <= 7738)
                  : (c <= 7740 || c == 7742))
                : (c <= 7744 || (c < 7750
                  ? (c < 7748
                    ? c == 7746
                    : c <= 7748)
                  : (c <= 7750 || c == 7752))))
              : (c <= 7754 || (c < 7764
                ? (c < 7760
                  ? (c < 7758
                    ? c == 7756
                    : c <= 7758)
                  : (c <= 7760 || c == 7762))
                : (c <= 7764 || (c < 7770
                  ? (c < 7768
                    ? c == 7766
                    : c <= 7768)
                  : (c <= 7770 || c == 7772))))))
            : (c <= 7774 || (c < 7794
              ? (c < 7784
                ? (c < 7780
                  ? (c < 7778
                    ? c == 7776
                    : c <= 7778)
                  : (c <= 7780 || c == 7782))
                : (c <= 7784 || (c < 7790
                  ? (c < 7788
                    ? c == 7786
                    : c <= 7788)
                  : (c <= 7790 || c == 7792))))
              : (c <= 7794 || (c < 7804
                ? (c < 7800
                  ? (c < 7798
                    ? c == 7796
                    : c <= 7798)
                  : (c <= 7800 || c == 7802))
                : (c <= 7804 || (c < 7808
                  ? c == 7806
                  : (c <= 7808 || c == 7810))))))))
          : (c <= 7812 || (c < 7858
            ? (c < 7840
              ? (c < 7822
                ? (c < 7818
                  ? (c < 7816
                    ? c == 7814
                    : c <= 7816)
                  : (c <= 7818 || c == 7820))
                : (c <= 7822 || (c < 7828
                  ? (c < 7826
                    ? c == 7824
                    : c <= 7826)
                  : (c <= 7828 || c == 7838))))
              : (c <= 7840 || (c < 7850
                ? (c < 7846
                  ? (c < 7844
                    ? c == 7842
                    : c <= 7844)
                  : (c <= 7846 || c == 7848))
                : (c <= 7850 || (c < 7854
                  ? c == 7852
                  : (c <= 7854 || c == 7856))))))
            : (c <= 7858 || (c < 7878
              ? (c < 7868
                ? (c < 7864
                  ? (c < 7862
                    ? c == 7860
                    : c <= 7862)
                  : (c <= 7864 || c == 7866))
                : (c <= 7868 || (c < 7874
                  ? (c < 7872
                    ? c == 7870
                    : c <= 7872)
                  : (c <= 7874 || c == 7876))))
              : (c <= 7878 || (c < 7888
                ? (c < 7884
                  ? (c < 7882
                    ? c == 7880
                    : c <= 7882)
                  : (c <= 7884 || c == 7886))
                : (c <= 7888 || (c < 7892
                  ? c == 7890
                  : (c <= 7892 || c == 7894))))))))))
        : (c <= 7896 || (c < 8464
          ? (c < 7934
            ? (c < 7916
              ? (c < 7906
                ? (c < 7902
                  ? (c < 7900
                    ? c == 7898
                    : c <= 7900)
                  : (c <= 7902 || c == 7904))
                : (c <= 7906 || (c < 7912
                  ? (c < 7910
                    ? c == 7908
                    : c <= 7910)
                  : (c <= 7912 || c == 7914))))
              : (c <= 7916 || (c < 7926
                ? (c < 7922
                  ? (c < 7920
                    ? c == 7918
                    : c <= 7920)
                  : (c <= 7922 || c == 7924))
                : (c <= 7926 || (c < 7930
                  ? c == 7928
                  : (c <= 7930 || c == 7932))))))
            : (c <= 7934 || (c < 8040
              ? (c < 8008
                ? (c < 7976
                  ? (c < 7960
                    ? (c >= 7944 && c <= 7951)
                    : c <= 7965)
                  : (c <= 7983 || (c >= 7992 && c <= 7999)))
                : (c <= 8013 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || c == 8031))))
              : (c <= 8047 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8123)
                    : c <= 8139)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8187 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool sym__package_name_character_set_1(int32_t c) {
  return (c < 7749
    ? (c < 987
      ? (c < 424
        ? (c < 326
          ? (c < 287
            ? (c < 267
              ? (c < 257
                ? (c < 223
                  ? (c < 181
                    ? (c >= 'a' && c <= 'z')
                    : c <= 181)
                  : (c <= 246 || (c >= 248 && c <= 255)))
                : (c <= 257 || (c < 263
                  ? (c < 261
                    ? c == 259
                    : c <= 261)
                  : (c <= 263 || c == 265))))
              : (c <= 267 || (c < 277
                ? (c < 273
                  ? (c < 271
                    ? c == 269
                    : c <= 271)
                  : (c <= 273 || c == 275))
                : (c <= 277 || (c < 283
                  ? (c < 281
                    ? c == 279
                    : c <= 281)
                  : (c <= 283 || c == 285))))))
            : (c <= 287 || (c < 307
              ? (c < 297
                ? (c < 293
                  ? (c < 291
                    ? c == 289
                    : c <= 291)
                  : (c <= 293 || c == 295))
                : (c <= 297 || (c < 303
                  ? (c < 301
                    ? c == 299
                    : c <= 301)
                  : (c <= 303 || c == 305))))
              : (c <= 307 || (c < 318
                ? (c < 314
                  ? (c < 311
                    ? c == 309
                    : c <= 312)
                  : (c <= 314 || c == 316))
                : (c <= 318 || (c < 322
                  ? c == 320
                  : (c <= 322 || c == 324))))))))
          : (c <= 326 || (c < 367
            ? (c < 347
              ? (c < 337
                ? (c < 333
                  ? (c < 331
                    ? (c >= 328 && c <= 329)
                    : c <= 331)
                  : (c <= 333 || c == 335))
                : (c <= 337 || (c < 343
                  ? (c < 341
                    ? c == 339
                    : c <= 341)
                  : (c <= 343 || c == 345))))
              : (c <= 347 || (c < 357
                ? (c < 353
                  ? (c < 351
                    ? c == 349
                    : c <= 351)
                  : (c <= 353 || c == 355))
                : (c <= 357 || (c < 363
                  ? (c < 361
                    ? c == 359
                    : c <= 361)
                  : (c <= 363 || c == 365))))))
            : (c <= 367 || (c < 392
              ? (c < 378
                ? (c < 373
                  ? (c < 371
                    ? c == 369
                    : c <= 371)
                  : (c <= 373 || c == 375))
                : (c <= 378 || (c < 387
                  ? (c < 382
                    ? c == 380
                    : c <= 384)
                  : (c <= 387 || c == 389))))
              : (c <= 392 || (c < 414
                ? (c < 405
                  ? (c < 402
                    ? (c >= 396 && c <= 397)
                    : c <= 402)
                  : (c <= 405 || (c >= 409 && c <= 411)))
                : (c <= 414 || (c < 419
                  ? c == 417
                  : (c <= 419 || c == 421))))))))))
        : (c <= 424 || (c < 523
          ? (c < 481
            ? (c < 460
              ? (c < 438
                ? (c < 432
                  ? (c < 429
                    ? (c >= 426 && c <= 427)
                    : c <= 429)
                  : (c <= 432 || c == 436))
                : (c <= 438 || (c < 454
                  ? (c < 445
                    ? (c >= 441 && c <= 442)
                    : c <= 447)
                  : (c <= 454 || c == 457))))
              : (c <= 460 || (c < 470
                ? (c < 466
                  ? (c < 464
                    ? c == 462
                    : c <= 464)
                  : (c <= 466 || c == 468))
                : (c <= 470 || (c < 476
                  ? (c < 474
                    ? c == 472
                    : c <= 474)
                  : (c <= 477 || c == 479))))))
            : (c <= 481 || (c < 505
              ? (c < 491
                ? (c < 487
                  ? (c < 485
                    ? c == 483
                    : c <= 485)
                  : (c <= 487 || c == 489))
                : (c <= 491 || (c < 499
                  ? (c < 495
                    ? c == 493
                    : c <= 496)
                  : (c <= 499 || c == 501))))
              : (c <= 505 || (c < 515
                ? (c < 511
                  ? (c < 509
                    ? c == 507
                    : c <= 509)
                  : (c <= 511 || c == 513))
                : (c <= 515 || (c < 519
                  ? c == 517
                  : (c <= 519 || c == 521))))))))
          : (c <= 523 || (c < 563
            ? (c < 543
              ? (c < 533
                ? (c < 529
                  ? (c < 527
                    ? c == 525
                    : c <= 527)
                  : (c <= 529 || c == 531))
                : (c <= 533 || (c < 539
                  ? (c < 537
                    ? c == 535
                    : c <= 537)
                  : (c <= 539 || c == 541))))
              : (c <= 543 || (c < 553
                ? (c < 549
                  ? (c < 547
                    ? c == 545
                    : c <= 547)
                  : (c <= 549 || c == 551))
                : (c <= 553 || (c < 559
                  ? (c < 557
                    ? c == 555
                    : c <= 557)
                  : (c <= 559 || c == 561))))))
            : (c <= 569 || (c < 881
              ? (c < 585
                ? (c < 578
                  ? (c < 575
                    ? c == 572
                    : c <= 576)
                  : (c <= 578 || c == 583))
                : (c <= 585 || (c < 591
                  ? (c < 589
                    ? c == 587
                    : c <= 589)
                  : (c <= 659 || (c >= 661 && c <= 687)))))
              : (c <= 881 || (c < 940
                ? (c < 891
                  ? (c < 887
                    ? c == 883
                    : c <= 887)
                  : (c <= 893 || c == 912))
                : (c <= 974 || (c < 981
                  ? (c >= 976 && c <= 977)
                  : (c <= 983 || c == 985))))))))))))
      : (c <= 987 || (c < 1257
        ? (c < 1177
          ? (c < 1131
            ? (c < 1007
              ? (c < 997
                ? (c < 993
                  ? (c < 991
                    ? c == 989
                    : c <= 991)
                  : (c <= 993 || c == 995))
                : (c <= 997 || (c < 1003
                  ? (c < 1001
                    ? c == 999
                    : c <= 1001)
                  : (c <= 1003 || c == 1005))))
              : (c <= 1011 || (c < 1121
                ? (c < 1019
                  ? (c < 1016
                    ? c == 1013
                    : c <= 1016)
                  : (c <= 1020 || (c >= 1072 && c <= 1119)))
                : (c <= 1121 || (c < 1127
                  ? (c < 1125
                    ? c == 1123
                    : c <= 1125)
                  : (c <= 1127 || c == 1129))))))
            : (c <= 1131 || (c < 1151
              ? (c < 1141
                ? (c < 1137
                  ? (c < 1135
                    ? c == 1133
                    : c <= 1135)
                  : (c <= 1137 || c == 1139))
                : (c <= 1141 || (c < 1147
                  ? (c < 1145
                    ? c == 1143
                    : c <= 1145)
                  : (c <= 1147 || c == 1149))))
              : (c <= 1151 || (c < 1169
                ? (c < 1165
                  ? (c < 1163
                    ? c == 1153
                    : c <= 1163)
                  : (c <= 1165 || c == 1167))
                : (c <= 1169 || (c < 1173
                  ? c == 1171
                  : (c <= 1173 || c == 1175))))))))
          : (c <= 1177 || (c < 1218
            ? (c < 1197
              ? (c < 1187
                ? (c < 1183
                  ? (c < 1181
                    ? c == 1179
                    : c <= 1181)
                  : (c <= 1183 || c == 1185))
                : (c <= 1187 || (c < 1193
                  ? (c < 1191
                    ? c == 1189
                    : c <= 1191)
                  : (c <= 1193 || c == 1195))))
              : (c <= 1197 || (c < 1207
                ? (c < 1203
                  ? (c < 1201
                    ? c == 1199
                    : c <= 1201)
                  : (c <= 1203 || c == 1205))
                : (c <= 1207 || (c < 1213
                  ? (c < 1211
                    ? c == 1209
                    : c <= 1211)
                  : (c <= 1213 || c == 1215))))))
            : (c <= 1218 || (c < 1239
              ? (c < 1228
                ? (c < 1224
                  ? (c < 1222
                    ? c == 1220
                    : c <= 1222)
                  : (c <= 1224 || c == 1226))
                : (c <= 1228 || (c < 1235
                  ? (c < 1233
                    ? (c >= 1230 && c <= 1231)
                    : c <= 1233)
                  : (c <= 1235 || c == 1237))))
              : (c <= 1239 || (c < 1249
                ? (c < 1245
                  ? (c < 1243
                    ? c == 1241
                    : c <= 1243)
                  : (c <= 1245 || c == 1247))
                : (c <= 1249 || (c < 1253
                  ? c == 1251
                  : (c <= 1253 || c == 1255))))))))))
        : (c <= 1257 || (c < 5112
          ? (c < 1297
            ? (c < 1277
              ? (c < 1267
                ? (c < 1263
                  ? (c < 1261
                    ? c == 1259
                    : c <= 1261)
                  : (c <= 1263 || c == 1265))
                : (c <= 1267 || (c < 1273
                  ? (c < 1271
                    ? c == 1269
                    : c <= 1271)
                  : (c <= 1273 || c == 1275))))
              : (c <= 1277 || (c < 1287
                ? (c < 1283
                  ? (c < 1281
                    ? c == 1279
                    : c <= 1281)
                  : (c <= 1283 || c == 1285))
                : (c <= 1287 || (c < 1293
                  ? (c < 1291
                    ? c == 1289
                    : c <= 1291)
                  : (c <= 1293 || c == 1295))))))
            : (c <= 1297 || (c < 1317
              ? (c < 1307
                ? (c < 1303
                  ? (c < 1301
                    ? c == 1299
                    : c <= 1301)
                  : (c <= 1303 || c == 1305))
                : (c <= 1307 || (c < 1313
                  ? (c < 1311
                    ? c == 1309
                    : c <= 1311)
                  : (c <= 1313 || c == 1315))))
              : (c <= 1317 || (c < 1327
                ? (c < 1323
                  ? (c < 1321
                    ? c == 1319
                    : c <= 1321)
                  : (c <= 1323 || c == 1325))
                : (c <= 1327 || (c < 4304
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 4346 || (c >= 4349 && c <= 4351)))))))))
          : (c <= 5117 || (c < 7711
            ? (c < 7691
              ? (c < 7681
                ? (c < 7531
                  ? (c < 7424
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7467)
                  : (c <= 7543 || (c >= 7545 && c <= 7578)))
                : (c <= 7681 || (c < 7687
                  ? (c < 7685
                    ? c == 7683
                    : c <= 7685)
                  : (c <= 7687 || c == 7689))))
              : (c <= 7691 || (c < 7701
                ? (c < 7697
                  ? (c < 7695
                    ? c == 7693
                    : c <= 7695)
                  : (c <= 7697 || c == 7699))
                : (c <= 7701 || (c < 7707
                  ? (c < 7705
                    ? c == 7703
                    : c <= 7705)
                  : (c <= 7707 || c == 7709))))))
            : (c <= 7711 || (c < 7731
              ? (c < 7721
                ? (c < 7717
                  ? (c < 7715
                    ? c == 7713
                    : c <= 7715)
                  : (c <= 7717 || c == 7719))
                : (c <= 7721 || (c < 7727
                  ? (c < 7725
                    ? c == 7723
                    : c <= 7725)
                  : (c <= 7727 || c == 7729))))
              : (c <= 7731 || (c < 7741
                ? (c < 7737
                  ? (c < 7735
                    ? c == 7733
                    : c <= 7735)
                  : (c <= 7737 || c == 7739))
                : (c <= 7741 || (c < 7745
                  ? c == 7743
                  : (c <= 7745 || c == 7747))))))))))))))
    : (c <= 7749 || (c < 11447
      ? (c < 7913
        ? (c < 7827
          ? (c < 7789
            ? (c < 7769
              ? (c < 7759
                ? (c < 7755
                  ? (c < 7753
                    ? c == 7751
                    : c <= 7753)
                  : (c <= 7755 || c == 7757))
                : (c <= 7759 || (c < 7765
                  ? (c < 7763
                    ? c == 7761
                    : c <= 7763)
                  : (c <= 7765 || c == 7767))))
              : (c <= 7769 || (c < 7779
                ? (c < 7775
                  ? (c < 7773
                    ? c == 7771
                    : c <= 7773)
                  : (c <= 7775 || c == 7777))
                : (c <= 7779 || (c < 7785
                  ? (c < 7783
                    ? c == 7781
                    : c <= 7783)
                  : (c <= 7785 || c == 7787))))))
            : (c <= 7789 || (c < 7809
              ? (c < 7799
                ? (c < 7795
                  ? (c < 7793
                    ? c == 7791
                    : c <= 7793)
                  : (c <= 7795 || c == 7797))
                : (c <= 7799 || (c < 7805
                  ? (c < 7803
                    ? c == 7801
                    : c <= 7803)
                  : (c <= 7805 || c == 7807))))
              : (c <= 7809 || (c < 7819
                ? (c < 7815
                  ? (c < 7813
                    ? c == 7811
                    : c <= 7813)
                  : (c <= 7815 || c == 7817))
                : (c <= 7819 || (c < 7823
                  ? c == 7821
                  : (c <= 7823 || c == 7825))))))))
          : (c <= 7827 || (c < 7875
            ? (c < 7855
              ? (c < 7845
                ? (c < 7841
                  ? (c < 7839
                    ? (c >= 7829 && c <= 7837)
                    : c <= 7839)
                  : (c <= 7841 || c == 7843))
                : (c <= 7845 || (c < 7851
                  ? (c < 7849
                    ? c == 7847
                    : c <= 7849)
                  : (c <= 7851 || c == 7853))))
              : (c <= 7855 || (c < 7865
                ? (c < 7861
                  ? (c < 7859
                    ? c == 7857
                    : c <= 7859)
                  : (c <= 7861 || c == 7863))
                : (c <= 7865 || (c < 7871
                  ? (c < 7869
                    ? c == 7867
                    : c <= 7869)
                  : (c <= 7871 || c == 7873))))))
            : (c <= 7875 || (c < 7895
              ? (c < 7885
                ? (c < 7881
                  ? (c < 7879
                    ? c == 7877
                    : c <= 7879)
                  : (c <= 7881 || c == 7883))
                : (c <= 7885 || (c < 7891
                  ? (c < 7889
                    ? c == 7887
                    : c <= 7889)
                  : (c <= 7891 || c == 7893))))
              : (c <= 7895 || (c < 7905
                ? (c < 7901
                  ? (c < 7899
                    ? c == 7897
                    : c <= 7899)
                  : (c <= 7901 || c == 7903))
                : (c <= 7905 || (c < 7909
                  ? c == 7907
                  : (c <= 7909 || c == 7911))))))))))
        : (c <= 7913 || (c < 8518
          ? (c < 8080
            ? (c < 7933
              ? (c < 7923
                ? (c < 7919
                  ? (c < 7917
                    ? c == 7915
                    : c <= 7917)
                  : (c <= 7919 || c == 7921))
                : (c <= 7923 || (c < 7929
                  ? (c < 7927
                    ? c == 7925
                    : c <= 7927)
                  : (c <= 7929 || c == 7931))))
              : (c <= 7933 || (c < 8000
                ? (c < 7968
                  ? (c < 7952
                    ? (c >= 7935 && c <= 7943)
                    : c <= 7957)
                  : (c <= 7975 || (c >= 7984 && c <= 7991)))
                : (c <= 8005 || (c < 8048
                  ? (c < 8032
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8039)
                  : (c <= 8061 || (c >= 8064 && c <= 8071)))))))
            : (c <= 8087 || (c < 8178
              ? (c < 8130
                ? (c < 8118
                  ? (c < 8112
                    ? (c >= 8096 && c <= 8103)
                    : c <= 8116)
                  : (c <= 8119 || c == 8126))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8135)
                    : c <= 8147)
                  : (c <= 8151 || (c >= 8160 && c <= 8167)))))
              : (c <= 8180 || (c < 8495
                ? (c < 8462
                  ? (c < 8458
                    ? (c >= 8182 && c <= 8183)
                    : c <= 8458)
                  : (c <= 8463 || c == 8467))
                : (c <= 8495 || (c < 8505
                  ? c == 8500
                  : (c <= 8505 || (c >= 8508 && c <= 8509)))))))))
          : (c <= 8521 || (c < 11409
            ? (c < 11379
              ? (c < 11365
                ? (c < 11312
                  ? (c < 8580
                    ? c == 8526
                    : c <= 8580)
                  : (c <= 11359 || c == 11361))
                : (c <= 11366 || (c < 11372
                  ? (c < 11370
                    ? c == 11368
                    : c <= 11370)
                  : (c <= 11372 || c == 11377))))
              : (c <= 11380 || (c < 11399
                ? (c < 11395
                  ? (c < 11393
                    ? (c >= 11382 && c <= 11387)
                    : c <= 11393)
                  : (c <= 11395 || c == 11397))
                : (c <= 11399 || (c < 11405
                  ? (c < 11403
                    ? c == 11401
                    : c <= 11403)
                  : (c <= 11405 || c == 11407))))))
            : (c <= 11409 || (c < 11429
              ? (c < 11419
                ? (c < 11415
                  ? (c < 11413
                    ? c == 11411
                    : c <= 11413)
                  : (c <= 11415 || c == 11417))
                : (c <= 11419 || (c < 11425
                  ? (c < 11423
                    ? c == 11421
                    : c <= 11423)
                  : (c <= 11425 || c == 11427))))
              : (c <= 11429 || (c < 11439
                ? (c < 11435
                  ? (c < 11433
                    ? c == 11431
                    : c <= 11433)
                  : (c <= 11435 || c == 11437))
                : (c <= 11439 || (c < 11443
                  ? c == 11441
                  : (c <= 11443 || c == 11445))))))))))))
      : (c <= 11447 || (c < 42813
        ? (c < 42581
          ? (c < 11487
            ? (c < 11467
              ? (c < 11457
                ? (c < 11453
                  ? (c < 11451
                    ? c == 11449
                    : c <= 11451)
                  : (c <= 11453 || c == 11455))
                : (c <= 11457 || (c < 11463
                  ? (c < 11461
                    ? c == 11459
                    : c <= 11461)
                  : (c <= 11463 || c == 11465))))
              : (c <= 11467 || (c < 11477
                ? (c < 11473
                  ? (c < 11471
                    ? c == 11469
                    : c <= 11471)
                  : (c <= 11473 || c == 11475))
                : (c <= 11477 || (c < 11483
                  ? (c < 11481
                    ? c == 11479
                    : c <= 11481)
                  : (c <= 11483 || c == 11485))))))
            : (c <= 11487 || (c < 42563
              ? (c < 11507
                ? (c < 11500
                  ? (c < 11491
                    ? c == 11489
                    : c <= 11492)
                  : (c <= 11500 || c == 11502))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || c == 42561))))
              : (c <= 42563 || (c < 42573
                ? (c < 42569
                  ? (c < 42567
                    ? c == 42565
                    : c <= 42567)
                  : (c <= 42569 || c == 42571))
                : (c <= 42573 || (c < 42577
                  ? c == 42575
                  : (c <= 42577 || c == 42579))))))))
          : (c <= 42581 || (c < 42639
            ? (c < 42601
              ? (c < 42591
                ? (c < 42587
                  ? (c < 42585
                    ? c == 42583
                    : c <= 42585)
                  : (c <= 42587 || c == 42589))
                : (c <= 42591 || (c < 42597
                  ? (c < 42595
                    ? c == 42593
                    : c <= 42595)
                  : (c <= 42597 || c == 42599))))
              : (c <= 42601 || (c < 42629
                ? (c < 42625
                  ? (c < 42605
                    ? c == 42603
                    : c <= 42605)
                  : (c <= 42625 || c == 42627))
                : (c <= 42629 || (c < 42635
                  ? (c < 42633
                    ? c == 42631
                    : c <= 42633)
                  : (c <= 42635 || c == 42637))))))
            : (c <= 42639 || (c < 42793
              ? (c < 42649
                ? (c < 42645
                  ? (c < 42643
                    ? c == 42641
                    : c <= 42643)
                  : (c <= 42645 || c == 42647))
                : (c <= 42649 || (c < 42789
                  ? (c < 42787
                    ? c == 42651
                    : c <= 42787)
                  : (c <= 42789 || c == 42791))))
              : (c <= 42793 || (c < 42805
                ? (c < 42799
                  ? (c < 42797
                    ? c == 42795
                    : c <= 42797)
                  : (c <= 42801 || c == 42803))
                : (c <= 42805 || (c < 42809
                  ? c == 42807
                  : (c <= 42809 || c == 42811))))))))))
        : (c <= 42813 || (c < 42905
          ? (c < 42853
            ? (c < 42833
              ? (c < 42823
                ? (c < 42819
                  ? (c < 42817
                    ? c == 42815
                    : c <= 42817)
                  : (c <= 42819 || c == 42821))
                : (c <= 42823 || (c < 42829
                  ? (c < 42827
                    ? c == 42825
                    : c <= 42827)
                  : (c <= 42829 || c == 42831))))
              : (c <= 42833 || (c < 42843
                ? (c < 42839
                  ? (c < 42837
                    ? c == 42835
                    : c <= 42837)
                  : (c <= 42839 || c == 42841))
                : (c <= 42843 || (c < 42849
                  ? (c < 42847
                    ? c == 42845
                    : c <= 42847)
                  : (c <= 42849 || c == 42851))))))
            : (c <= 42853 || (c < 42881
              ? (c < 42863
                ? (c < 42859
                  ? (c < 42857
                    ? c == 42855
                    : c <= 42857)
                  : (c <= 42859 || c == 42861))
                : (c <= 42863 || (c < 42876
                  ? (c < 42874
                    ? (c >= 42865 && c <= 42872)
                    : c <= 42874)
                  : (c <= 42876 || c == 42879))))
              : (c <= 42881 || (c < 42894
                ? (c < 42887
                  ? (c < 42885
                    ? c == 42883
                    : c <= 42885)
                  : (c <= 42887 || c == 42892))
                : (c <= 42894 || (c < 42899
                  ? c == 42897
                  : (c <= 42901 || c == 42903))))))))
          : (c <= 42905 || (c < 42961
            ? (c < 42933
              ? (c < 42915
                ? (c < 42911
                  ? (c < 42909
                    ? c == 42907
                    : c <= 42909)
                  : (c <= 42911 || c == 42913))
                : (c <= 42915 || (c < 42921
                  ? (c < 42919
                    ? c == 42917
                    : c <= 42919)
                  : (c <= 42921 || c == 42927))))
              : (c <= 42933 || (c < 42943
                ? (c < 42939
                  ? (c < 42937
                    ? c == 42935
                    : c <= 42937)
                  : (c <= 42939 || c == 42941))
                : (c <= 42943 || (c < 42952
                  ? (c < 42947
                    ? c == 42945
                    : c <= 42947)
                  : (c <= 42952 || c == 42954))))))
            : (c <= 42961 || (c < 64256
              ? (c < 42998
                ? (c < 42967
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42965)
                  : (c <= 42967 || c == 42969))
                : (c <= 42998 || (c < 43872
                  ? (c < 43824
                    ? c == 43002
                    : c <= 43866)
                  : (c <= 43880 || (c >= 43888 && c <= 43967)))))
              : (c <= 64262 || (c < 66967
                ? (c < 66600
                  ? (c < 65345
                    ? (c >= 64275 && c <= 64279)
                    : c <= 65370)
                  : (c <= 66639 || (c >= 66776 && c <= 66811)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))))))));
}

static inline bool sym__package_name_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__name_character_set_1(int32_t c) {
  return (c < 8160
    ? (c < 4349
      ? (c < 661
        ? (c < 445
          ? (c < 223
            ? (c < 181
              ? (c >= 'a' && c <= 'z')
              : c <= 181)
            : (c <= 246 || (c >= 248 && c <= 442)))
          : (c <= 447 || (c < 460
            ? (c < 457
              ? c == 454
              : c <= 457)
            : (c <= 496 || (c >= 499 && c <= 659)))))
        : (c <= 687 || (c < 940
          ? (c < 891
            ? (c < 887
              ? (c >= 881 && c <= 883)
              : c <= 887)
            : (c <= 893 || c == 912))
          : (c <= 1013 || (c < 1376
            ? (c < 1163
              ? (c >= 1016 && c <= 1153)
              : c <= 1327)
            : (c <= 1416 || (c >= 4304 && c <= 4346)))))))
      : (c <= 4351 || (c < 8064
        ? (c < 7545
          ? (c < 7424
            ? (c < 7296
              ? (c >= 5112 && c <= 5117)
              : c <= 7304)
            : (c <= 7467 || (c >= 7531 && c <= 7543)))
          : (c <= 7578 || (c < 8016
            ? (c < 7968
              ? (c >= 7681 && c <= 7957)
              : c <= 8005)
            : (c <= 8023 || (c >= 8032 && c <= 8061)))))
        : (c <= 8071 || (c < 8126
          ? (c < 8112
            ? (c < 8096
              ? (c >= 8080 && c <= 8087)
              : c <= 8103)
            : (c <= 8116 || (c >= 8118 && c <= 8119)))
          : (c <= 8126 || (c < 8144
            ? (c < 8134
              ? (c >= 8130 && c <= 8132)
              : c <= 8135)
            : (c <= 8147 || (c >= 8150 && c <= 8151)))))))))
    : (c <= 8167 || (c < 42865
      ? (c < 11312
        ? (c < 8505
          ? (c < 8458
            ? (c < 8182
              ? (c >= 8178 && c <= 8180)
              : c <= 8183)
            : (c <= 8467 || (c >= 8495 && c <= 8500)))
          : (c <= 8505 || (c < 8526
            ? (c < 8518
              ? (c >= 8508 && c <= 8509)
              : c <= 8521)
            : (c <= 8526 || c == 8580))))
        : (c <= 11387 || (c < 11559
          ? (c < 11507
            ? (c < 11500
              ? (c >= 11393 && c <= 11492)
              : c <= 11502)
            : (c <= 11507 || (c >= 11520 && c <= 11557)))
          : (c <= 11559 || (c < 42625
            ? (c < 42561
              ? c == 11565
              : c <= 42605)
            : (c <= 42651 || (c >= 42787 && c <= 42863)))))))
      : (c <= 42887 || (c < 43888
        ? (c < 42965
          ? (c < 42961
            ? (c < 42897
              ? (c >= 42892 && c <= 42894)
              : c <= 42954)
            : (c <= 42961 || c == 42963))
          : (c <= 42969 || (c < 43824
            ? (c < 43002
              ? c == 42998
              : c <= 43002)
            : (c <= 43866 || (c >= 43872 && c <= 43880)))))
        : (c <= 43967 || (c < 66776
          ? (c < 65345
            ? (c < 64275
              ? (c >= 64256 && c <= 64262)
              : c <= 64279)
            : (c <= 65370 || (c >= 66600 && c <= 66639)))
          : (c <= 66811 || (c < 66995
            ? (c < 66979
              ? (c >= 66967 && c <= 66977)
              : c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool sym__name_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__name_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == '|') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(0)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(1)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(79);
      if (sym__name_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(70);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == ']') ADVANCE(69);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(3)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(79);
      if (sym__name_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(43);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(9);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(7)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(79);
      if (sym__name_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(5);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(8)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 45:
      if (eof) ADVANCE(47);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 't') ADVANCE(104);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(45)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 't') ADVANCE(104);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(46)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_expression_string);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_expression_int);
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_expression_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_expression_true);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_expression_true);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_expression_false);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_expression_false);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_expression_unit);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_expression_unit);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__proper_name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__package_name);
      if (sym__package_name_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(89);
      if (sym__name_character_set_3(lookahead)) ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(74);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(76);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(61);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(88);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(92);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(101);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(86);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(100);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(96);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(87);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(67);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(99);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(98);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(84);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(94);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(103);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(102);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(85);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(83);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(78);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(54);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(82);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'y') ADVANCE(95);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 45},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 46},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 46},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 46},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 45},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 45},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 45},
  [108] = {.lex_state = 45},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 45},
  [111] = {.lex_state = 45},
  [112] = {.lex_state = 45},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 45},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 46},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 46},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 46},
  [125] = {.lex_state = 46},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 46},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 46},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 46},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 46},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 46},
  [143] = {.lex_state = 46},
  [144] = {.lex_state = 46},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_exports] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_foreign] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_expression_string] = ACTIONS(1),
    [sym_expression_int] = ACTIONS(1),
    [sym_expression_float] = ACTIONS(1),
    [sym_expression_true] = ACTIONS(1),
    [sym_expression_false] = ACTIONS(1),
    [sym_expression_unit] = ACTIONS(1),
    [sym__proper_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(267),
    [sym_module_header] = STATE(25),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(19), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(135), 1,
      sym_expression_function_parameter_name,
    STATE(189), 1,
      sym_expression_function_parameter,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(247), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [56] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(172), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [106] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(191), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [156] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(172), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [206] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(198), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [256] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(172), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [306] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(172), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [356] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(137), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [403] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(139), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [450] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(261), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [497] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(132), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [544] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(131), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [591] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(172), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [638] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(123), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [685] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(146), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [732] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(127), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [779] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(230), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [826] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    STATE(91), 1,
      sym__qualified_proper_name,
    STATE(93), 1,
      sym__qualified_name,
    STATE(229), 1,
      sym_qualifier,
    ACTIONS(13), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(126), 2,
      sym__expression,
      sym_expression_function,
    ACTIONS(15), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(72), 6,
      sym__expression1,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [873] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    ACTIONS(35), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [909] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    ACTIONS(41), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [945] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    ACTIONS(43), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
    STATE(86), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [981] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_import,
    ACTIONS(49), 1,
      anon_sym_type,
    ACTIONS(51), 1,
      anon_sym_foreign,
    ACTIONS(53), 1,
      sym__name,
    STATE(195), 1,
      sym_value_declaration_name,
    STATE(69), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(52), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [1016] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    ACTIONS(43), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
    STATE(102), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1051] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_import,
    ACTIONS(49), 1,
      anon_sym_type,
    ACTIONS(51), 1,
      anon_sym_foreign,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(195), 1,
      sym_value_declaration_name,
    STATE(23), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(58), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [1086] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1120] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    ACTIONS(35), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1154] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    ACTIONS(43), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    STATE(152), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1188] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1221] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1254] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1287] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1320] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1353] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1386] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(186), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1419] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1452] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(43), 1,
      anon_sym_DASH_GT,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(185), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1485] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(183), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1518] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1551] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(149), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1584] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(103), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1614] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(90), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1644] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(160), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1674] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(141), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1704] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1734] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(141), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1764] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(88), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1794] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(90), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1824] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(252), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1854] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(103), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1884] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(101), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1914] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_type,
    ACTIONS(51), 1,
      anon_sym_foreign,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(195), 1,
      sym_value_declaration_name,
    STATE(54), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [1942] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(87), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [1972] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      anon_sym_type,
    ACTIONS(90), 1,
      anon_sym_foreign,
    ACTIONS(93), 1,
      sym__name,
    STATE(195), 1,
      sym_value_declaration_name,
    STATE(54), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2000] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(88), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [2030] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(88), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [2060] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(103), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [2090] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_type,
    ACTIONS(51), 1,
      anon_sym_foreign,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(195), 1,
      sym_value_declaration_name,
    STATE(54), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2118] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__name,
    STATE(22), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(87), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [2148] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(87), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [2178] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(90), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [2208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_DOT,
    ACTIONS(98), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACK,
      sym__proper_name,
      sym__name,
  [2226] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__proper_name,
    ACTIONS(39), 1,
      sym__name,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_type_constructor,
    STATE(65), 1,
      sym__qualified_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(268), 4,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_variable,
  [2254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACK,
      sym__proper_name,
      sym__name,
  [2269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      sym__proper_name,
      sym__name,
  [2283] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DOT_DOT,
    ACTIONS(110), 1,
      sym__proper_name,
    ACTIONS(112), 1,
      sym__name,
    STATE(105), 1,
      sym_exposing_type_name,
    STATE(176), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [2304] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_SEMI,
    ACTIONS(116), 1,
      anon_sym_as,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    STATE(236), 1,
      sym__everything,
    STATE(231), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [2325] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym__proper_name,
    ACTIONS(112), 1,
      sym__name,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_exposing_type_name,
    STATE(228), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [2346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      anon_sym_import,
    STATE(69), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    ACTIONS(127), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2365] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(131), 1,
      anon_sym_as,
    STATE(236), 1,
      sym__everything,
    STATE(251), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [2386] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym__proper_name,
    ACTIONS(112), 1,
      sym__name,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_exposing_type_name,
    STATE(228), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [2407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_expression_call_arguments,
    ACTIONS(135), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2423] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    STATE(236), 1,
      sym__everything,
    STATE(243), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [2441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_DOT,
    STATE(78), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(141), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [2457] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym__proper_name,
    ACTIONS(112), 1,
      sym__name,
    STATE(105), 1,
      sym_exposing_type_name,
    STATE(228), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [2475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    STATE(236), 1,
      sym__everything,
    STATE(240), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [2493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_DOT,
    STATE(74), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(147), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [2509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_DOT,
    STATE(78), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(149), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [2525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    STATE(236), 1,
      sym__everything,
    STATE(237), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [2564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DASH_GT,
    ACTIONS(160), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [2577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 5,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_LPAREN,
  [2588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
    ACTIONS(41), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [2614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
    ACTIONS(168), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [2627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
    ACTIONS(198), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [2787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
    ACTIONS(168), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [2813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2835] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym_exposing_type_constructors,
    STATE(216), 1,
      sym__everything,
    ACTIONS(211), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
    ACTIONS(41), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [2904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(227), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_expression_call_arguments_repeat1,
    ACTIONS(245), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym__proper_name,
    STATE(67), 1,
      sym_module_name,
    STATE(214), 1,
      sym_module_import_package,
  [3020] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_SEMI,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_EQ,
    STATE(211), 1,
      sym_type_declaration_variables,
  [3036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_type_declaration_constructor_fields,
    ACTIONS(264), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [3050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      sym__proper_name,
    STATE(120), 1,
      sym_type_declaration_constructor_name,
    STATE(175), 1,
      sym_type_declaration_constructor,
  [3078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [3158] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__proper_name,
    ACTIONS(301), 1,
      anon_sym_PIPE,
    STATE(120), 1,
      sym_type_declaration_constructor_name,
    STATE(187), 1,
      sym_type_declaration_constructor,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(309), 1,
      sym__name,
    STATE(135), 1,
      sym_expression_function_parameter_name,
    STATE(218), 1,
      sym_expression_function_parameter,
  [3210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COLON,
    STATE(215), 1,
      sym_type_annotation,
    ACTIONS(315), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    ACTIONS(321), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_DASH_GT,
    ACTIONS(160), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [3270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__name,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_expression_function_parameter_name,
    STATE(218), 1,
      sym_expression_function_parameter,
  [3354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [3386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    ACTIONS(361), 1,
      sym__name,
    STATE(223), 1,
      sym_type_declaration_variable,
  [3412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_exposing_list_repeat1,
  [3425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [3436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_type_declaration_variables_repeat1,
  [3449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    STATE(157), 1,
      aux_sym_type_declaration_repeat1,
  [3462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__name,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym_type_declaration_variable,
  [3475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_type_declaration_variables_repeat1,
  [3488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      aux_sym_type_declaration_repeat1,
  [3501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__proper_name,
    STATE(120), 1,
      sym_type_declaration_constructor_name,
    STATE(222), 1,
      sym_type_declaration_constructor,
  [3514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    ACTIONS(385), 1,
      anon_sym_PIPE,
    STATE(159), 1,
      aux_sym_type_declaration_repeat1,
  [3527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    STATE(194), 1,
      aux_sym_type_declaration_repeat1,
  [3553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      aux_sym_type_declaration_repeat1,
  [3566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    STATE(159), 1,
      aux_sym_type_declaration_repeat1,
  [3579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(166), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [3603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_DASH_GT,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_DASH_GT,
    ACTIONS(401), 1,
      anon_sym_COLON,
    STATE(249), 1,
      sym_return_type_annotation,
  [3629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
  [3638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__proper_name,
    STATE(120), 1,
      sym_type_declaration_constructor_name,
    STATE(161), 1,
      sym_type_declaration_constructor,
  [3651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_expression_function_repeat1,
  [3664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_type_declaration_variables_repeat1,
  [3677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_exposing_list_repeat1,
  [3699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COLON,
    ACTIONS(414), 1,
      anon_sym_DASH_GT,
    STATE(238), 1,
      sym_return_type_annotation,
  [3712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    STATE(162), 1,
      aux_sym_type_declaration_repeat1,
  [3725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_exposing_list_repeat1,
  [3738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_expression_call_arguments_repeat1,
  [3751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COLON,
    ACTIONS(426), 1,
      anon_sym_DASH_GT,
    STATE(264), 1,
      sym_return_type_annotation,
  [3773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DASH_GT,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_expression_function_repeat1,
  [3834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DASH_GT,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(446), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      aux_sym_type_declaration_repeat1,
  [3873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [3882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_expression_function_repeat1,
  [3895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_expression_call_arguments_repeat1,
  [3908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_expression_call_arguments_repeat1,
  [3921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__name,
    STATE(135), 1,
      sym_expression_function_parameter_name,
    STATE(218), 1,
      sym_expression_function_parameter,
  [3934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COLON,
    ACTIONS(460), 1,
      anon_sym_DASH_GT,
    STATE(233), 1,
      sym_return_type_annotation,
  [3947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      aux_sym_type_declaration_repeat1,
  [3960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_EQ,
    ACTIONS(466), 1,
      anon_sym_COLON,
    STATE(239), 1,
      sym_type_annotation,
  [3973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__proper_name,
    STATE(120), 1,
      sym_type_declaration_constructor_name,
    STATE(154), 1,
      sym_type_declaration_constructor,
  [3999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_expression_call_arguments_repeat1,
  [4012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__proper_name,
    STATE(119), 1,
      sym_type_declaration_name,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym__proper_name,
    STATE(76), 1,
      sym_module_import_alias,
  [4040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [4048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      sym__proper_name,
      sym__name,
  [4056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__name,
    STATE(223), 1,
      sym_type_declaration_variable,
  [4082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [4090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym__name,
    STATE(209), 1,
      sym_value_declaration_name,
  [4100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COLON,
    STATE(232), 1,
      sym_type_annotation,
  [4110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_SEMI,
    ACTIONS(496), 1,
      anon_sym_EQ,
  [4128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__name,
    STATE(171), 1,
      sym_type_declaration_variable,
  [4138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [4146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__proper_name,
    STATE(70), 1,
      sym_module_name,
  [4156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [4212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [4236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_DASH_GT,
  [4246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__proper_name,
    STATE(265), 1,
      sym_module_name,
  [4256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym__proper_name,
    STATE(73), 1,
      sym_module_import_alias,
  [4266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__proper_name,
    ACTIONS(519), 1,
      sym__name,
  [4284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_SEMI,
  [4291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_SEMI,
  [4298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_SEMI,
  [4305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_DASH_GT,
  [4312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_DASH_GT,
  [4319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
  [4326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_SEMI,
  [4333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_SEMI,
  [4340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
  [4347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_EQ,
  [4354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SEMI,
  [4361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_DASH_GT,
  [4368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_DASH_GT,
  [4375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_SEMI,
  [4382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_DASH_GT,
  [4389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_SEMI,
  [4396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_DASH_GT,
  [4403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [4410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym__package_name,
  [4417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_DASH_GT,
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym__proper_name,
  [4431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_SEMI,
  [4438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
  [4445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_DASH_GT,
  [4452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_DASH_GT,
  [4459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_DASH_GT,
  [4466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DOT_DOT,
  [4473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_DASH_GT,
  [4480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__proper_name,
  [4487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SEMI,
  [4494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
  [4501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_SEMI,
  [4508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_DASH_GT,
  [4515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SEMI,
  [4522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_DASH_GT,
  [4529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_exports,
  [4536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym__proper_name,
  [4543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
  [4550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_DASH_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 206,
  [SMALL_STATE(7)] = 256,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 356,
  [SMALL_STATE(10)] = 403,
  [SMALL_STATE(11)] = 450,
  [SMALL_STATE(12)] = 497,
  [SMALL_STATE(13)] = 544,
  [SMALL_STATE(14)] = 591,
  [SMALL_STATE(15)] = 638,
  [SMALL_STATE(16)] = 685,
  [SMALL_STATE(17)] = 732,
  [SMALL_STATE(18)] = 779,
  [SMALL_STATE(19)] = 826,
  [SMALL_STATE(20)] = 873,
  [SMALL_STATE(21)] = 909,
  [SMALL_STATE(22)] = 945,
  [SMALL_STATE(23)] = 981,
  [SMALL_STATE(24)] = 1016,
  [SMALL_STATE(25)] = 1051,
  [SMALL_STATE(26)] = 1086,
  [SMALL_STATE(27)] = 1120,
  [SMALL_STATE(28)] = 1154,
  [SMALL_STATE(29)] = 1188,
  [SMALL_STATE(30)] = 1221,
  [SMALL_STATE(31)] = 1254,
  [SMALL_STATE(32)] = 1287,
  [SMALL_STATE(33)] = 1320,
  [SMALL_STATE(34)] = 1353,
  [SMALL_STATE(35)] = 1386,
  [SMALL_STATE(36)] = 1419,
  [SMALL_STATE(37)] = 1452,
  [SMALL_STATE(38)] = 1485,
  [SMALL_STATE(39)] = 1518,
  [SMALL_STATE(40)] = 1551,
  [SMALL_STATE(41)] = 1584,
  [SMALL_STATE(42)] = 1614,
  [SMALL_STATE(43)] = 1644,
  [SMALL_STATE(44)] = 1674,
  [SMALL_STATE(45)] = 1704,
  [SMALL_STATE(46)] = 1734,
  [SMALL_STATE(47)] = 1764,
  [SMALL_STATE(48)] = 1794,
  [SMALL_STATE(49)] = 1824,
  [SMALL_STATE(50)] = 1854,
  [SMALL_STATE(51)] = 1884,
  [SMALL_STATE(52)] = 1914,
  [SMALL_STATE(53)] = 1942,
  [SMALL_STATE(54)] = 1972,
  [SMALL_STATE(55)] = 2000,
  [SMALL_STATE(56)] = 2030,
  [SMALL_STATE(57)] = 2060,
  [SMALL_STATE(58)] = 2090,
  [SMALL_STATE(59)] = 2118,
  [SMALL_STATE(60)] = 2148,
  [SMALL_STATE(61)] = 2178,
  [SMALL_STATE(62)] = 2208,
  [SMALL_STATE(63)] = 2226,
  [SMALL_STATE(64)] = 2254,
  [SMALL_STATE(65)] = 2269,
  [SMALL_STATE(66)] = 2283,
  [SMALL_STATE(67)] = 2304,
  [SMALL_STATE(68)] = 2325,
  [SMALL_STATE(69)] = 2346,
  [SMALL_STATE(70)] = 2365,
  [SMALL_STATE(71)] = 2386,
  [SMALL_STATE(72)] = 2407,
  [SMALL_STATE(73)] = 2423,
  [SMALL_STATE(74)] = 2441,
  [SMALL_STATE(75)] = 2457,
  [SMALL_STATE(76)] = 2475,
  [SMALL_STATE(77)] = 2493,
  [SMALL_STATE(78)] = 2509,
  [SMALL_STATE(79)] = 2525,
  [SMALL_STATE(80)] = 2538,
  [SMALL_STATE(81)] = 2549,
  [SMALL_STATE(82)] = 2564,
  [SMALL_STATE(83)] = 2577,
  [SMALL_STATE(84)] = 2588,
  [SMALL_STATE(85)] = 2601,
  [SMALL_STATE(86)] = 2614,
  [SMALL_STATE(87)] = 2627,
  [SMALL_STATE(88)] = 2638,
  [SMALL_STATE(89)] = 2649,
  [SMALL_STATE(90)] = 2660,
  [SMALL_STATE(91)] = 2671,
  [SMALL_STATE(92)] = 2682,
  [SMALL_STATE(93)] = 2693,
  [SMALL_STATE(94)] = 2704,
  [SMALL_STATE(95)] = 2715,
  [SMALL_STATE(96)] = 2726,
  [SMALL_STATE(97)] = 2737,
  [SMALL_STATE(98)] = 2750,
  [SMALL_STATE(99)] = 2761,
  [SMALL_STATE(100)] = 2772,
  [SMALL_STATE(101)] = 2787,
  [SMALL_STATE(102)] = 2798,
  [SMALL_STATE(103)] = 2813,
  [SMALL_STATE(104)] = 2824,
  [SMALL_STATE(105)] = 2835,
  [SMALL_STATE(106)] = 2852,
  [SMALL_STATE(107)] = 2863,
  [SMALL_STATE(108)] = 2876,
  [SMALL_STATE(109)] = 2889,
  [SMALL_STATE(110)] = 2904,
  [SMALL_STATE(111)] = 2917,
  [SMALL_STATE(112)] = 2930,
  [SMALL_STATE(113)] = 2943,
  [SMALL_STATE(114)] = 2954,
  [SMALL_STATE(115)] = 2967,
  [SMALL_STATE(116)] = 2978,
  [SMALL_STATE(117)] = 2992,
  [SMALL_STATE(118)] = 3004,
  [SMALL_STATE(119)] = 3020,
  [SMALL_STATE(120)] = 3036,
  [SMALL_STATE(121)] = 3050,
  [SMALL_STATE(122)] = 3062,
  [SMALL_STATE(123)] = 3078,
  [SMALL_STATE(124)] = 3088,
  [SMALL_STATE(125)] = 3100,
  [SMALL_STATE(126)] = 3112,
  [SMALL_STATE(127)] = 3122,
  [SMALL_STATE(128)] = 3132,
  [SMALL_STATE(129)] = 3144,
  [SMALL_STATE(130)] = 3158,
  [SMALL_STATE(131)] = 3174,
  [SMALL_STATE(132)] = 3184,
  [SMALL_STATE(133)] = 3194,
  [SMALL_STATE(134)] = 3210,
  [SMALL_STATE(135)] = 3222,
  [SMALL_STATE(136)] = 3236,
  [SMALL_STATE(137)] = 3248,
  [SMALL_STATE(138)] = 3258,
  [SMALL_STATE(139)] = 3270,
  [SMALL_STATE(140)] = 3280,
  [SMALL_STATE(141)] = 3292,
  [SMALL_STATE(142)] = 3302,
  [SMALL_STATE(143)] = 3314,
  [SMALL_STATE(144)] = 3326,
  [SMALL_STATE(145)] = 3338,
  [SMALL_STATE(146)] = 3354,
  [SMALL_STATE(147)] = 3364,
  [SMALL_STATE(148)] = 3377,
  [SMALL_STATE(149)] = 3386,
  [SMALL_STATE(150)] = 3399,
  [SMALL_STATE(151)] = 3412,
  [SMALL_STATE(152)] = 3425,
  [SMALL_STATE(153)] = 3436,
  [SMALL_STATE(154)] = 3449,
  [SMALL_STATE(155)] = 3462,
  [SMALL_STATE(156)] = 3475,
  [SMALL_STATE(157)] = 3488,
  [SMALL_STATE(158)] = 3501,
  [SMALL_STATE(159)] = 3514,
  [SMALL_STATE(160)] = 3527,
  [SMALL_STATE(161)] = 3540,
  [SMALL_STATE(162)] = 3553,
  [SMALL_STATE(163)] = 3566,
  [SMALL_STATE(164)] = 3579,
  [SMALL_STATE(165)] = 3592,
  [SMALL_STATE(166)] = 3603,
  [SMALL_STATE(167)] = 3616,
  [SMALL_STATE(168)] = 3629,
  [SMALL_STATE(169)] = 3638,
  [SMALL_STATE(170)] = 3651,
  [SMALL_STATE(171)] = 3664,
  [SMALL_STATE(172)] = 3677,
  [SMALL_STATE(173)] = 3686,
  [SMALL_STATE(174)] = 3699,
  [SMALL_STATE(175)] = 3712,
  [SMALL_STATE(176)] = 3725,
  [SMALL_STATE(177)] = 3738,
  [SMALL_STATE(178)] = 3751,
  [SMALL_STATE(179)] = 3760,
  [SMALL_STATE(180)] = 3773,
  [SMALL_STATE(181)] = 3786,
  [SMALL_STATE(182)] = 3799,
  [SMALL_STATE(183)] = 3808,
  [SMALL_STATE(184)] = 3821,
  [SMALL_STATE(185)] = 3834,
  [SMALL_STATE(186)] = 3847,
  [SMALL_STATE(187)] = 3860,
  [SMALL_STATE(188)] = 3873,
  [SMALL_STATE(189)] = 3882,
  [SMALL_STATE(190)] = 3895,
  [SMALL_STATE(191)] = 3908,
  [SMALL_STATE(192)] = 3921,
  [SMALL_STATE(193)] = 3934,
  [SMALL_STATE(194)] = 3947,
  [SMALL_STATE(195)] = 3960,
  [SMALL_STATE(196)] = 3973,
  [SMALL_STATE(197)] = 3986,
  [SMALL_STATE(198)] = 3999,
  [SMALL_STATE(199)] = 4012,
  [SMALL_STATE(200)] = 4022,
  [SMALL_STATE(201)] = 4030,
  [SMALL_STATE(202)] = 4040,
  [SMALL_STATE(203)] = 4048,
  [SMALL_STATE(204)] = 4056,
  [SMALL_STATE(205)] = 4064,
  [SMALL_STATE(206)] = 4072,
  [SMALL_STATE(207)] = 4082,
  [SMALL_STATE(208)] = 4090,
  [SMALL_STATE(209)] = 4100,
  [SMALL_STATE(210)] = 4110,
  [SMALL_STATE(211)] = 4118,
  [SMALL_STATE(212)] = 4128,
  [SMALL_STATE(213)] = 4138,
  [SMALL_STATE(214)] = 4146,
  [SMALL_STATE(215)] = 4156,
  [SMALL_STATE(216)] = 4164,
  [SMALL_STATE(217)] = 4172,
  [SMALL_STATE(218)] = 4180,
  [SMALL_STATE(219)] = 4188,
  [SMALL_STATE(220)] = 4196,
  [SMALL_STATE(221)] = 4204,
  [SMALL_STATE(222)] = 4212,
  [SMALL_STATE(223)] = 4220,
  [SMALL_STATE(224)] = 4228,
  [SMALL_STATE(225)] = 4236,
  [SMALL_STATE(226)] = 4246,
  [SMALL_STATE(227)] = 4256,
  [SMALL_STATE(228)] = 4266,
  [SMALL_STATE(229)] = 4274,
  [SMALL_STATE(230)] = 4284,
  [SMALL_STATE(231)] = 4291,
  [SMALL_STATE(232)] = 4298,
  [SMALL_STATE(233)] = 4305,
  [SMALL_STATE(234)] = 4312,
  [SMALL_STATE(235)] = 4319,
  [SMALL_STATE(236)] = 4326,
  [SMALL_STATE(237)] = 4333,
  [SMALL_STATE(238)] = 4340,
  [SMALL_STATE(239)] = 4347,
  [SMALL_STATE(240)] = 4354,
  [SMALL_STATE(241)] = 4361,
  [SMALL_STATE(242)] = 4368,
  [SMALL_STATE(243)] = 4375,
  [SMALL_STATE(244)] = 4382,
  [SMALL_STATE(245)] = 4389,
  [SMALL_STATE(246)] = 4396,
  [SMALL_STATE(247)] = 4403,
  [SMALL_STATE(248)] = 4410,
  [SMALL_STATE(249)] = 4417,
  [SMALL_STATE(250)] = 4424,
  [SMALL_STATE(251)] = 4431,
  [SMALL_STATE(252)] = 4438,
  [SMALL_STATE(253)] = 4445,
  [SMALL_STATE(254)] = 4452,
  [SMALL_STATE(255)] = 4459,
  [SMALL_STATE(256)] = 4466,
  [SMALL_STATE(257)] = 4473,
  [SMALL_STATE(258)] = 4480,
  [SMALL_STATE(259)] = 4487,
  [SMALL_STATE(260)] = 4494,
  [SMALL_STATE(261)] = 4501,
  [SMALL_STATE(262)] = 4508,
  [SMALL_STATE(263)] = 4515,
  [SMALL_STATE(264)] = 4522,
  [SMALL_STATE(265)] = 4529,
  [SMALL_STATE(266)] = 4536,
  [SMALL_STATE(267)] = 4543,
  [SMALL_STATE(268)] = 4550,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call, 4, .production_id = 34),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call, 3, .production_id = 23),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type1, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(199),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(208),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(202),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_proper_name, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_proper_name, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(250),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_parens, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_parens, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call, 2, .production_id = 15),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 7, .production_id = 54),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 6, .production_id = 50),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 49),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 5, .production_id = 44),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 43),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 5, .production_id = 42),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 7, .production_id = 35),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 7, .production_id = 35),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_name, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2), SHIFT_REPEAT(45),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 4, .production_id = 33),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 32),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 4, .production_id = 31),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 26),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 26),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 17),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 17),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 3, .production_id = 22),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2), SHIFT_REPEAT(14),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 28),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 28),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 1, .production_id = 10),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 55),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 19),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 19),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 53),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 52),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_name, 1),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_function_parameter_name, 1), REDUCE(sym__qualified_name, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter_name, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 48),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 47),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 8, .production_id = 46),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 8, .production_id = 46),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 1, .production_id = 10),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 5, .production_id = 41),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 5, .production_id = 40),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 39),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 39),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 5, .production_id = 24),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 5, .production_id = 24),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 37),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 37),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 29),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 29),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 4, .production_id = 30),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_name, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2), SHIFT_REPEAT(75),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2), SHIFT_REPEAT(206),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(158),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2), SHIFT_REPEAT(51),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2), SHIFT_REPEAT(192),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__everything, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_name, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_name, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 4, .production_id = 45),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration_name, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 3, .production_id = 38),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 5, .production_id = 36),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_value, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 3, .production_id = 18),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 2, .production_id = 21),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_constructors, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variable, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 5, .production_id = 51),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 2, .production_id = 20),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_alias, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 4, .production_id = 27),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_parens, 3), SHIFT(61),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_everything, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 5),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_package, 3),
  [589] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_annotation, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ditto(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
