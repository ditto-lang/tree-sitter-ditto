#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 339
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 36
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 63

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
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_COLON = 17,
  anon_sym_foreign = 18,
  anon_sym_PIPE_GT = 19,
  anon_sym_fn = 20,
  anon_sym_if = 21,
  anon_sym_then = 22,
  anon_sym_else = 23,
  anon_sym_match = 24,
  anon_sym_with = 25,
  anon_sym_end = 26,
  anon_sym_do = 27,
  anon_sym_LT_DASH = 28,
  anon_sym_return = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  sym_expression_string = 32,
  sym_expression_int = 33,
  sym_expression_float = 34,
  sym_expression_true = 35,
  sym_expression_false = 36,
  sym_expression_unit = 37,
  sym__proper_name = 38,
  sym__package_name = 39,
  sym__name = 40,
  sym_comment = 41,
  sym_source_file = 42,
  sym_module_header = 43,
  sym_module_name = 44,
  sym_module_import = 45,
  sym_module_import_package = 46,
  sym_module_import_alias = 47,
  sym__exposing = 48,
  sym_exposing_everything = 49,
  sym_exposing_list = 50,
  sym__exposing_list_item = 51,
  sym_exposing_type = 52,
  sym_exposing_type_name = 53,
  sym_exposing_type_constructors = 54,
  sym__everything = 55,
  sym_exposing_value = 56,
  sym__module_declaration = 57,
  sym__type_declaration = 58,
  sym_empty_type_declaration = 59,
  sym_type_declaration = 60,
  sym_type_declaration_name = 61,
  sym_type_declaration_variables = 62,
  sym_type_declaration_variable = 63,
  sym_type_declaration_constructor = 64,
  sym_type_declaration_constructor_name = 65,
  sym_type_declaration_constructor_fields = 66,
  sym__type = 67,
  sym__type1 = 68,
  sym_type_function = 69,
  sym__type_parens = 70,
  sym_type_closed_record = 71,
  sym_type_open_record = 72,
  sym_type_open_record_row_variable = 73,
  sym_type_record_field = 74,
  sym_type_record_field_label = 75,
  sym_type_call = 76,
  sym_type_call_arguments = 77,
  sym_type_constructor = 78,
  sym_type_constructor_proper_name = 79,
  sym_type_variable = 80,
  sym_type_annotation = 81,
  sym_return_type_annotation = 82,
  sym_foreign_value_declaration = 83,
  sym_value_declaration = 84,
  sym_value_declaration_name = 85,
  sym__expression = 86,
  sym__expression2 = 87,
  sym__expression1 = 88,
  sym__expression0 = 89,
  sym_expression_right_pipe = 90,
  sym_expression_function = 91,
  sym_expression_function_parameter = 92,
  sym_expression_function_parameter_name = 93,
  sym_expression_if = 94,
  sym_expression_match = 95,
  sym_expression_effect = 96,
  sym__expression_effect_statement = 97,
  sym_expression_effect_bind = 98,
  sym_expression_effect_expression = 99,
  sym_expression_effect_bind_name = 100,
  sym_expression_effect_return = 101,
  sym_expression_match_arm = 102,
  sym__expression_parens = 103,
  sym_expression_call = 104,
  sym_expression_call_arguments = 105,
  sym_expression_array = 106,
  sym_expression_record = 107,
  sym_expression_record_field = 108,
  sym_expression_record_access = 109,
  sym_expression_record_field_label = 110,
  sym_expression_constructor = 111,
  sym_expression_constructor_proper_name = 112,
  sym_expression_variable = 113,
  sym_expression_variable_name = 114,
  sym__pattern = 115,
  sym_pattern_constructor = 116,
  sym_pattern_constructor_proper_name = 117,
  sym_pattern_constructor_fields = 118,
  sym_pattern_variable = 119,
  sym_qualifier = 120,
  aux_sym_source_file_repeat1 = 121,
  aux_sym_source_file_repeat2 = 122,
  aux_sym_module_name_repeat1 = 123,
  aux_sym_exposing_list_repeat1 = 124,
  aux_sym_type_declaration_repeat1 = 125,
  aux_sym_type_declaration_variables_repeat1 = 126,
  aux_sym_type_declaration_constructor_fields_repeat1 = 127,
  aux_sym_type_closed_record_repeat1 = 128,
  aux_sym_expression_function_repeat1 = 129,
  aux_sym_expression_match_repeat1 = 130,
  aux_sym_expression_call_arguments_repeat1 = 131,
  aux_sym_expression_record_repeat1 = 132,
  aux_sym_pattern_constructor_fields_repeat1 = 133,
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
  field_argument = 2,
  field_arguments = 3,
  field_arm = 4,
  field_bind_expression = 5,
  field_bind_name = 6,
  field_body = 7,
  field_condition = 8,
  field_constructor = 9,
  field_declaration = 10,
  field_element = 11,
  field_exports = 12,
  field_expression = 13,
  field_false_clause = 14,
  field_field = 15,
  field_fields = 16,
  field_function = 17,
  field_header = 18,
  field_import = 19,
  field_imports = 20,
  field_label = 21,
  field_lhs = 22,
  field_match_arm_expression = 23,
  field_match_arm_pattern = 24,
  field_module_name = 25,
  field_name = 26,
  field_package = 27,
  field_parameter = 28,
  field_rest = 29,
  field_return_type = 30,
  field_rhs = 31,
  field_true_clause = 32,
  field_type_annotation = 33,
  field_value = 34,
  field_variable = 35,
  field_variables = 36,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
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
  [27] = {.index = 53, .length = 3},
  [28] = {.index = 56, .length = 3},
  [29] = {.index = 59, .length = 2},
  [30] = {.index = 61, .length = 2},
  [31] = {.index = 63, .length = 2},
  [32] = {.index = 65, .length = 2},
  [33] = {.index = 67, .length = 1},
  [34] = {.index = 68, .length = 1},
  [35] = {.index = 69, .length = 5},
  [36] = {.index = 74, .length = 3},
  [37] = {.index = 77, .length = 4},
  [38] = {.index = 81, .length = 4},
  [39] = {.index = 85, .length = 3},
  [40] = {.index = 88, .length = 1},
  [41] = {.index = 89, .length = 2},
  [42] = {.index = 91, .length = 1},
  [43] = {.index = 92, .length = 3},
  [44] = {.index = 95, .length = 2},
  [45] = {.index = 97, .length = 2},
  [46] = {.index = 99, .length = 1},
  [47] = {.index = 100, .length = 5},
  [48] = {.index = 105, .length = 2},
  [49] = {.index = 107, .length = 2},
  [50] = {.index = 109, .length = 3},
  [51] = {.index = 112, .length = 3},
  [52] = {.index = 115, .length = 3},
  [53] = {.index = 118, .length = 2},
  [54] = {.index = 120, .length = 3},
  [55] = {.index = 123, .length = 3},
  [56] = {.index = 126, .length = 2},
  [57] = {.index = 128, .length = 3},
  [58] = {.index = 131, .length = 4},
  [59] = {.index = 135, .length = 3},
  [60] = {.index = 138, .length = 4},
  [61] = {.index = 142, .length = 4},
  [62] = {.index = 146, .length = 5},
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
    {field_variable, 1},
    {field_variable, 2},
  [53] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_name, 1},
  [56] =
    {field_constructor, 4},
    {field_name, 1},
    {field_variables, 2},
  [59] =
    {field_field, 1},
    {field_field, 2},
  [61] =
    {field_label, 0},
    {field_value, 2},
  [63] =
    {field_name, 0},
    {field_type_annotation, 1},
  [65] =
    {field_element, 1},
    {field_element, 2},
  [67] =
    {field_argument, 1},
  [68] =
    {field_return_type, 3},
  [69] =
    {field_alias, 3},
    {field_alias, 4},
    {field_imports, 5},
    {field_module_name, 2},
    {field_package, 1},
  [74] =
    {field_variable, 1},
    {field_variable, 2},
    {field_variable, 3},
  [77] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
  [81] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
    {field_variables, 2},
  [85] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [88] =
    {field_body, 4},
  [89] =
    {field_arm, 3},
    {field_expression, 1},
  [91] =
    {field_rest, 2},
  [92] =
    {field_element, 1},
    {field_element, 2},
    {field_element, 3},
  [95] =
    {field_argument, 1},
    {field_argument, 2},
  [97] =
    {field_parameter, 1},
    {field_return_type, 4},
  [99] =
    {field_field, 3},
  [100] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_constructor, 6},
    {field_name, 1},
    {field_variables, 2},
  [105] =
    {field_body, 5},
    {field_return_type, 3},
  [107] =
    {field_body, 5},
    {field_parameter, 2},
  [109] =
    {field_condition, 1},
    {field_false_clause, 5},
    {field_true_clause, 3},
  [112] =
    {field_argument, 1},
    {field_argument, 2},
    {field_argument, 3},
  [115] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_return_type, 5},
  [118] =
    {field_field, 3},
    {field_field, 4},
  [120] =
    {field_body, 6},
    {field_parameter, 2},
    {field_return_type, 4},
  [123] =
    {field_body, 6},
    {field_parameter, 2},
    {field_parameter, 3},
  [126] =
    {field_match_arm_expression, 3},
    {field_match_arm_pattern, 1},
  [128] =
    {field_bind_expression, 2},
    {field_bind_name, 0},
    {field_rest, 4},
  [131] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 6},
  [135] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
  [138] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 5},
  [142] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_parameter, 4},
  [146] =
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
      if (eof) ADVANCE(68);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '[') ADVANCE(107);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(0)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '[') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '}') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(1)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(118);
      if (sym__name_character_set_1(lookahead)) ADVANCE(156);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(107);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '{') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(2)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(118);
      if (sym__name_character_set_1(lookahead)) ADVANCE(156);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '{') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(3)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(118);
      if (sym__name_character_set_1(lookahead)) ADVANCE(156);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(87);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '}') ADVANCE(87);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(6)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(118);
      if (sym__name_character_set_1(lookahead)) ADVANCE(156);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(157);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(7);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(10)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 't') ADVANCE(155);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(66)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(156);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 't') ADVANCE(155);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(67)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(156);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_match);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_do);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_expression_string);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_expression_int);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_expression_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_expression_true);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_expression_true);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_expression_false);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_expression_false);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_expression_unit);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_expression_unit);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__proper_name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__package_name);
      if (sym__package_name_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(93);
      if (sym__name_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(134);
      if (sym__name_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(149);
      if (sym__name_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(131);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(113);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(115);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(82);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(152);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(132);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(95);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(138);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(99);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(130);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(150);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(148);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(143);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(133);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(106);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(90);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(103);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(146);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(147);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(126);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(141);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(153);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(137);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(128);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(151);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(125);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(123);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(117);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(75);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(154);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(124);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(145);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'y') ADVANCE(142);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
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
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 66},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 66},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 67},
  [76] = {.lex_state = 67},
  [77] = {.lex_state = 67},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
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
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 66},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 66},
  [130] = {.lex_state = 66},
  [131] = {.lex_state = 66},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 66},
  [134] = {.lex_state = 66},
  [135] = {.lex_state = 66},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 66},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 66},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 66},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 67},
  [152] = {.lex_state = 67},
  [153] = {.lex_state = 67},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 67},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 67},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 67},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 67},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 67},
  [176] = {.lex_state = 67},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 67},
  [179] = {.lex_state = 67},
  [180] = {.lex_state = 6},
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
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
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
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 6},
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
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 0},
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
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
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
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 6},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 6},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
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
  [307] = {.lex_state = 2},
  [308] = {.lex_state = 10},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
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
    [sym_source_file] = STATE(328),
    [sym_module_header] = STATE(47),
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    STATE(291), 1,
      sym_expression_effect_bind_name,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(324), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(275), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    STATE(291), 1,
      sym_expression_effect_bind_name,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(301), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(275), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    STATE(291), 1,
      sym_expression_effect_bind_name,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(323), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(275), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      sym__name,
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(219), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
      anon_sym_RBRACK,
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(218), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(210), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(218), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(218), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(218), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(309), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(82), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(87), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
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
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(310), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
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
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
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
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
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
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
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
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(322), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(218), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(86), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(298), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(302), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(83), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
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
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(266), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(272), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(300), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(55), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(81), 2,
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
    STATE(56), 7,
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
    STATE(58), 1,
      sym_expression_variable_name,
    STATE(78), 1,
      sym_expression_constructor_proper_name,
    STATE(168), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(56), 7,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(283), 7,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(283), 7,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(283), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2365] = 10,
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
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(283), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2403] = 10,
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
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(211), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2441] = 10,
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
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(283), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2479] = 10,
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
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(283), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2517] = 9,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(148), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2552] = 9,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(314), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2587] = 9,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(283), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2622] = 9,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
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
  [2657] = 9,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(267), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2692] = 9,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
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
  [2727] = 9,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(186), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2762] = 9,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(141), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2797] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_import,
    ACTIONS(71), 1,
      anon_sym_type,
    ACTIONS(73), 1,
      anon_sym_foreign,
    ACTIONS(75), 1,
      sym__name,
    STATE(217), 1,
      sym_value_declaration_name,
    STATE(50), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(77), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2832] = 9,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(145), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2867] = 9,
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
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(198), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2902] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_import,
    ACTIONS(71), 1,
      anon_sym_type,
    ACTIONS(73), 1,
      anon_sym_foreign,
    ACTIONS(75), 1,
      sym__name,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(217), 1,
      sym_value_declaration_name,
    STATE(105), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(75), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2937] = 3,
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
  [2959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(83), 12,
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
  [2980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_PIPE,
    ACTIONS(87), 12,
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
  [3001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    ACTIONS(91), 12,
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
  [3022] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_PIPE,
    STATE(74), 1,
      sym_expression_call_arguments,
    ACTIONS(95), 10,
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
  [3047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(101), 11,
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
  [3070] = 3,
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
  [3091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(111), 12,
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
  [3112] = 3,
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
  [3133] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_type_constructor_proper_name,
    STATE(269), 1,
      sym_qualifier,
    STATE(97), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(335), 5,
      sym__type1,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_PIPE,
    ACTIONS(121), 12,
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
  [3187] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_PIPE,
    STATE(74), 1,
      sym_expression_call_arguments,
    ACTIONS(125), 10,
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
  [3212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_PIPE,
    ACTIONS(129), 12,
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
  [3233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_PIPE,
    ACTIONS(133), 11,
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
  [3256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(139), 12,
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
  [3277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_PIPE,
    ACTIONS(143), 12,
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
  [3298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(147), 12,
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
  [3319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(151), 12,
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
  [3340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(155), 12,
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
  [3361] = 3,
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
  [3382] = 3,
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
  [3403] = 3,
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
  [3424] = 3,
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
  [3445] = 3,
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
  [3466] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_type,
    ACTIONS(73), 1,
      anon_sym_foreign,
    ACTIONS(75), 1,
      sym__name,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(217), 1,
      sym_value_declaration_name,
    STATE(76), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3494] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_type,
    ACTIONS(186), 1,
      anon_sym_foreign,
    ACTIONS(189), 1,
      sym__name,
    STATE(217), 1,
      sym_value_declaration_name,
    STATE(76), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3522] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_type,
    ACTIONS(73), 1,
      anon_sym_foreign,
    ACTIONS(75), 1,
      sym__name,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(217), 1,
      sym_value_declaration_name,
    STATE(76), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3550] = 3,
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
  [3570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_PIPE,
    ACTIONS(133), 11,
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
  [3590] = 3,
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
  [3610] = 4,
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
  [3631] = 2,
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
  [3647] = 2,
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
  [3663] = 2,
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
  [3679] = 2,
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
  [3695] = 2,
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
  [3711] = 2,
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
  [3727] = 2,
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
  [3743] = 2,
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
  [3759] = 2,
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
  [3775] = 2,
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
  [3791] = 2,
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
  [3807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DOT,
    ACTIONS(230), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3823] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(234), 1,
      sym__proper_name,
    ACTIONS(236), 1,
      sym__name,
    STATE(137), 1,
      sym_pattern_constructor_proper_name,
    STATE(268), 1,
      sym_qualifier,
    STATE(258), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3847] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__proper_name,
    ACTIONS(236), 1,
      sym__name,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym_pattern_constructor_proper_name,
    STATE(268), 1,
      sym_qualifier,
    STATE(205), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3871] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__proper_name,
    ACTIONS(236), 1,
      sym__name,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym_pattern_constructor_proper_name,
    STATE(268), 1,
      sym_qualifier,
    STATE(258), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_type_call_arguments,
    ACTIONS(242), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3926] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_DOT_DOT,
    ACTIONS(248), 1,
      sym__proper_name,
    ACTIONS(250), 1,
      sym__name,
    STATE(136), 1,
      sym_exposing_type_name,
    STATE(245), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [3947] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym__proper_name,
    ACTIONS(250), 1,
      sym__name,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      sym_exposing_type_name,
    STATE(255), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [3968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      anon_sym_as,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    STATE(338), 1,
      sym__everything,
    STATE(332), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym__proper_name,
    ACTIONS(250), 1,
      sym__name,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      sym_exposing_type_name,
    STATE(255), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 1,
      anon_sym_import,
    STATE(105), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    ACTIONS(271), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4055] = 2,
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
  [4068] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__proper_name,
    ACTIONS(236), 1,
      sym__name,
    STATE(137), 1,
      sym_pattern_constructor_proper_name,
    STATE(268), 1,
      sym_qualifier,
    STATE(325), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [4089] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(277), 1,
      anon_sym_as,
    STATE(338), 1,
      sym__everything,
    STATE(294), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4110] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__proper_name,
    ACTIONS(236), 1,
      sym__name,
    STATE(137), 1,
      sym_pattern_constructor_proper_name,
    STATE(268), 1,
      sym_qualifier,
    STATE(258), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [4131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym__proper_name,
    ACTIONS(250), 1,
      sym__name,
    STATE(136), 1,
      sym_exposing_type_name,
    STATE(255), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOT,
    STATE(112), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(281), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DASH_GT,
    ACTIONS(286), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(292), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LT_DASH,
    ACTIONS(139), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
  [4293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DOT,
    STATE(112), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(308), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4333] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    STATE(338), 1,
      sym__everything,
    STATE(315), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    STATE(338), 1,
      sym__everything,
    STATE(333), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4482] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(281), 1,
      sym__everything,
    STATE(282), 1,
      sym_exposing_type_constructors,
    ACTIONS(350), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(212), 1,
      sym_pattern_constructor_fields,
    ACTIONS(354), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DOT,
    ACTIONS(360), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    STATE(338), 1,
      sym__everything,
    STATE(336), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_LPAREN,
  [4590] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(370), 1,
      sym__name,
    STATE(221), 1,
      sym_type_record_field,
    STATE(293), 1,
      sym_type_record_field_label,
    STATE(299), 1,
      sym_type_open_record_row_variable,
  [4609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym_pattern_constructor_fields,
    ACTIONS(374), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4659] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      sym__proper_name,
    STATE(108), 1,
      sym_module_name,
    STATE(276), 1,
      sym_module_import_package,
  [4675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_PIPE,
    ACTIONS(388), 1,
      sym__proper_name,
    STATE(169), 1,
      sym_type_declaration_constructor_name,
    STATE(202), 1,
      sym_type_declaration_constructor,
  [4691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    ACTIONS(396), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(404), 1,
      sym__name,
    STATE(270), 1,
      sym_type_record_field,
    STATE(293), 1,
      sym_type_record_field_label,
  [4743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COLON,
    STATE(274), 1,
      sym_type_annotation,
    ACTIONS(406), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__name,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(270), 1,
      sym_type_record_field,
    STATE(293), 1,
      sym_type_record_field_label,
  [4773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__name,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(270), 1,
      sym_type_record_field,
    STATE(293), 1,
      sym_type_record_field_label,
  [4789] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 1,
      sym__name,
    STATE(155), 1,
      sym_expression_function_parameter_name,
    STATE(260), 1,
      sym_expression_function_parameter,
  [4805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym__name,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_expression_function_parameter_name,
    STATE(237), 1,
      sym_expression_function_parameter,
  [4821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_expression_call_arguments_repeat1,
    ACTIONS(420), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__proper_name,
    ACTIONS(435), 1,
      anon_sym_PIPE,
    STATE(169), 1,
      sym_type_declaration_constructor_name,
    STATE(243), 1,
      sym_type_declaration_constructor,
  [4885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    ACTIONS(439), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      sym__name,
    STATE(265), 1,
      sym_expression_record_field,
    STATE(292), 1,
      sym_expression_record_field_label,
  [4913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4923] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym__proper_name,
    ACTIONS(447), 1,
      sym__name,
    STATE(72), 1,
      sym_expression_variable_name,
    STATE(80), 1,
      sym_expression_constructor_proper_name,
  [4939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_type_declaration_constructor_fields,
    ACTIONS(449), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
    ACTIONS(455), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_PIPE,
    ACTIONS(459), 1,
      anon_sym_end,
    STATE(177), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [4979] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__name,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      sym_expression_record_field,
    STATE(292), 1,
      sym_expression_record_field_label,
  [4995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__name,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    STATE(270), 1,
      sym_type_record_field,
    STATE(293), 1,
      sym_type_record_field_label,
  [5011] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym__name,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_expression_function_parameter_name,
    STATE(260), 1,
      sym_expression_function_parameter,
  [5027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_PIPE,
    ACTIONS(478), 1,
      anon_sym_end,
    STATE(177), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [5065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
    ACTIONS(482), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    ACTIONS(486), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5089] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__name,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      sym_expression_record_field,
    STATE(292), 1,
      sym_expression_record_field_label,
  [5105] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SEMI,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_EQ,
    STATE(287), 1,
      sym_type_declaration_variables,
  [5121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    STATE(197), 1,
      aux_sym_type_declaration_repeat1,
  [5143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_type_closed_record_repeat1,
  [5156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [5191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_exposing_list_repeat1,
  [5213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [5226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      sym__name,
    STATE(263), 1,
      sym_type_declaration_variable,
  [5261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(539), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      aux_sym_type_declaration_repeat1,
  [5287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__proper_name,
    STATE(169), 1,
      sym_type_declaration_constructor_name,
    STATE(233), 1,
      sym_type_declaration_constructor,
  [5300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_SEMI,
    ACTIONS(543), 1,
      anon_sym_PIPE,
    STATE(197), 1,
      aux_sym_type_declaration_repeat1,
  [5313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    STATE(183), 1,
      aux_sym_type_declaration_repeat1,
  [5339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      aux_sym_type_declaration_repeat1,
  [5352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [5361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(554), 1,
      anon_sym_SEMI,
    STATE(238), 1,
      aux_sym_type_declaration_repeat1,
  [5374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      aux_sym_expression_record_repeat1,
  [5387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [5409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    STATE(249), 1,
      aux_sym_expression_record_repeat1,
  [5431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_DASH_GT,
    ACTIONS(575), 1,
      anon_sym_COLON,
    STATE(334), 1,
      sym_return_type_annotation,
  [5444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_expression_function_repeat1,
  [5457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__name,
    STATE(231), 1,
      sym_type_record_field,
    STATE(293), 1,
      sym_type_record_field_label,
  [5505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym__name,
    STATE(155), 1,
      sym_expression_function_parameter_name,
    STATE(260), 1,
      sym_expression_function_parameter,
  [5518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(589), 1,
      anon_sym_DASH_GT,
    STATE(318), 1,
      sym_return_type_annotation,
  [5544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_EQ,
    STATE(330), 1,
      sym_type_annotation,
  [5557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      aux_sym_type_closed_record_repeat1,
  [5605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_exposing_list_repeat1,
  [5640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__name,
    STATE(270), 1,
      sym_type_record_field,
    STATE(293), 1,
      sym_type_record_field_label,
  [5653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_type_closed_record_repeat1,
  [5666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [5675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym__name,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      sym_type_declaration_variable,
  [5688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      aux_sym_type_closed_record_repeat1,
  [5727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_PIPE,
    STATE(171), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [5738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(626), 1,
      anon_sym_SEMI,
    STATE(195), 1,
      aux_sym_type_declaration_repeat1,
  [5751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__proper_name,
    STATE(169), 1,
      sym_type_declaration_constructor_name,
    STATE(264), 1,
      sym_type_declaration_constructor,
  [5764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      aux_sym_type_closed_record_repeat1,
  [5777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_expression_function_repeat1,
  [5799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(626), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      aux_sym_type_declaration_repeat1,
  [5812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_expression_function_repeat1,
  [5838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
  [5847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(648), 1,
      anon_sym_DASH_GT,
    STATE(320), 1,
      sym_return_type_annotation,
  [5860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    STATE(200), 1,
      aux_sym_type_declaration_repeat1,
  [5873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__name,
    STATE(265), 1,
      sym_expression_record_field,
    STATE(292), 1,
      sym_expression_record_field_label,
  [5886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_exposing_list_repeat1,
  [5899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__proper_name,
    STATE(169), 1,
      sym_type_declaration_constructor_name,
    STATE(199), 1,
      sym_type_declaration_constructor,
  [5912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(656), 1,
      anon_sym_DASH_GT,
    STATE(296), 1,
      sym_return_type_annotation,
  [5925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_expression_record_repeat1,
  [5951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(664), 1,
      anon_sym_COLON,
  [5961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [5969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym__name,
    STATE(263), 1,
      sym_type_declaration_variable,
  [5979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [5987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__proper_name,
    STATE(128), 1,
      sym_module_import_alias,
  [6013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__proper_name,
    STATE(146), 1,
      sym_pattern_constructor_proper_name,
  [6111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__proper_name,
    STATE(104), 1,
      sym_type_constructor_proper_name,
  [6121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__proper_name,
    STATE(316), 1,
      sym_module_name,
  [6139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [6147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COLON,
    STATE(321), 1,
      sym_type_annotation,
  [6157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_SEMI,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
  [6175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__proper_name,
    STATE(102), 1,
      sym_module_name,
  [6185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      sym__proper_name,
      sym__name,
  [6209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_record_field_label,
  [6219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__proper_name,
    STATE(181), 1,
      sym_type_declaration_name,
  [6253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__name,
    STATE(273), 1,
      sym_value_declaration_name,
  [6263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__proper_name,
    STATE(125), 1,
      sym_module_import_alias,
  [6273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_SEMI,
    ACTIONS(714), 1,
      anon_sym_EQ,
  [6283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [6299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym__name,
    STATE(192), 1,
      sym_type_declaration_variable,
  [6309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_LT_DASH,
  [6316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_EQ,
  [6323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_COLON,
  [6330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_SEMI,
  [6337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__proper_name,
  [6344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_DASH_GT,
  [6351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
  [6358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_SEMI,
  [6365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_PIPE,
  [6372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_SEMI,
  [6379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
  [6386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
  [6393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      sym__proper_name,
  [6400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_DASH_GT,
  [6407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SEMI,
  [6414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_DASH_GT,
  [6421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_DOT_DOT,
  [6428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym__package_name,
  [6435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_else,
  [6442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_with,
  [6449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_then,
  [6456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_DASH_GT,
  [6463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_DASH_GT,
  [6470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
  [6477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_SEMI,
  [6484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_exports,
  [6491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
  [6498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_DASH_GT,
  [6505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_COLON,
  [6512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_DASH_GT,
  [6519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_SEMI,
  [6526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_SEMI,
  [6533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
  [6540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
  [6547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_DASH_GT,
  [6554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
  [6561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
  [6568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      ts_builtin_sym_end,
  [6575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
  [6582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_EQ,
  [6589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
  [6596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SEMI,
  [6603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_SEMI,
  [6610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_DASH_GT,
  [6617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_DASH_GT,
  [6624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SEMI,
  [6631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_SEMI,
  [6638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_SEMI,
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
  [SMALL_STATE(36)] = 2403,
  [SMALL_STATE(37)] = 2441,
  [SMALL_STATE(38)] = 2479,
  [SMALL_STATE(39)] = 2517,
  [SMALL_STATE(40)] = 2552,
  [SMALL_STATE(41)] = 2587,
  [SMALL_STATE(42)] = 2622,
  [SMALL_STATE(43)] = 2657,
  [SMALL_STATE(44)] = 2692,
  [SMALL_STATE(45)] = 2727,
  [SMALL_STATE(46)] = 2762,
  [SMALL_STATE(47)] = 2797,
  [SMALL_STATE(48)] = 2832,
  [SMALL_STATE(49)] = 2867,
  [SMALL_STATE(50)] = 2902,
  [SMALL_STATE(51)] = 2937,
  [SMALL_STATE(52)] = 2959,
  [SMALL_STATE(53)] = 2980,
  [SMALL_STATE(54)] = 3001,
  [SMALL_STATE(55)] = 3022,
  [SMALL_STATE(56)] = 3047,
  [SMALL_STATE(57)] = 3070,
  [SMALL_STATE(58)] = 3091,
  [SMALL_STATE(59)] = 3112,
  [SMALL_STATE(60)] = 3133,
  [SMALL_STATE(61)] = 3166,
  [SMALL_STATE(62)] = 3187,
  [SMALL_STATE(63)] = 3212,
  [SMALL_STATE(64)] = 3233,
  [SMALL_STATE(65)] = 3256,
  [SMALL_STATE(66)] = 3277,
  [SMALL_STATE(67)] = 3298,
  [SMALL_STATE(68)] = 3319,
  [SMALL_STATE(69)] = 3340,
  [SMALL_STATE(70)] = 3361,
  [SMALL_STATE(71)] = 3382,
  [SMALL_STATE(72)] = 3403,
  [SMALL_STATE(73)] = 3424,
  [SMALL_STATE(74)] = 3445,
  [SMALL_STATE(75)] = 3466,
  [SMALL_STATE(76)] = 3494,
  [SMALL_STATE(77)] = 3522,
  [SMALL_STATE(78)] = 3550,
  [SMALL_STATE(79)] = 3570,
  [SMALL_STATE(80)] = 3590,
  [SMALL_STATE(81)] = 3610,
  [SMALL_STATE(82)] = 3631,
  [SMALL_STATE(83)] = 3647,
  [SMALL_STATE(84)] = 3663,
  [SMALL_STATE(85)] = 3679,
  [SMALL_STATE(86)] = 3695,
  [SMALL_STATE(87)] = 3711,
  [SMALL_STATE(88)] = 3727,
  [SMALL_STATE(89)] = 3743,
  [SMALL_STATE(90)] = 3759,
  [SMALL_STATE(91)] = 3775,
  [SMALL_STATE(92)] = 3791,
  [SMALL_STATE(93)] = 3807,
  [SMALL_STATE(94)] = 3823,
  [SMALL_STATE(95)] = 3847,
  [SMALL_STATE(96)] = 3871,
  [SMALL_STATE(97)] = 3895,
  [SMALL_STATE(98)] = 3913,
  [SMALL_STATE(99)] = 3926,
  [SMALL_STATE(100)] = 3947,
  [SMALL_STATE(101)] = 3968,
  [SMALL_STATE(102)] = 3981,
  [SMALL_STATE(103)] = 4002,
  [SMALL_STATE(104)] = 4023,
  [SMALL_STATE(105)] = 4036,
  [SMALL_STATE(106)] = 4055,
  [SMALL_STATE(107)] = 4068,
  [SMALL_STATE(108)] = 4089,
  [SMALL_STATE(109)] = 4110,
  [SMALL_STATE(110)] = 4131,
  [SMALL_STATE(111)] = 4143,
  [SMALL_STATE(112)] = 4161,
  [SMALL_STATE(113)] = 4177,
  [SMALL_STATE(114)] = 4191,
  [SMALL_STATE(115)] = 4203,
  [SMALL_STATE(116)] = 4219,
  [SMALL_STATE(117)] = 4231,
  [SMALL_STATE(118)] = 4243,
  [SMALL_STATE(119)] = 4255,
  [SMALL_STATE(120)] = 4267,
  [SMALL_STATE(121)] = 4279,
  [SMALL_STATE(122)] = 4293,
  [SMALL_STATE(123)] = 4309,
  [SMALL_STATE(124)] = 4321,
  [SMALL_STATE(125)] = 4333,
  [SMALL_STATE(126)] = 4351,
  [SMALL_STATE(127)] = 4363,
  [SMALL_STATE(128)] = 4375,
  [SMALL_STATE(129)] = 4393,
  [SMALL_STATE(130)] = 4406,
  [SMALL_STATE(131)] = 4419,
  [SMALL_STATE(132)] = 4432,
  [SMALL_STATE(133)] = 4443,
  [SMALL_STATE(134)] = 4456,
  [SMALL_STATE(135)] = 4469,
  [SMALL_STATE(136)] = 4482,
  [SMALL_STATE(137)] = 4499,
  [SMALL_STATE(138)] = 4514,
  [SMALL_STATE(139)] = 4527,
  [SMALL_STATE(140)] = 4540,
  [SMALL_STATE(141)] = 4553,
  [SMALL_STATE(142)] = 4564,
  [SMALL_STATE(143)] = 4579,
  [SMALL_STATE(144)] = 4590,
  [SMALL_STATE(145)] = 4609,
  [SMALL_STATE(146)] = 4620,
  [SMALL_STATE(147)] = 4635,
  [SMALL_STATE(148)] = 4648,
  [SMALL_STATE(149)] = 4659,
  [SMALL_STATE(150)] = 4675,
  [SMALL_STATE(151)] = 4691,
  [SMALL_STATE(152)] = 4703,
  [SMALL_STATE(153)] = 4715,
  [SMALL_STATE(154)] = 4727,
  [SMALL_STATE(155)] = 4743,
  [SMALL_STATE(156)] = 4757,
  [SMALL_STATE(157)] = 4773,
  [SMALL_STATE(158)] = 4789,
  [SMALL_STATE(159)] = 4805,
  [SMALL_STATE(160)] = 4821,
  [SMALL_STATE(161)] = 4835,
  [SMALL_STATE(162)] = 4847,
  [SMALL_STATE(163)] = 4857,
  [SMALL_STATE(164)] = 4869,
  [SMALL_STATE(165)] = 4885,
  [SMALL_STATE(166)] = 4897,
  [SMALL_STATE(167)] = 4913,
  [SMALL_STATE(168)] = 4923,
  [SMALL_STATE(169)] = 4939,
  [SMALL_STATE(170)] = 4953,
  [SMALL_STATE(171)] = 4965,
  [SMALL_STATE(172)] = 4979,
  [SMALL_STATE(173)] = 4995,
  [SMALL_STATE(174)] = 5011,
  [SMALL_STATE(175)] = 5027,
  [SMALL_STATE(176)] = 5039,
  [SMALL_STATE(177)] = 5051,
  [SMALL_STATE(178)] = 5065,
  [SMALL_STATE(179)] = 5077,
  [SMALL_STATE(180)] = 5089,
  [SMALL_STATE(181)] = 5105,
  [SMALL_STATE(182)] = 5121,
  [SMALL_STATE(183)] = 5130,
  [SMALL_STATE(184)] = 5143,
  [SMALL_STATE(185)] = 5156,
  [SMALL_STATE(186)] = 5165,
  [SMALL_STATE(187)] = 5178,
  [SMALL_STATE(188)] = 5191,
  [SMALL_STATE(189)] = 5200,
  [SMALL_STATE(190)] = 5213,
  [SMALL_STATE(191)] = 5226,
  [SMALL_STATE(192)] = 5235,
  [SMALL_STATE(193)] = 5248,
  [SMALL_STATE(194)] = 5261,
  [SMALL_STATE(195)] = 5274,
  [SMALL_STATE(196)] = 5287,
  [SMALL_STATE(197)] = 5300,
  [SMALL_STATE(198)] = 5313,
  [SMALL_STATE(199)] = 5326,
  [SMALL_STATE(200)] = 5339,
  [SMALL_STATE(201)] = 5352,
  [SMALL_STATE(202)] = 5361,
  [SMALL_STATE(203)] = 5374,
  [SMALL_STATE(204)] = 5387,
  [SMALL_STATE(205)] = 5396,
  [SMALL_STATE(206)] = 5409,
  [SMALL_STATE(207)] = 5418,
  [SMALL_STATE(208)] = 5431,
  [SMALL_STATE(209)] = 5444,
  [SMALL_STATE(210)] = 5457,
  [SMALL_STATE(211)] = 5470,
  [SMALL_STATE(212)] = 5483,
  [SMALL_STATE(213)] = 5492,
  [SMALL_STATE(214)] = 5505,
  [SMALL_STATE(215)] = 5518,
  [SMALL_STATE(216)] = 5531,
  [SMALL_STATE(217)] = 5544,
  [SMALL_STATE(218)] = 5557,
  [SMALL_STATE(219)] = 5566,
  [SMALL_STATE(220)] = 5579,
  [SMALL_STATE(221)] = 5592,
  [SMALL_STATE(222)] = 5605,
  [SMALL_STATE(223)] = 5614,
  [SMALL_STATE(224)] = 5627,
  [SMALL_STATE(225)] = 5640,
  [SMALL_STATE(226)] = 5653,
  [SMALL_STATE(227)] = 5666,
  [SMALL_STATE(228)] = 5675,
  [SMALL_STATE(229)] = 5688,
  [SMALL_STATE(230)] = 5701,
  [SMALL_STATE(231)] = 5714,
  [SMALL_STATE(232)] = 5727,
  [SMALL_STATE(233)] = 5738,
  [SMALL_STATE(234)] = 5751,
  [SMALL_STATE(235)] = 5764,
  [SMALL_STATE(236)] = 5777,
  [SMALL_STATE(237)] = 5786,
  [SMALL_STATE(238)] = 5799,
  [SMALL_STATE(239)] = 5812,
  [SMALL_STATE(240)] = 5825,
  [SMALL_STATE(241)] = 5838,
  [SMALL_STATE(242)] = 5847,
  [SMALL_STATE(243)] = 5860,
  [SMALL_STATE(244)] = 5873,
  [SMALL_STATE(245)] = 5886,
  [SMALL_STATE(246)] = 5899,
  [SMALL_STATE(247)] = 5912,
  [SMALL_STATE(248)] = 5925,
  [SMALL_STATE(249)] = 5938,
  [SMALL_STATE(250)] = 5951,
  [SMALL_STATE(251)] = 5961,
  [SMALL_STATE(252)] = 5969,
  [SMALL_STATE(253)] = 5979,
  [SMALL_STATE(254)] = 5987,
  [SMALL_STATE(255)] = 5995,
  [SMALL_STATE(256)] = 6003,
  [SMALL_STATE(257)] = 6013,
  [SMALL_STATE(258)] = 6021,
  [SMALL_STATE(259)] = 6029,
  [SMALL_STATE(260)] = 6037,
  [SMALL_STATE(261)] = 6045,
  [SMALL_STATE(262)] = 6053,
  [SMALL_STATE(263)] = 6061,
  [SMALL_STATE(264)] = 6069,
  [SMALL_STATE(265)] = 6077,
  [SMALL_STATE(266)] = 6085,
  [SMALL_STATE(267)] = 6093,
  [SMALL_STATE(268)] = 6101,
  [SMALL_STATE(269)] = 6111,
  [SMALL_STATE(270)] = 6121,
  [SMALL_STATE(271)] = 6129,
  [SMALL_STATE(272)] = 6139,
  [SMALL_STATE(273)] = 6147,
  [SMALL_STATE(274)] = 6157,
  [SMALL_STATE(275)] = 6165,
  [SMALL_STATE(276)] = 6175,
  [SMALL_STATE(277)] = 6185,
  [SMALL_STATE(278)] = 6193,
  [SMALL_STATE(279)] = 6201,
  [SMALL_STATE(280)] = 6209,
  [SMALL_STATE(281)] = 6219,
  [SMALL_STATE(282)] = 6227,
  [SMALL_STATE(283)] = 6235,
  [SMALL_STATE(284)] = 6243,
  [SMALL_STATE(285)] = 6253,
  [SMALL_STATE(286)] = 6263,
  [SMALL_STATE(287)] = 6273,
  [SMALL_STATE(288)] = 6283,
  [SMALL_STATE(289)] = 6291,
  [SMALL_STATE(290)] = 6299,
  [SMALL_STATE(291)] = 6309,
  [SMALL_STATE(292)] = 6316,
  [SMALL_STATE(293)] = 6323,
  [SMALL_STATE(294)] = 6330,
  [SMALL_STATE(295)] = 6337,
  [SMALL_STATE(296)] = 6344,
  [SMALL_STATE(297)] = 6351,
  [SMALL_STATE(298)] = 6358,
  [SMALL_STATE(299)] = 6365,
  [SMALL_STATE(300)] = 6372,
  [SMALL_STATE(301)] = 6379,
  [SMALL_STATE(302)] = 6386,
  [SMALL_STATE(303)] = 6393,
  [SMALL_STATE(304)] = 6400,
  [SMALL_STATE(305)] = 6407,
  [SMALL_STATE(306)] = 6414,
  [SMALL_STATE(307)] = 6421,
  [SMALL_STATE(308)] = 6428,
  [SMALL_STATE(309)] = 6435,
  [SMALL_STATE(310)] = 6442,
  [SMALL_STATE(311)] = 6449,
  [SMALL_STATE(312)] = 6456,
  [SMALL_STATE(313)] = 6463,
  [SMALL_STATE(314)] = 6470,
  [SMALL_STATE(315)] = 6477,
  [SMALL_STATE(316)] = 6484,
  [SMALL_STATE(317)] = 6491,
  [SMALL_STATE(318)] = 6498,
  [SMALL_STATE(319)] = 6505,
  [SMALL_STATE(320)] = 6512,
  [SMALL_STATE(321)] = 6519,
  [SMALL_STATE(322)] = 6526,
  [SMALL_STATE(323)] = 6533,
  [SMALL_STATE(324)] = 6540,
  [SMALL_STATE(325)] = 6547,
  [SMALL_STATE(326)] = 6554,
  [SMALL_STATE(327)] = 6561,
  [SMALL_STATE(328)] = 6568,
  [SMALL_STATE(329)] = 6575,
  [SMALL_STATE(330)] = 6582,
  [SMALL_STATE(331)] = 6589,
  [SMALL_STATE(332)] = 6596,
  [SMALL_STATE(333)] = 6603,
  [SMALL_STATE(334)] = 6610,
  [SMALL_STATE(335)] = 6617,
  [SMALL_STATE(336)] = 6624,
  [SMALL_STATE(337)] = 6631,
  [SMALL_STATE(338)] = 6638,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field_label, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_field_label, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 44),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 44),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 4, .production_id = 32),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 4, .production_id = 32),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression2, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression2, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression1, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression1, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_access, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_access, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 22),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 22),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 3, .production_id = 21),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 3, .production_id = 21),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable_name, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable_name, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 51),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 51),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 4, .production_id = 29),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 4, .production_id = 29),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 33),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 33),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 3, .production_id = 20),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 3, .production_id = 20),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_parens, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_parens, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 5, .production_id = 39),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 5, .production_id = 39),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 5, .production_id = 43),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 5, .production_id = 43),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(284),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(285),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(289),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 5, .production_id = 40),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 49),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match, 5, .production_id = 41),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 48),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_if, 6, .production_id = 50),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 54),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 55),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 60),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 9, .production_id = 62),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 61),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor_proper_name, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type1, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 3, .production_id = 20),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(295),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_parens, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 3, .production_id = 33),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 4, .production_id = 29),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 6, .production_id = 53),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call, 2, .production_id = 14),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 7, .production_id = 59),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind_name, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 5, .production_id = 51),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 4, .production_id = 44),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 5, .production_id = 39),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 5, .production_id = 46),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 7, .production_id = 35),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 7, .production_id = 35),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 5, .production_id = 45),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_proper_name, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 24),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 24),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 7, .production_id = 58),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 4, .production_id = 34),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 6, .production_id = 52),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 38),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 38),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 37),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 37),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 1, .production_id = 10),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2), SHIFT_REPEAT(21),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 1, .production_id = 10),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 8, .production_id = 47),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 8, .production_id = 47),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 27),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 27),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2), SHIFT_REPEAT(107),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 5, .production_id = 23),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 5, .production_id = 23),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 28),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 28),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_name, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 5, .production_id = 39),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2), SHIFT_REPEAT(109),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 4, .production_id = 29),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2), SHIFT_REPEAT(111),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 3, .production_id = 20),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2), SHIFT_REPEAT(252),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(234),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_name, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2), SHIFT_REPEAT(244),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__everything, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_name, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2), SHIFT_REPEAT(41),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_closed_record_repeat1, 2), SHIFT_REPEAT(225),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_closed_record_repeat1, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_variable, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2), SHIFT_REPEAT(214),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter_name, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record_row_variable, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field_label, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 5, .production_id = 36),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_alias, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 3, .production_id = 20),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_value, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 4, .production_id = 26),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 2, .production_id = 19),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variable, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field, 3, .production_id = 30),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field, 3, .production_id = 30),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match_arm, 4, .production_id = 56),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 2, .production_id = 31),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 3, .production_id = 17),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 5, .production_id = 39),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_constructors, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 4, .production_id = 29),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration_name, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_return, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_package, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind, 5, .production_id = 57),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 3, .production_id = 42),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [788] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 5),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_annotation, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 4),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_everything, 1),
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
