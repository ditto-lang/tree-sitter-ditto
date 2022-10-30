#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 348
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 37
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 65

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
  anon_sym_alias = 12,
  anon_sym_EQ = 13,
  anon_sym_PIPE = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_COLON = 18,
  anon_sym_foreign = 19,
  anon_sym_PIPE_GT = 20,
  anon_sym_fn = 21,
  anon_sym_if = 22,
  anon_sym_then = 23,
  anon_sym_else = 24,
  anon_sym_match = 25,
  anon_sym_with = 26,
  anon_sym_end = 27,
  anon_sym_do = 28,
  anon_sym_LT_DASH = 29,
  anon_sym_return = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  sym_expression_string = 33,
  sym_expression_int = 34,
  sym_expression_float = 35,
  sym_expression_true = 36,
  sym_expression_false = 37,
  sym_expression_unit = 38,
  sym__proper_name = 39,
  sym__package_name = 40,
  sym__name = 41,
  sym_comment = 42,
  sym_source_file = 43,
  sym_module_header = 44,
  sym_module_name = 45,
  sym_module_import = 46,
  sym_module_import_package = 47,
  sym_module_import_alias = 48,
  sym__exposing = 49,
  sym_exposing_everything = 50,
  sym_exposing_list = 51,
  sym__exposing_list_item = 52,
  sym_exposing_type = 53,
  sym_exposing_type_name = 54,
  sym_exposing_type_constructors = 55,
  sym__everything = 56,
  sym_exposing_value = 57,
  sym__module_declaration = 58,
  sym__type_declaration = 59,
  sym_type_alias_declaration = 60,
  sym_empty_type_declaration = 61,
  sym_type_declaration = 62,
  sym_type_declaration_name = 63,
  sym_type_declaration_variables = 64,
  sym_type_declaration_variable = 65,
  sym_type_declaration_constructor = 66,
  sym_type_declaration_constructor_name = 67,
  sym_type_declaration_constructor_fields = 68,
  sym__type = 69,
  sym__type1 = 70,
  sym_type_function = 71,
  sym__type_parens = 72,
  sym_type_closed_record = 73,
  sym_type_open_record = 74,
  sym_type_open_record_row_variable = 75,
  sym_type_record_field = 76,
  sym_type_record_field_label = 77,
  sym_type_call = 78,
  sym_type_call_arguments = 79,
  sym_type_constructor = 80,
  sym_type_constructor_proper_name = 81,
  sym_type_variable = 82,
  sym_type_annotation = 83,
  sym_return_type_annotation = 84,
  sym_foreign_value_declaration = 85,
  sym_value_declaration = 86,
  sym_value_declaration_name = 87,
  sym__expression = 88,
  sym__expression2 = 89,
  sym__expression1 = 90,
  sym__expression0 = 91,
  sym_expression_right_pipe = 92,
  sym_expression_function = 93,
  sym_expression_function_parameter = 94,
  sym_expression_function_parameter_name = 95,
  sym_expression_if = 96,
  sym_expression_match = 97,
  sym_expression_effect = 98,
  sym__expression_effect_statement = 99,
  sym_expression_effect_bind = 100,
  sym_expression_effect_expression = 101,
  sym_expression_effect_bind_name = 102,
  sym_expression_effect_return = 103,
  sym_expression_match_arm = 104,
  sym__expression_parens = 105,
  sym_expression_call = 106,
  sym_expression_call_arguments = 107,
  sym_expression_array = 108,
  sym_expression_record = 109,
  sym_expression_record_field = 110,
  sym_expression_record_access = 111,
  sym_expression_record_field_label = 112,
  sym_expression_constructor = 113,
  sym_expression_constructor_proper_name = 114,
  sym_expression_variable = 115,
  sym_expression_variable_name = 116,
  sym__pattern = 117,
  sym_pattern_constructor = 118,
  sym_pattern_constructor_proper_name = 119,
  sym_pattern_constructor_fields = 120,
  sym_pattern_variable = 121,
  sym_qualifier = 122,
  aux_sym_source_file_repeat1 = 123,
  aux_sym_source_file_repeat2 = 124,
  aux_sym_module_name_repeat1 = 125,
  aux_sym_exposing_list_repeat1 = 126,
  aux_sym_type_declaration_repeat1 = 127,
  aux_sym_type_declaration_variables_repeat1 = 128,
  aux_sym_type_declaration_constructor_fields_repeat1 = 129,
  aux_sym_type_closed_record_repeat1 = 130,
  aux_sym_expression_function_repeat1 = 131,
  aux_sym_expression_match_repeat1 = 132,
  aux_sym_expression_call_arguments_repeat1 = 133,
  aux_sym_expression_record_repeat1 = 134,
  aux_sym_pattern_constructor_fields_repeat1 = 135,
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
  [anon_sym_alias] = "alias",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_foreign] = "foreign",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_fn] = "fn",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_match] = "match",
  [anon_sym_with] = "with",
  [anon_sym_end] = "end",
  [anon_sym_do] = "do",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_return] = "return",
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
  [sym_type_alias_declaration] = "type_alias_declaration",
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
  [sym_type_closed_record] = "type_closed_record",
  [sym_type_open_record] = "type_open_record",
  [sym_type_open_record_row_variable] = "type_open_record_row_variable",
  [sym_type_record_field] = "type_record_field",
  [sym_type_record_field_label] = "type_record_field_label",
  [sym_type_call] = "type_call",
  [sym_type_call_arguments] = "type_call_arguments",
  [sym_type_constructor] = "type_constructor",
  [sym_type_constructor_proper_name] = "type_constructor_proper_name",
  [sym_type_variable] = "type_variable",
  [sym_type_annotation] = "type_annotation",
  [sym_return_type_annotation] = "return_type_annotation",
  [sym_foreign_value_declaration] = "foreign_value_declaration",
  [sym_value_declaration] = "value_declaration",
  [sym_value_declaration_name] = "value_declaration_name",
  [sym__expression] = "_expression",
  [sym__expression2] = "_expression2",
  [sym__expression1] = "_expression1",
  [sym__expression0] = "_expression0",
  [sym_expression_right_pipe] = "expression_right_pipe",
  [sym_expression_function] = "expression_function",
  [sym_expression_function_parameter] = "expression_function_parameter",
  [sym_expression_function_parameter_name] = "expression_function_parameter_name",
  [sym_expression_if] = "expression_if",
  [sym_expression_match] = "expression_match",
  [sym_expression_effect] = "expression_effect",
  [sym__expression_effect_statement] = "_expression_effect_statement",
  [sym_expression_effect_bind] = "expression_effect_bind",
  [sym_expression_effect_expression] = "expression_effect_expression",
  [sym_expression_effect_bind_name] = "expression_effect_bind_name",
  [sym_expression_effect_return] = "expression_effect_return",
  [sym_expression_match_arm] = "expression_match_arm",
  [sym__expression_parens] = "_expression_parens",
  [sym_expression_call] = "expression_call",
  [sym_expression_call_arguments] = "expression_call_arguments",
  [sym_expression_array] = "expression_array",
  [sym_expression_record] = "expression_record",
  [sym_expression_record_field] = "expression_record_field",
  [sym_expression_record_access] = "expression_record_access",
  [sym_expression_record_field_label] = "expression_record_field_label",
  [sym_expression_constructor] = "expression_constructor",
  [sym_expression_constructor_proper_name] = "expression_constructor_proper_name",
  [sym_expression_variable] = "expression_variable",
  [sym_expression_variable_name] = "expression_variable_name",
  [sym__pattern] = "_pattern",
  [sym_pattern_constructor] = "pattern_constructor",
  [sym_pattern_constructor_proper_name] = "pattern_constructor_proper_name",
  [sym_pattern_constructor_fields] = "pattern_constructor_fields",
  [sym_pattern_variable] = "pattern_variable",
  [sym_qualifier] = "qualifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_module_name_repeat1] = "module_name_repeat1",
  [aux_sym_exposing_list_repeat1] = "exposing_list_repeat1",
  [aux_sym_type_declaration_repeat1] = "type_declaration_repeat1",
  [aux_sym_type_declaration_variables_repeat1] = "type_declaration_variables_repeat1",
  [aux_sym_type_declaration_constructor_fields_repeat1] = "type_declaration_constructor_fields_repeat1",
  [aux_sym_type_closed_record_repeat1] = "type_closed_record_repeat1",
  [aux_sym_expression_function_repeat1] = "expression_function_repeat1",
  [aux_sym_expression_match_repeat1] = "expression_match_repeat1",
  [aux_sym_expression_call_arguments_repeat1] = "expression_call_arguments_repeat1",
  [aux_sym_expression_record_repeat1] = "expression_record_repeat1",
  [aux_sym_pattern_constructor_fields_repeat1] = "pattern_constructor_fields_repeat1",
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
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_foreign] = anon_sym_foreign,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_return] = anon_sym_return,
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
  [sym_type_alias_declaration] = sym_type_alias_declaration,
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
  [sym_type_closed_record] = sym_type_closed_record,
  [sym_type_open_record] = sym_type_open_record,
  [sym_type_open_record_row_variable] = sym_type_open_record_row_variable,
  [sym_type_record_field] = sym_type_record_field,
  [sym_type_record_field_label] = sym_type_record_field_label,
  [sym_type_call] = sym_type_call,
  [sym_type_call_arguments] = sym_type_call_arguments,
  [sym_type_constructor] = sym_type_constructor,
  [sym_type_constructor_proper_name] = sym_type_constructor_proper_name,
  [sym_type_variable] = sym_type_variable,
  [sym_type_annotation] = sym_type_annotation,
  [sym_return_type_annotation] = sym_return_type_annotation,
  [sym_foreign_value_declaration] = sym_foreign_value_declaration,
  [sym_value_declaration] = sym_value_declaration,
  [sym_value_declaration_name] = sym_value_declaration_name,
  [sym__expression] = sym__expression,
  [sym__expression2] = sym__expression2,
  [sym__expression1] = sym__expression1,
  [sym__expression0] = sym__expression0,
  [sym_expression_right_pipe] = sym_expression_right_pipe,
  [sym_expression_function] = sym_expression_function,
  [sym_expression_function_parameter] = sym_expression_function_parameter,
  [sym_expression_function_parameter_name] = sym_expression_function_parameter_name,
  [sym_expression_if] = sym_expression_if,
  [sym_expression_match] = sym_expression_match,
  [sym_expression_effect] = sym_expression_effect,
  [sym__expression_effect_statement] = sym__expression_effect_statement,
  [sym_expression_effect_bind] = sym_expression_effect_bind,
  [sym_expression_effect_expression] = sym_expression_effect_expression,
  [sym_expression_effect_bind_name] = sym_expression_effect_bind_name,
  [sym_expression_effect_return] = sym_expression_effect_return,
  [sym_expression_match_arm] = sym_expression_match_arm,
  [sym__expression_parens] = sym__expression_parens,
  [sym_expression_call] = sym_expression_call,
  [sym_expression_call_arguments] = sym_expression_call_arguments,
  [sym_expression_array] = sym_expression_array,
  [sym_expression_record] = sym_expression_record,
  [sym_expression_record_field] = sym_expression_record_field,
  [sym_expression_record_access] = sym_expression_record_access,
  [sym_expression_record_field_label] = sym_expression_record_field_label,
  [sym_expression_constructor] = sym_expression_constructor,
  [sym_expression_constructor_proper_name] = sym_expression_constructor_proper_name,
  [sym_expression_variable] = sym_expression_variable,
  [sym_expression_variable_name] = sym_expression_variable_name,
  [sym__pattern] = sym__pattern,
  [sym_pattern_constructor] = sym_pattern_constructor,
  [sym_pattern_constructor_proper_name] = sym_pattern_constructor_proper_name,
  [sym_pattern_constructor_fields] = sym_pattern_constructor_fields,
  [sym_pattern_variable] = sym_pattern_variable,
  [sym_qualifier] = sym_qualifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_module_name_repeat1] = aux_sym_module_name_repeat1,
  [aux_sym_exposing_list_repeat1] = aux_sym_exposing_list_repeat1,
  [aux_sym_type_declaration_repeat1] = aux_sym_type_declaration_repeat1,
  [aux_sym_type_declaration_variables_repeat1] = aux_sym_type_declaration_variables_repeat1,
  [aux_sym_type_declaration_constructor_fields_repeat1] = aux_sym_type_declaration_constructor_fields_repeat1,
  [aux_sym_type_closed_record_repeat1] = aux_sym_type_closed_record_repeat1,
  [aux_sym_expression_function_repeat1] = aux_sym_expression_function_repeat1,
  [aux_sym_expression_match_repeat1] = aux_sym_expression_match_repeat1,
  [aux_sym_expression_call_arguments_repeat1] = aux_sym_expression_call_arguments_repeat1,
  [aux_sym_expression_record_repeat1] = aux_sym_expression_record_repeat1,
  [aux_sym_pattern_constructor_fields_repeat1] = aux_sym_pattern_constructor_fields_repeat1,
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
  [anon_sym_alias] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
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
  [sym_type_alias_declaration] = {
    .visible = true,
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
  [sym_type_closed_record] = {
    .visible = true,
    .named = true,
  },
  [sym_type_open_record] = {
    .visible = true,
    .named = true,
  },
  [sym_type_open_record_row_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type_record_field] = {
    .visible = true,
    .named = true,
  },
  [sym_type_record_field_label] = {
    .visible = true,
    .named = true,
  },
  [sym_type_call] = {
    .visible = true,
    .named = true,
  },
  [sym_type_call_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constructor_proper_name] = {
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
  [sym__expression2] = {
    .visible = false,
    .named = true,
  },
  [sym__expression1] = {
    .visible = false,
    .named = true,
  },
  [sym__expression0] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_right_pipe] = {
    .visible = true,
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
  [sym_expression_if] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_match] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_effect_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_effect_bind] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect_bind_name] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect_return] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_match_arm] = {
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
  [sym_expression_record] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_record_field] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_record_access] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_record_field_label] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_constructor_proper_name] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_constructor_proper_name] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_constructor_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_variable] = {
    .visible = true,
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
  [aux_sym_type_closed_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_match_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_call_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_constructor_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_aliased_type = 2,
  field_argument = 3,
  field_arguments = 4,
  field_arm = 5,
  field_bind_expression = 6,
  field_bind_name = 7,
  field_body = 8,
  field_condition = 9,
  field_constructor = 10,
  field_declaration = 11,
  field_element = 12,
  field_exports = 13,
  field_expression = 14,
  field_false_clause = 15,
  field_field = 16,
  field_fields = 17,
  field_function = 18,
  field_header = 19,
  field_import = 20,
  field_imports = 21,
  field_label = 22,
  field_lhs = 23,
  field_match_arm_expression = 24,
  field_match_arm_pattern = 25,
  field_module_name = 26,
  field_name = 27,
  field_package = 28,
  field_parameter = 29,
  field_rest = 30,
  field_return_type = 31,
  field_rhs = 32,
  field_true_clause = 33,
  field_type_annotation = 34,
  field_value = 35,
  field_variable = 36,
  field_variables = 37,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_aliased_type] = "aliased_type",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_arm] = "arm",
  [field_bind_expression] = "bind_expression",
  [field_bind_name] = "bind_name",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_constructor] = "constructor",
  [field_declaration] = "declaration",
  [field_element] = "element",
  [field_exports] = "exports",
  [field_expression] = "expression",
  [field_false_clause] = "false_clause",
  [field_field] = "field",
  [field_fields] = "fields",
  [field_function] = "function",
  [field_header] = "header",
  [field_import] = "import",
  [field_imports] = "imports",
  [field_label] = "label",
  [field_lhs] = "lhs",
  [field_match_arm_expression] = "match_arm_expression",
  [field_match_arm_pattern] = "match_arm_pattern",
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_package] = "package",
  [field_parameter] = "parameter",
  [field_rest] = "rest",
  [field_return_type] = "return_type",
  [field_rhs] = "rhs",
  [field_true_clause] = "true_clause",
  [field_type_annotation] = "type_annotation",
  [field_value] = "value",
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
  [15] = {.index = 25, .length = 3},
  [16] = {.index = 28, .length = 3},
  [17] = {.index = 31, .length = 1},
  [18] = {.index = 32, .length = 2},
  [19] = {.index = 34, .length = 2},
  [20] = {.index = 36, .length = 1},
  [21] = {.index = 37, .length = 1},
  [22] = {.index = 38, .length = 2},
  [23] = {.index = 40, .length = 3},
  [24] = {.index = 43, .length = 4},
  [25] = {.index = 47, .length = 4},
  [26] = {.index = 51, .length = 2},
  [27] = {.index = 53, .length = 2},
  [28] = {.index = 55, .length = 3},
  [29] = {.index = 58, .length = 3},
  [30] = {.index = 61, .length = 2},
  [31] = {.index = 63, .length = 2},
  [32] = {.index = 65, .length = 2},
  [33] = {.index = 67, .length = 2},
  [34] = {.index = 69, .length = 1},
  [35] = {.index = 70, .length = 1},
  [36] = {.index = 71, .length = 5},
  [37] = {.index = 76, .length = 3},
  [38] = {.index = 79, .length = 3},
  [39] = {.index = 82, .length = 4},
  [40] = {.index = 86, .length = 4},
  [41] = {.index = 90, .length = 3},
  [42] = {.index = 93, .length = 1},
  [43] = {.index = 94, .length = 2},
  [44] = {.index = 96, .length = 1},
  [45] = {.index = 97, .length = 3},
  [46] = {.index = 100, .length = 2},
  [47] = {.index = 102, .length = 2},
  [48] = {.index = 104, .length = 1},
  [49] = {.index = 105, .length = 5},
  [50] = {.index = 110, .length = 2},
  [51] = {.index = 112, .length = 2},
  [52] = {.index = 114, .length = 3},
  [53] = {.index = 117, .length = 3},
  [54] = {.index = 120, .length = 3},
  [55] = {.index = 123, .length = 2},
  [56] = {.index = 125, .length = 3},
  [57] = {.index = 128, .length = 3},
  [58] = {.index = 131, .length = 2},
  [59] = {.index = 133, .length = 3},
  [60] = {.index = 136, .length = 4},
  [61] = {.index = 140, .length = 3},
  [62] = {.index = 143, .length = 4},
  [63] = {.index = 147, .length = 4},
  [64] = {.index = 151, .length = 5},
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
    {field_alias, 2},
    {field_alias, 3},
    {field_module_name, 1},
  [28] =
    {field_imports, 3},
    {field_module_name, 2},
    {field_package, 1},
  [31] =
    {field_variable, 1},
  [32] =
    {field_constructor, 3},
    {field_name, 1},
  [34] =
    {field_fields, 1},
    {field_name, 0},
  [36] =
    {field_field, 1},
  [37] =
    {field_element, 1},
  [38] =
    {field_lhs, 0},
    {field_rhs, 2},
  [40] =
    {field_expression, 3},
    {field_name, 0},
    {field_type_annotation, 1},
  [43] =
    {field_alias, 2},
    {field_alias, 3},
    {field_imports, 4},
    {field_module_name, 1},
  [47] =
    {field_alias, 3},
    {field_alias, 4},
    {field_module_name, 2},
    {field_package, 1},
  [51] =
    {field_aliased_type, 4},
    {field_name, 2},
  [53] =
    {field_variable, 1},
    {field_variable, 2},
  [55] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_name, 1},
  [58] =
    {field_constructor, 4},
    {field_name, 1},
    {field_variables, 2},
  [61] =
    {field_field, 1},
    {field_field, 2},
  [63] =
    {field_label, 0},
    {field_value, 2},
  [65] =
    {field_name, 0},
    {field_type_annotation, 1},
  [67] =
    {field_element, 1},
    {field_element, 2},
  [69] =
    {field_argument, 1},
  [70] =
    {field_return_type, 3},
  [71] =
    {field_alias, 3},
    {field_alias, 4},
    {field_imports, 5},
    {field_module_name, 2},
    {field_package, 1},
  [76] =
    {field_aliased_type, 5},
    {field_name, 2},
    {field_variables, 3},
  [79] =
    {field_variable, 1},
    {field_variable, 2},
    {field_variable, 3},
  [82] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
  [86] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
    {field_variables, 2},
  [90] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [93] =
    {field_body, 4},
  [94] =
    {field_arm, 3},
    {field_expression, 1},
  [96] =
    {field_rest, 2},
  [97] =
    {field_element, 1},
    {field_element, 2},
    {field_element, 3},
  [100] =
    {field_argument, 1},
    {field_argument, 2},
  [102] =
    {field_parameter, 1},
    {field_return_type, 4},
  [104] =
    {field_field, 3},
  [105] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_constructor, 6},
    {field_name, 1},
    {field_variables, 2},
  [110] =
    {field_body, 5},
    {field_return_type, 3},
  [112] =
    {field_body, 5},
    {field_parameter, 2},
  [114] =
    {field_condition, 1},
    {field_false_clause, 5},
    {field_true_clause, 3},
  [117] =
    {field_argument, 1},
    {field_argument, 2},
    {field_argument, 3},
  [120] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_return_type, 5},
  [123] =
    {field_field, 3},
    {field_field, 4},
  [125] =
    {field_body, 6},
    {field_parameter, 2},
    {field_return_type, 4},
  [128] =
    {field_body, 6},
    {field_parameter, 2},
    {field_parameter, 3},
  [131] =
    {field_match_arm_expression, 3},
    {field_match_arm_pattern, 1},
  [133] =
    {field_bind_expression, 2},
    {field_bind_name, 0},
    {field_rest, 4},
  [136] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 6},
  [140] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
  [143] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 5},
  [147] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_parameter, 4},
  [151] =
    {field_body, 8},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_parameter, 4},
    {field_return_type, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
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
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '}') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(0)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '}') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(1)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(123);
      if (sym__name_character_set_1(lookahead)) ADVANCE(161);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == '{') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(2)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(123);
      if (sym__name_character_set_1(lookahead)) ADVANCE(161);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == '{') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(3)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(123);
      if (sym__name_character_set_1(lookahead)) ADVANCE(161);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '}') ADVANCE(92);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '}') ADVANCE(92);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(6)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(123);
      if (sym__name_character_set_1(lookahead)) ADVANCE(161);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(162);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(7);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(10)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(124);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 70:
      if (eof) ADVANCE(72);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 't') ADVANCE(160);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(70)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(161);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 't') ADVANCE(160);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(71)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(161);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_match);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_do);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_expression_string);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_expression_int);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_expression_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_expression_true);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_expression_true);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_expression_false);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_expression_false);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_expression_unit);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_expression_unit);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__proper_name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__package_name);
      if (sym__package_name_character_set_2(lookahead)) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(98);
      if (sym__name_character_set_3(lookahead)) ADVANCE(161);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(139);
      if (sym__name_character_set_3(lookahead)) ADVANCE(161);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(154);
      if (sym__name_character_set_3(lookahead)) ADVANCE(161);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(136);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(118);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(120);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(86);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(157);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(137);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(100);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(143);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(104);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(135);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(155);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(153);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(148);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(138);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(111);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(95);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(108);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(151);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(152);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(131);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(146);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(158);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(142);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(133);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(156);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(130);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(128);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(122);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(79);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(159);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(129);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(150);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'y') ADVANCE(147);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
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
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 70},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 70},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 71},
  [59] = {.lex_state = 71},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 71},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
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
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 70},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 70},
  [135] = {.lex_state = 70},
  [136] = {.lex_state = 70},
  [137] = {.lex_state = 70},
  [138] = {.lex_state = 70},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 70},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 70},
  [146] = {.lex_state = 70},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 70},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 71},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 71},
  [156] = {.lex_state = 71},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 71},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 71},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 71},
  [168] = {.lex_state = 71},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 71},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 71},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 71},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 71},
  [184] = {.lex_state = 71},
  [185] = {.lex_state = 71},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 6},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 6},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 6},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 10},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
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
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_foreign] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
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
    [sym_source_file] = STATE(337),
    [sym_module_header] = STATE(35),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(29), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    STATE(306), 1,
      sym_expression_effect_bind_name,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(304), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(256), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [86] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(29), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    STATE(306), 1,
      sym_expression_effect_bind_name,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(329), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(256), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [172] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(29), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    STATE(306), 1,
      sym_expression_effect_bind_name,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(332), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(256), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [258] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(226), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [335] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(215), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [412] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(226), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [489] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(214), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [566] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(226), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [643] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(226), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [720] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(84), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [794] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(90), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [868] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(280), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [942] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(92), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1016] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(91), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1090] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(94), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1164] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(307), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1238] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(279), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1312] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(315), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1386] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(308), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1460] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(93), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1534] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(226), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1608] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(317), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1682] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(89), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1756] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(85), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1830] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(311), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1904] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(318), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1978] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(88), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [2052] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(323), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [2126] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(83), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(328), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [2200] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
    STATE(171), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(61), 2,
      sym__expression1,
      sym_expression_constructor,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(54), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [2251] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(291), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2289] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(291), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2327] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(219), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2365] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_import,
    ACTIONS(63), 1,
      anon_sym_type,
    ACTIONS(65), 1,
      anon_sym_foreign,
    ACTIONS(67), 1,
      sym__name,
    STATE(224), 1,
      sym_value_declaration_name,
    STATE(40), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(59), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2401] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(291), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2439] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(291), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2477] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(291), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2515] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(291), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2553] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_import,
    ACTIONS(63), 1,
      anon_sym_type,
    ACTIONS(65), 1,
      anon_sym_foreign,
    ACTIONS(67), 1,
      sym__name,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      sym_value_declaration_name,
    STATE(102), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(58), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2589] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(205), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2624] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(340), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2659] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(297), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2694] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(330), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2729] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(192), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2764] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(271), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2799] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(291), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2834] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(147), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2869] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(162), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2904] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(149), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2939] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(144), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2974] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(132), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(79), 13,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    ACTIONS(83), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(89), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(93), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3096] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(78), 1,
      sym_expression_call_arguments,
    ACTIONS(97), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3121] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_type,
    ACTIONS(65), 1,
      anon_sym_foreign,
    ACTIONS(67), 1,
      sym__name,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      sym_value_declaration_name,
    STATE(79), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3150] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_type,
    ACTIONS(65), 1,
      anon_sym_foreign,
    ACTIONS(67), 1,
      sym__name,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      sym_value_declaration_name,
    STATE(79), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_PIPE,
    ACTIONS(107), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    STATE(78), 1,
      sym_expression_call_arguments,
    ACTIONS(111), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(115), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(119), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(123), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(127), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(131), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(137), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(141), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(145), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(149), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    ACTIONS(153), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3437] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_type_constructor_proper_name,
    STATE(258), 1,
      sym_qualifier,
    STATE(96), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(344), 5,
      sym__type1,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(159), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(163), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_PIPE,
    ACTIONS(167), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PIPE,
    ACTIONS(171), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(175), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    ACTIONS(179), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3596] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      anon_sym_type,
    ACTIONS(188), 1,
      anon_sym_foreign,
    ACTIONS(191), 1,
      sym__name,
    STATE(224), 1,
      sym_value_declaration_name,
    STATE(79), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(194), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(131), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_PIPE,
    ACTIONS(198), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_PIPE,
    ACTIONS(206), 1,
      anon_sym_PIPE_GT,
    ACTIONS(202), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3882] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    ACTIONS(232), 1,
      sym__proper_name,
    ACTIONS(234), 1,
      sym__name,
    STATE(139), 1,
      sym_pattern_constructor_proper_name,
    STATE(277), 1,
      sym_qualifier,
    STATE(265), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_type_call_arguments,
    ACTIONS(236), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3924] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__proper_name,
    ACTIONS(234), 1,
      sym__name,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_pattern_constructor_proper_name,
    STATE(277), 1,
      sym_qualifier,
    STATE(265), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(242), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3964] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__proper_name,
    ACTIONS(234), 1,
      sym__name,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_pattern_constructor_proper_name,
    STATE(277), 1,
      sym_qualifier,
    STATE(208), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4001] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DOT_DOT,
    ACTIONS(250), 1,
      sym__proper_name,
    ACTIONS(252), 1,
      sym__name,
    STATE(143), 1,
      sym_exposing_type_name,
    STATE(220), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4022] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      anon_sym_import,
    STATE(102), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    ACTIONS(259), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__proper_name,
    ACTIONS(234), 1,
      sym__name,
    STATE(139), 1,
      sym_pattern_constructor_proper_name,
    STATE(277), 1,
      sym_qualifier,
    STATE(265), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [4062] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    ACTIONS(263), 1,
      anon_sym_as,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym__everything,
    STATE(309), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4083] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    ACTIONS(269), 1,
      anon_sym_as,
    STATE(335), 1,
      sym__everything,
    STATE(339), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym__proper_name,
    ACTIONS(252), 1,
      sym__name,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_exposing_type_name,
    STATE(259), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4151] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym__proper_name,
    ACTIONS(252), 1,
      sym__name,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_exposing_type_name,
    STATE(259), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4172] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__proper_name,
    ACTIONS(234), 1,
      sym__name,
    STATE(139), 1,
      sym_pattern_constructor_proper_name,
    STATE(277), 1,
      sym_qualifier,
    STATE(333), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [4193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4266] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym__proper_name,
    ACTIONS(252), 1,
      sym__name,
    STATE(143), 1,
      sym_exposing_type_name,
    STATE(259), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(119), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(291), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DOT,
    STATE(121), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(296), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DOT,
    STATE(119), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(300), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    STATE(335), 1,
      sym__everything,
    STATE(342), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_DASH_GT,
    ACTIONS(308), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    STATE(335), 1,
      sym__everything,
    STATE(326), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LT_DASH,
    ACTIONS(115), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
  [4468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym__everything,
    STATE(345), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4494] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    ACTIONS(326), 1,
      sym__name,
    STATE(227), 1,
      sym_type_record_field,
    STATE(301), 1,
      sym_type_open_record_row_variable,
    STATE(322), 1,
      sym_type_record_field_label,
  [4513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(218), 1,
      sym_pattern_constructor_fields,
    ACTIONS(350), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(352), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_LPAREN,
  [4630] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(286), 1,
      sym__everything,
    STATE(287), 1,
      sym_exposing_type_constructors,
    ACTIONS(360), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_pattern_constructor_fields,
    ACTIONS(374), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4734] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    ACTIONS(384), 1,
      sym__name,
    STATE(159), 1,
      sym_expression_function_parameter_name,
    STATE(233), 1,
      sym_expression_function_parameter,
  [4750] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    ACTIONS(388), 1,
      sym__name,
    STATE(275), 1,
      sym_expression_record_field,
    STATE(319), 1,
      sym_expression_record_field_label,
  [4766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4778] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    ACTIONS(396), 1,
      sym__name,
    STATE(273), 1,
      sym_type_record_field,
    STATE(322), 1,
      sym_type_record_field_label,
  [4794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(404), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4818] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__name,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym_expression_function_parameter_name,
    STATE(269), 1,
      sym_expression_function_parameter,
  [4834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    ACTIONS(410), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_COLON,
    STATE(288), 1,
      sym_type_annotation,
    ACTIONS(412), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_type_declaration_constructor_fields,
    ACTIONS(416), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_expression_call_arguments_repeat1,
    ACTIONS(420), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_PIPE,
    ACTIONS(430), 1,
      anon_sym_end,
    STATE(163), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [4912] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_EQ,
    STATE(278), 1,
      sym_type_declaration_variables,
  [4928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    ACTIONS(440), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4940] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym__name,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_type_record_field,
    STATE(322), 1,
      sym_type_record_field_label,
  [4956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(454), 1,
      anon_sym_end,
    STATE(163), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [4994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym__proper_name,
    ACTIONS(458), 1,
      sym__name,
    STATE(75), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
  [5020] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      sym__proper_name,
    STATE(104), 1,
      sym_module_name,
    STATE(285), 1,
      sym_module_import_package,
  [5036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__name,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym_expression_function_parameter_name,
    STATE(269), 1,
      sym_expression_function_parameter,
  [5052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
    ACTIONS(468), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5064] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym__name,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_type_record_field,
    STATE(322), 1,
      sym_type_record_field_label,
  [5080] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_PIPE,
    ACTIONS(474), 1,
      sym__proper_name,
    STATE(160), 1,
      sym_type_declaration_constructor_name,
    STATE(212), 1,
      sym_type_declaration_constructor,
  [5096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
    ACTIONS(478), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__proper_name,
    ACTIONS(480), 1,
      anon_sym_PIPE,
    STATE(160), 1,
      sym_type_declaration_constructor_name,
    STATE(251), 1,
      sym_type_declaration_constructor,
  [5124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym__name,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_type_record_field,
    STATE(322), 1,
      sym_type_record_field_label,
  [5140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    ACTIONS(486), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__name,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      sym_expression_record_field,
    STATE(319), 1,
      sym_expression_record_field_label,
  [5168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__name,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_expression_record_field,
    STATE(319), 1,
      sym_expression_record_field_label,
  [5184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
    ACTIONS(494), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    ACTIONS(498), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
    ACTIONS(502), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_DASH_GT,
    ACTIONS(506), 1,
      anon_sym_COLON,
    STATE(341), 1,
      sym_return_type_annotation,
  [5233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__proper_name,
    STATE(160), 1,
      sym_type_declaration_constructor_name,
    STATE(274), 1,
      sym_type_declaration_constructor,
  [5246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym__name,
    STATE(239), 1,
      sym_type_record_field,
    STATE(322), 1,
      sym_type_record_field_label,
  [5281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_type_closed_record_repeat1,
  [5294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [5320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_exposing_list_repeat1,
  [5342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [5355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__proper_name,
    STATE(160), 1,
      sym_type_declaration_constructor_name,
    STATE(249), 1,
      sym_type_declaration_constructor,
  [5390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      sym__name,
    STATE(270), 1,
      sym_type_declaration_variable,
  [5403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_SEMI,
    ACTIONS(549), 1,
      anon_sym_PIPE,
    STATE(204), 1,
      aux_sym_type_declaration_repeat1,
  [5429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_SEMI,
    ACTIONS(555), 1,
      anon_sym_PIPE,
    STATE(204), 1,
      aux_sym_type_declaration_repeat1,
  [5451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_PIPE,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      aux_sym_type_declaration_repeat1,
  [5477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_PIPE,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_type_declaration_repeat1,
  [5490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [5503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      aux_sym_expression_record_repeat1,
  [5525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [5534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_PIPE,
    ACTIONS(577), 1,
      anon_sym_SEMI,
    STATE(255), 1,
      aux_sym_type_declaration_repeat1,
  [5547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_expression_record_repeat1,
  [5560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym_expression_function_repeat1,
  [5599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_alias,
    ACTIONS(595), 1,
      sym__proper_name,
    STATE(164), 1,
      sym_type_declaration_name,
  [5612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_exposing_list_repeat1,
  [5647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__name,
    STATE(159), 1,
      sym_expression_function_parameter_name,
    STATE(269), 1,
      sym_expression_function_parameter,
  [5660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COLON,
    ACTIONS(605), 1,
      anon_sym_DASH_GT,
    STATE(327), 1,
      sym_return_type_annotation,
  [5673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_COLON,
    ACTIONS(609), 1,
      anon_sym_EQ,
    STATE(343), 1,
      sym_type_annotation,
  [5699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(611), 1,
      anon_sym_EQ,
    STATE(336), 1,
      sym_type_declaration_variables,
  [5712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      aux_sym_type_closed_record_repeat1,
  [5734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym__name,
    STATE(273), 1,
      sym_type_record_field,
    STATE(322), 1,
      sym_type_record_field_label,
  [5756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_type_closed_record_repeat1,
  [5769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    STATE(169), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [5793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_expression_function_repeat1,
  [5806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_exposing_list_repeat1,
  [5819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [5828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym__name,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      sym_type_declaration_variable,
  [5863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      aux_sym_type_closed_record_repeat1,
  [5876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
  [5885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym_expression_function_repeat1,
  [5898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COLON,
    ACTIONS(651), 1,
      anon_sym_DASH_GT,
    STATE(324), 1,
      sym_return_type_annotation,
  [5911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_type_closed_record_repeat1,
  [5924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_expression_record_repeat1,
  [5950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COLON,
    ACTIONS(662), 1,
      anon_sym_DASH_GT,
    STATE(305), 1,
      sym_return_type_annotation,
  [5963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(666), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_PIPE,
    ACTIONS(668), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      aux_sym_type_declaration_repeat1,
  [6002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_PIPE,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_type_declaration_repeat1,
  [6015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_PIPE,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    STATE(207), 1,
      aux_sym_type_declaration_repeat1,
  [6028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__name,
    STATE(275), 1,
      sym_expression_record_field,
    STATE(319), 1,
      sym_expression_record_field_label,
  [6050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__proper_name,
    STATE(160), 1,
      sym_type_declaration_constructor_name,
    STATE(206), 1,
      sym_type_declaration_constructor,
  [6063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_PIPE,
    ACTIONS(668), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_type_declaration_repeat1,
  [6076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_SEMI,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
  [6086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__proper_name,
    STATE(107), 1,
      sym_type_constructor_proper_name,
  [6104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym__name,
    STATE(270), 1,
      sym_type_declaration_variable,
  [6130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [6146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__proper_name,
    STATE(123), 1,
      sym_module_import_alias,
  [6172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_COLON,
    STATE(331), 1,
      sym_type_annotation,
  [6222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym__proper_name,
    STATE(148), 1,
      sym_pattern_constructor_proper_name,
  [6264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_SEMI,
    ACTIONS(706), 1,
      anon_sym_EQ,
  [6274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [6290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__proper_name,
    STATE(325), 1,
      sym_module_name,
  [6300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym__proper_name,
    STATE(225), 1,
      sym_type_declaration_name,
  [6326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__proper_name,
    STATE(105), 1,
      sym_module_name,
  [6336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym__name,
    STATE(272), 1,
      sym_value_declaration_name,
  [6370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 2,
      sym__proper_name,
      sym__name,
  [6378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__name,
    STATE(67), 1,
      sym_expression_record_field_label,
  [6396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [6404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__proper_name,
    STATE(129), 1,
      sym_module_import_alias,
  [6414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym__name,
    STATE(198), 1,
      sym_type_declaration_variable,
  [6424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_PIPE,
    ACTIONS(730), 1,
      anon_sym_COLON,
  [6434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
  [6441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_DASH_GT,
  [6448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_LBRACE,
  [6455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_SEMI,
  [6462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_PIPE,
  [6469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
  [6476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym__proper_name,
  [6483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
  [6490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_DASH_GT,
  [6497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_LT_DASH,
  [6504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_SEMI,
  [6511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
  [6518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_SEMI,
  [6525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_DASH_GT,
  [6532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SEMI,
  [6539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_SEMI,
  [6546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_DASH_GT,
  [6553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DOT_DOT,
  [6560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_else,
  [6567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym__package_name,
  [6574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_with,
  [6581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_then,
  [6588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_EQ,
  [6595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DASH_GT,
  [6602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [6609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_COLON,
  [6616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
  [6623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_DASH_GT,
  [6630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_exports,
  [6637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_SEMI,
  [6644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_DASH_GT,
  [6651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
  [6658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
  [6665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_SEMI,
  [6672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SEMI,
  [6679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
  [6686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_DASH_GT,
  [6693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COLON,
  [6700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SEMI,
  [6707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_EQ,
  [6714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      ts_builtin_sym_end,
  [6721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
  [6728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_SEMI,
  [6735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_SEMI,
  [6742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_DASH_GT,
  [6749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_SEMI,
  [6756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_EQ,
  [6763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_DASH_GT,
  [6770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_SEMI,
  [6777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_SEMI,
  [6784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym__proper_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 258,
  [SMALL_STATE(6)] = 335,
  [SMALL_STATE(7)] = 412,
  [SMALL_STATE(8)] = 489,
  [SMALL_STATE(9)] = 566,
  [SMALL_STATE(10)] = 643,
  [SMALL_STATE(11)] = 720,
  [SMALL_STATE(12)] = 794,
  [SMALL_STATE(13)] = 868,
  [SMALL_STATE(14)] = 942,
  [SMALL_STATE(15)] = 1016,
  [SMALL_STATE(16)] = 1090,
  [SMALL_STATE(17)] = 1164,
  [SMALL_STATE(18)] = 1238,
  [SMALL_STATE(19)] = 1312,
  [SMALL_STATE(20)] = 1386,
  [SMALL_STATE(21)] = 1460,
  [SMALL_STATE(22)] = 1534,
  [SMALL_STATE(23)] = 1608,
  [SMALL_STATE(24)] = 1682,
  [SMALL_STATE(25)] = 1756,
  [SMALL_STATE(26)] = 1830,
  [SMALL_STATE(27)] = 1904,
  [SMALL_STATE(28)] = 1978,
  [SMALL_STATE(29)] = 2052,
  [SMALL_STATE(30)] = 2126,
  [SMALL_STATE(31)] = 2200,
  [SMALL_STATE(32)] = 2251,
  [SMALL_STATE(33)] = 2289,
  [SMALL_STATE(34)] = 2327,
  [SMALL_STATE(35)] = 2365,
  [SMALL_STATE(36)] = 2401,
  [SMALL_STATE(37)] = 2439,
  [SMALL_STATE(38)] = 2477,
  [SMALL_STATE(39)] = 2515,
  [SMALL_STATE(40)] = 2553,
  [SMALL_STATE(41)] = 2589,
  [SMALL_STATE(42)] = 2624,
  [SMALL_STATE(43)] = 2659,
  [SMALL_STATE(44)] = 2694,
  [SMALL_STATE(45)] = 2729,
  [SMALL_STATE(46)] = 2764,
  [SMALL_STATE(47)] = 2799,
  [SMALL_STATE(48)] = 2834,
  [SMALL_STATE(49)] = 2869,
  [SMALL_STATE(50)] = 2904,
  [SMALL_STATE(51)] = 2939,
  [SMALL_STATE(52)] = 2974,
  [SMALL_STATE(53)] = 3009,
  [SMALL_STATE(54)] = 3031,
  [SMALL_STATE(55)] = 3054,
  [SMALL_STATE(56)] = 3075,
  [SMALL_STATE(57)] = 3096,
  [SMALL_STATE(58)] = 3121,
  [SMALL_STATE(59)] = 3150,
  [SMALL_STATE(60)] = 3179,
  [SMALL_STATE(61)] = 3200,
  [SMALL_STATE(62)] = 3225,
  [SMALL_STATE(63)] = 3246,
  [SMALL_STATE(64)] = 3267,
  [SMALL_STATE(65)] = 3288,
  [SMALL_STATE(66)] = 3309,
  [SMALL_STATE(67)] = 3332,
  [SMALL_STATE(68)] = 3353,
  [SMALL_STATE(69)] = 3374,
  [SMALL_STATE(70)] = 3395,
  [SMALL_STATE(71)] = 3416,
  [SMALL_STATE(72)] = 3437,
  [SMALL_STATE(73)] = 3470,
  [SMALL_STATE(74)] = 3491,
  [SMALL_STATE(75)] = 3512,
  [SMALL_STATE(76)] = 3533,
  [SMALL_STATE(77)] = 3554,
  [SMALL_STATE(78)] = 3575,
  [SMALL_STATE(79)] = 3596,
  [SMALL_STATE(80)] = 3625,
  [SMALL_STATE(81)] = 3645,
  [SMALL_STATE(82)] = 3665,
  [SMALL_STATE(83)] = 3685,
  [SMALL_STATE(84)] = 3706,
  [SMALL_STATE(85)] = 3722,
  [SMALL_STATE(86)] = 3738,
  [SMALL_STATE(87)] = 3754,
  [SMALL_STATE(88)] = 3770,
  [SMALL_STATE(89)] = 3786,
  [SMALL_STATE(90)] = 3802,
  [SMALL_STATE(91)] = 3818,
  [SMALL_STATE(92)] = 3834,
  [SMALL_STATE(93)] = 3850,
  [SMALL_STATE(94)] = 3866,
  [SMALL_STATE(95)] = 3882,
  [SMALL_STATE(96)] = 3906,
  [SMALL_STATE(97)] = 3924,
  [SMALL_STATE(98)] = 3948,
  [SMALL_STATE(99)] = 3964,
  [SMALL_STATE(100)] = 3988,
  [SMALL_STATE(101)] = 4001,
  [SMALL_STATE(102)] = 4022,
  [SMALL_STATE(103)] = 4041,
  [SMALL_STATE(104)] = 4062,
  [SMALL_STATE(105)] = 4083,
  [SMALL_STATE(106)] = 4104,
  [SMALL_STATE(107)] = 4125,
  [SMALL_STATE(108)] = 4138,
  [SMALL_STATE(109)] = 4151,
  [SMALL_STATE(110)] = 4172,
  [SMALL_STATE(111)] = 4193,
  [SMALL_STATE(112)] = 4206,
  [SMALL_STATE(113)] = 4218,
  [SMALL_STATE(114)] = 4230,
  [SMALL_STATE(115)] = 4242,
  [SMALL_STATE(116)] = 4254,
  [SMALL_STATE(117)] = 4266,
  [SMALL_STATE(118)] = 4284,
  [SMALL_STATE(119)] = 4296,
  [SMALL_STATE(120)] = 4312,
  [SMALL_STATE(121)] = 4328,
  [SMALL_STATE(122)] = 4344,
  [SMALL_STATE(123)] = 4356,
  [SMALL_STATE(124)] = 4374,
  [SMALL_STATE(125)] = 4386,
  [SMALL_STATE(126)] = 4400,
  [SMALL_STATE(127)] = 4412,
  [SMALL_STATE(128)] = 4424,
  [SMALL_STATE(129)] = 4436,
  [SMALL_STATE(130)] = 4454,
  [SMALL_STATE(131)] = 4468,
  [SMALL_STATE(132)] = 4483,
  [SMALL_STATE(133)] = 4494,
  [SMALL_STATE(134)] = 4513,
  [SMALL_STATE(135)] = 4526,
  [SMALL_STATE(136)] = 4539,
  [SMALL_STATE(137)] = 4552,
  [SMALL_STATE(138)] = 4565,
  [SMALL_STATE(139)] = 4578,
  [SMALL_STATE(140)] = 4593,
  [SMALL_STATE(141)] = 4606,
  [SMALL_STATE(142)] = 4619,
  [SMALL_STATE(143)] = 4630,
  [SMALL_STATE(144)] = 4647,
  [SMALL_STATE(145)] = 4658,
  [SMALL_STATE(146)] = 4671,
  [SMALL_STATE(147)] = 4684,
  [SMALL_STATE(148)] = 4695,
  [SMALL_STATE(149)] = 4710,
  [SMALL_STATE(150)] = 4721,
  [SMALL_STATE(151)] = 4734,
  [SMALL_STATE(152)] = 4750,
  [SMALL_STATE(153)] = 4766,
  [SMALL_STATE(154)] = 4778,
  [SMALL_STATE(155)] = 4794,
  [SMALL_STATE(156)] = 4806,
  [SMALL_STATE(157)] = 4818,
  [SMALL_STATE(158)] = 4834,
  [SMALL_STATE(159)] = 4846,
  [SMALL_STATE(160)] = 4860,
  [SMALL_STATE(161)] = 4874,
  [SMALL_STATE(162)] = 4888,
  [SMALL_STATE(163)] = 4898,
  [SMALL_STATE(164)] = 4912,
  [SMALL_STATE(165)] = 4928,
  [SMALL_STATE(166)] = 4940,
  [SMALL_STATE(167)] = 4956,
  [SMALL_STATE(168)] = 4968,
  [SMALL_STATE(169)] = 4980,
  [SMALL_STATE(170)] = 4994,
  [SMALL_STATE(171)] = 5004,
  [SMALL_STATE(172)] = 5020,
  [SMALL_STATE(173)] = 5036,
  [SMALL_STATE(174)] = 5052,
  [SMALL_STATE(175)] = 5064,
  [SMALL_STATE(176)] = 5080,
  [SMALL_STATE(177)] = 5096,
  [SMALL_STATE(178)] = 5108,
  [SMALL_STATE(179)] = 5124,
  [SMALL_STATE(180)] = 5140,
  [SMALL_STATE(181)] = 5152,
  [SMALL_STATE(182)] = 5168,
  [SMALL_STATE(183)] = 5184,
  [SMALL_STATE(184)] = 5196,
  [SMALL_STATE(185)] = 5208,
  [SMALL_STATE(186)] = 5220,
  [SMALL_STATE(187)] = 5233,
  [SMALL_STATE(188)] = 5246,
  [SMALL_STATE(189)] = 5255,
  [SMALL_STATE(190)] = 5268,
  [SMALL_STATE(191)] = 5281,
  [SMALL_STATE(192)] = 5294,
  [SMALL_STATE(193)] = 5307,
  [SMALL_STATE(194)] = 5320,
  [SMALL_STATE(195)] = 5329,
  [SMALL_STATE(196)] = 5342,
  [SMALL_STATE(197)] = 5355,
  [SMALL_STATE(198)] = 5364,
  [SMALL_STATE(199)] = 5377,
  [SMALL_STATE(200)] = 5390,
  [SMALL_STATE(201)] = 5403,
  [SMALL_STATE(202)] = 5416,
  [SMALL_STATE(203)] = 5429,
  [SMALL_STATE(204)] = 5438,
  [SMALL_STATE(205)] = 5451,
  [SMALL_STATE(206)] = 5464,
  [SMALL_STATE(207)] = 5477,
  [SMALL_STATE(208)] = 5490,
  [SMALL_STATE(209)] = 5503,
  [SMALL_STATE(210)] = 5512,
  [SMALL_STATE(211)] = 5525,
  [SMALL_STATE(212)] = 5534,
  [SMALL_STATE(213)] = 5547,
  [SMALL_STATE(214)] = 5560,
  [SMALL_STATE(215)] = 5573,
  [SMALL_STATE(216)] = 5586,
  [SMALL_STATE(217)] = 5599,
  [SMALL_STATE(218)] = 5612,
  [SMALL_STATE(219)] = 5621,
  [SMALL_STATE(220)] = 5634,
  [SMALL_STATE(221)] = 5647,
  [SMALL_STATE(222)] = 5660,
  [SMALL_STATE(223)] = 5673,
  [SMALL_STATE(224)] = 5686,
  [SMALL_STATE(225)] = 5699,
  [SMALL_STATE(226)] = 5712,
  [SMALL_STATE(227)] = 5721,
  [SMALL_STATE(228)] = 5734,
  [SMALL_STATE(229)] = 5743,
  [SMALL_STATE(230)] = 5756,
  [SMALL_STATE(231)] = 5769,
  [SMALL_STATE(232)] = 5782,
  [SMALL_STATE(233)] = 5793,
  [SMALL_STATE(234)] = 5806,
  [SMALL_STATE(235)] = 5819,
  [SMALL_STATE(236)] = 5828,
  [SMALL_STATE(237)] = 5837,
  [SMALL_STATE(238)] = 5850,
  [SMALL_STATE(239)] = 5863,
  [SMALL_STATE(240)] = 5876,
  [SMALL_STATE(241)] = 5885,
  [SMALL_STATE(242)] = 5898,
  [SMALL_STATE(243)] = 5911,
  [SMALL_STATE(244)] = 5924,
  [SMALL_STATE(245)] = 5937,
  [SMALL_STATE(246)] = 5950,
  [SMALL_STATE(247)] = 5963,
  [SMALL_STATE(248)] = 5976,
  [SMALL_STATE(249)] = 5989,
  [SMALL_STATE(250)] = 6002,
  [SMALL_STATE(251)] = 6015,
  [SMALL_STATE(252)] = 6028,
  [SMALL_STATE(253)] = 6037,
  [SMALL_STATE(254)] = 6050,
  [SMALL_STATE(255)] = 6063,
  [SMALL_STATE(256)] = 6076,
  [SMALL_STATE(257)] = 6086,
  [SMALL_STATE(258)] = 6094,
  [SMALL_STATE(259)] = 6104,
  [SMALL_STATE(260)] = 6112,
  [SMALL_STATE(261)] = 6120,
  [SMALL_STATE(262)] = 6130,
  [SMALL_STATE(263)] = 6138,
  [SMALL_STATE(264)] = 6146,
  [SMALL_STATE(265)] = 6154,
  [SMALL_STATE(266)] = 6162,
  [SMALL_STATE(267)] = 6172,
  [SMALL_STATE(268)] = 6180,
  [SMALL_STATE(269)] = 6188,
  [SMALL_STATE(270)] = 6196,
  [SMALL_STATE(271)] = 6204,
  [SMALL_STATE(272)] = 6212,
  [SMALL_STATE(273)] = 6222,
  [SMALL_STATE(274)] = 6230,
  [SMALL_STATE(275)] = 6238,
  [SMALL_STATE(276)] = 6246,
  [SMALL_STATE(277)] = 6254,
  [SMALL_STATE(278)] = 6264,
  [SMALL_STATE(279)] = 6274,
  [SMALL_STATE(280)] = 6282,
  [SMALL_STATE(281)] = 6290,
  [SMALL_STATE(282)] = 6300,
  [SMALL_STATE(283)] = 6308,
  [SMALL_STATE(284)] = 6316,
  [SMALL_STATE(285)] = 6326,
  [SMALL_STATE(286)] = 6336,
  [SMALL_STATE(287)] = 6344,
  [SMALL_STATE(288)] = 6352,
  [SMALL_STATE(289)] = 6360,
  [SMALL_STATE(290)] = 6370,
  [SMALL_STATE(291)] = 6378,
  [SMALL_STATE(292)] = 6386,
  [SMALL_STATE(293)] = 6396,
  [SMALL_STATE(294)] = 6404,
  [SMALL_STATE(295)] = 6414,
  [SMALL_STATE(296)] = 6424,
  [SMALL_STATE(297)] = 6434,
  [SMALL_STATE(298)] = 6441,
  [SMALL_STATE(299)] = 6448,
  [SMALL_STATE(300)] = 6455,
  [SMALL_STATE(301)] = 6462,
  [SMALL_STATE(302)] = 6469,
  [SMALL_STATE(303)] = 6476,
  [SMALL_STATE(304)] = 6483,
  [SMALL_STATE(305)] = 6490,
  [SMALL_STATE(306)] = 6497,
  [SMALL_STATE(307)] = 6504,
  [SMALL_STATE(308)] = 6511,
  [SMALL_STATE(309)] = 6518,
  [SMALL_STATE(310)] = 6525,
  [SMALL_STATE(311)] = 6532,
  [SMALL_STATE(312)] = 6539,
  [SMALL_STATE(313)] = 6546,
  [SMALL_STATE(314)] = 6553,
  [SMALL_STATE(315)] = 6560,
  [SMALL_STATE(316)] = 6567,
  [SMALL_STATE(317)] = 6574,
  [SMALL_STATE(318)] = 6581,
  [SMALL_STATE(319)] = 6588,
  [SMALL_STATE(320)] = 6595,
  [SMALL_STATE(321)] = 6602,
  [SMALL_STATE(322)] = 6609,
  [SMALL_STATE(323)] = 6616,
  [SMALL_STATE(324)] = 6623,
  [SMALL_STATE(325)] = 6630,
  [SMALL_STATE(326)] = 6637,
  [SMALL_STATE(327)] = 6644,
  [SMALL_STATE(328)] = 6651,
  [SMALL_STATE(329)] = 6658,
  [SMALL_STATE(330)] = 6665,
  [SMALL_STATE(331)] = 6672,
  [SMALL_STATE(332)] = 6679,
  [SMALL_STATE(333)] = 6686,
  [SMALL_STATE(334)] = 6693,
  [SMALL_STATE(335)] = 6700,
  [SMALL_STATE(336)] = 6707,
  [SMALL_STATE(337)] = 6714,
  [SMALL_STATE(338)] = 6721,
  [SMALL_STATE(339)] = 6728,
  [SMALL_STATE(340)] = 6735,
  [SMALL_STATE(341)] = 6742,
  [SMALL_STATE(342)] = 6749,
  [SMALL_STATE(343)] = 6756,
  [SMALL_STATE(344)] = 6763,
  [SMALL_STATE(345)] = 6770,
  [SMALL_STATE(346)] = 6777,
  [SMALL_STATE(347)] = 6784,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field_label, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_field_label, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression1, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression1, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_parens, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_parens, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression2, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression2, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 22),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 22),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable_name, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable_name, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 3, .production_id = 21),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 3, .production_id = 21),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 5, .production_id = 45),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 5, .production_id = 45),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 46),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 46),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_access, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_access, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 3, .production_id = 20),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 3, .production_id = 20),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 53),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 53),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 4, .production_id = 30),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 4, .production_id = 30),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 4, .production_id = 33),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 4, .production_id = 33),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 34),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 34),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 5, .production_id = 41),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 5, .production_id = 41),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(217),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(289),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(293),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 5, .production_id = 42),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 51),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match, 5, .production_id = 43),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 50),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_if, 6, .production_id = 52),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 9, .production_id = 64),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 56),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 57),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 62),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 63),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type1, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor_proper_name, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call, 2, .production_id = 14),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 3, .production_id = 20),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 4, .production_id = 30),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 7, .production_id = 61),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 3, .production_id = 34),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(303),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 6, .production_id = 55),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 5, .production_id = 53),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_parens, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 4, .production_id = 46),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 5, .production_id = 41),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 5, .production_id = 48),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind_name, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 5, .production_id = 47),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 24),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 24),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_proper_name, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 7, .production_id = 60),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 7, .production_id = 36),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 7, .production_id = 36),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 4, .production_id = 35),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 6, .production_id = 54),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 40),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 40),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 39),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 39),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 7, .production_id = 37),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias_declaration, 7, .production_id = 37),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 1, .production_id = 10),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 1, .production_id = 10),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2), SHIFT_REPEAT(22),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2), SHIFT_REPEAT(110),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 8, .production_id = 49),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 8, .production_id = 49),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 28),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 28),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 6, .production_id = 26),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias_declaration, 6, .production_id = 26),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 5, .production_id = 23),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 5, .production_id = 23),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 29),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 29),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 5, .production_id = 41),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2), SHIFT_REPEAT(103),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 4, .production_id = 30),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2), SHIFT_REPEAT(117),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 3, .production_id = 20),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2), SHIFT_REPEAT(261),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(187),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 2),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2), SHIFT_REPEAT(253),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_name, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__everything, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_name, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_variable, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2), SHIFT_REPEAT(47),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter_name, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2), SHIFT_REPEAT(221),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_closed_record_repeat1, 2), SHIFT_REPEAT(229),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_closed_record_repeat1, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_name, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 4, .production_id = 30),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 5, .production_id = 38),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 3, .production_id = 20),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_alias, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 2, .production_id = 19),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 4, .production_id = 27),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variable, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field, 3, .production_id = 31),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 3, .production_id = 17),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field, 3, .production_id = 31),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match_arm, 4, .production_id = 58),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 5, .production_id = 41),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_value, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_constructors, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 2, .production_id = 32),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration_name, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record_row_variable, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field_label, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 5),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_return, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 3, .production_id = 44),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind, 5, .production_id = 59),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_everything, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [806] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_annotation, 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 4),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_package, 3),
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
