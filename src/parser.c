#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 367
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 41
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 70

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
  anon_sym_let = 30,
  anon_sym_return = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  sym_expression_string = 34,
  sym_expression_int = 35,
  sym_expression_float = 36,
  sym_expression_true = 37,
  sym_expression_false = 38,
  sym_expression_unit = 39,
  sym__proper_name = 40,
  sym__package_name = 41,
  sym__name = 42,
  sym__unused_name = 43,
  sym_comment = 44,
  sym_source_file = 45,
  sym_module_header = 46,
  sym_module_name = 47,
  sym_module_import = 48,
  sym_module_import_package = 49,
  sym_module_import_alias = 50,
  sym__exposing = 51,
  sym_exposing_everything = 52,
  sym_exposing_list = 53,
  sym__exposing_list_item = 54,
  sym_exposing_type = 55,
  sym_exposing_type_name = 56,
  sym_exposing_type_constructors = 57,
  sym__everything = 58,
  sym_exposing_value = 59,
  sym__module_declaration = 60,
  sym__type_declaration = 61,
  sym_type_alias_declaration = 62,
  sym_empty_type_declaration = 63,
  sym_type_declaration = 64,
  sym_type_declaration_name = 65,
  sym_type_declaration_variables = 66,
  sym_type_declaration_variable = 67,
  sym_type_declaration_constructor = 68,
  sym_type_declaration_constructor_name = 69,
  sym_type_declaration_constructor_fields = 70,
  sym__type = 71,
  sym__type1 = 72,
  sym_type_function = 73,
  sym__type_parens = 74,
  sym_type_closed_record = 75,
  sym_type_open_record = 76,
  sym_type_open_record_row_variable = 77,
  sym_type_record_field = 78,
  sym_type_record_field_label = 79,
  sym_type_call = 80,
  sym_type_call_arguments = 81,
  sym_type_constructor = 82,
  sym_type_constructor_proper_name = 83,
  sym_type_variable = 84,
  sym_type_annotation = 85,
  sym_return_type_annotation = 86,
  sym_foreign_value_declaration = 87,
  sym_value_declaration = 88,
  sym_value_declaration_name = 89,
  sym__expression = 90,
  sym__expression2 = 91,
  sym__expression1 = 92,
  sym__expression0 = 93,
  sym_expression_right_pipe = 94,
  sym_expression_function = 95,
  sym_expression_function_parameter = 96,
  sym_expression_if = 97,
  sym_expression_match = 98,
  sym_expression_effect = 99,
  sym__expression_effect_statement = 100,
  sym_expression_effect_bind = 101,
  sym_expression_effect_let = 102,
  sym_expression_effect_let_binder = 103,
  sym_expression_effect_expression = 104,
  sym_expression_effect_bind_name = 105,
  sym_expression_effect_return = 106,
  sym_expression_match_arm = 107,
  sym__expression_parens = 108,
  sym_expression_call = 109,
  sym_expression_call_arguments = 110,
  sym_expression_array = 111,
  sym_expression_record = 112,
  sym_expression_record_update = 113,
  sym__expression_record_update_target = 114,
  sym_expression_record_field = 115,
  sym_expression_record_access = 116,
  sym_expression_record_field_label = 117,
  sym_expression_constructor = 118,
  sym_expression_constructor_proper_name = 119,
  sym_expression_variable = 120,
  sym_expression_variable_name = 121,
  sym__pattern = 122,
  sym_pattern_constructor = 123,
  sym_pattern_constructor_proper_name = 124,
  sym_pattern_constructor_fields = 125,
  sym_pattern_variable = 126,
  sym_pattern_unused = 127,
  sym_qualifier = 128,
  aux_sym_source_file_repeat1 = 129,
  aux_sym_source_file_repeat2 = 130,
  aux_sym_module_name_repeat1 = 131,
  aux_sym_exposing_list_repeat1 = 132,
  aux_sym_type_declaration_repeat1 = 133,
  aux_sym_type_declaration_variables_repeat1 = 134,
  aux_sym_type_declaration_constructor_fields_repeat1 = 135,
  aux_sym_type_closed_record_repeat1 = 136,
  aux_sym_expression_function_repeat1 = 137,
  aux_sym_expression_match_repeat1 = 138,
  aux_sym_expression_call_arguments_repeat1 = 139,
  aux_sym_expression_record_repeat1 = 140,
  aux_sym_pattern_constructor_fields_repeat1 = 141,
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
  [anon_sym_let] = "let",
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
  [sym__unused_name] = "_unused_name",
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
  [sym_expression_if] = "expression_if",
  [sym_expression_match] = "expression_match",
  [sym_expression_effect] = "expression_effect",
  [sym__expression_effect_statement] = "_expression_effect_statement",
  [sym_expression_effect_bind] = "expression_effect_bind",
  [sym_expression_effect_let] = "expression_effect_let",
  [sym_expression_effect_let_binder] = "expression_effect_let_binder",
  [sym_expression_effect_expression] = "expression_effect_expression",
  [sym_expression_effect_bind_name] = "expression_effect_bind_name",
  [sym_expression_effect_return] = "expression_effect_return",
  [sym_expression_match_arm] = "expression_match_arm",
  [sym__expression_parens] = "_expression_parens",
  [sym_expression_call] = "expression_call",
  [sym_expression_call_arguments] = "expression_call_arguments",
  [sym_expression_array] = "expression_array",
  [sym_expression_record] = "expression_record",
  [sym_expression_record_update] = "expression_record_update",
  [sym__expression_record_update_target] = "_expression_record_update_target",
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
  [sym_pattern_unused] = "pattern_unused",
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
  [anon_sym_let] = anon_sym_let,
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
  [sym__unused_name] = sym__unused_name,
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
  [sym_expression_if] = sym_expression_if,
  [sym_expression_match] = sym_expression_match,
  [sym_expression_effect] = sym_expression_effect,
  [sym__expression_effect_statement] = sym__expression_effect_statement,
  [sym_expression_effect_bind] = sym_expression_effect_bind,
  [sym_expression_effect_let] = sym_expression_effect_let,
  [sym_expression_effect_let_binder] = sym_expression_effect_let_binder,
  [sym_expression_effect_expression] = sym_expression_effect_expression,
  [sym_expression_effect_bind_name] = sym_expression_effect_bind_name,
  [sym_expression_effect_return] = sym_expression_effect_return,
  [sym_expression_match_arm] = sym_expression_match_arm,
  [sym__expression_parens] = sym__expression_parens,
  [sym_expression_call] = sym_expression_call,
  [sym_expression_call_arguments] = sym_expression_call_arguments,
  [sym_expression_array] = sym_expression_array,
  [sym_expression_record] = sym_expression_record,
  [sym_expression_record_update] = sym_expression_record_update,
  [sym__expression_record_update_target] = sym__expression_record_update_target,
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
  [sym_pattern_unused] = sym_pattern_unused,
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
  [anon_sym_let] = {
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
  [sym__unused_name] = {
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
  [sym_expression_effect_let] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect_let_binder] = {
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
  [sym_expression_record_update] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_record_update_target] = {
    .visible = false,
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
  [sym_pattern_unused] = {
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
  field_let_binder = 23,
  field_let_expression = 24,
  field_lhs = 25,
  field_match_arm_expression = 26,
  field_match_arm_pattern = 27,
  field_module_name = 28,
  field_name = 29,
  field_package = 30,
  field_parameter = 31,
  field_pattern = 32,
  field_rest = 33,
  field_return_type = 34,
  field_rhs = 35,
  field_target = 36,
  field_true_clause = 37,
  field_type_annotation = 38,
  field_value = 39,
  field_variable = 40,
  field_variables = 41,
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
  [field_let_binder] = "let_binder",
  [field_let_expression] = "let_expression",
  [field_lhs] = "lhs",
  [field_match_arm_expression] = "match_arm_expression",
  [field_match_arm_pattern] = "match_arm_pattern",
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_package] = "package",
  [field_parameter] = "parameter",
  [field_pattern] = "pattern",
  [field_rest] = "rest",
  [field_return_type] = "return_type",
  [field_rhs] = "rhs",
  [field_target] = "target",
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
  [22] = {.index = 38, .length = 1},
  [23] = {.index = 39, .length = 2},
  [24] = {.index = 41, .length = 3},
  [25] = {.index = 44, .length = 4},
  [26] = {.index = 48, .length = 4},
  [27] = {.index = 52, .length = 2},
  [28] = {.index = 54, .length = 2},
  [29] = {.index = 56, .length = 3},
  [30] = {.index = 59, .length = 3},
  [31] = {.index = 62, .length = 2},
  [32] = {.index = 64, .length = 2},
  [33] = {.index = 66, .length = 2},
  [34] = {.index = 68, .length = 2},
  [35] = {.index = 70, .length = 1},
  [36] = {.index = 71, .length = 1},
  [37] = {.index = 72, .length = 5},
  [38] = {.index = 77, .length = 3},
  [39] = {.index = 80, .length = 3},
  [40] = {.index = 83, .length = 4},
  [41] = {.index = 87, .length = 4},
  [42] = {.index = 91, .length = 2},
  [43] = {.index = 93, .length = 3},
  [44] = {.index = 96, .length = 1},
  [45] = {.index = 97, .length = 2},
  [46] = {.index = 99, .length = 1},
  [47] = {.index = 100, .length = 3},
  [48] = {.index = 103, .length = 2},
  [49] = {.index = 105, .length = 2},
  [50] = {.index = 107, .length = 1},
  [51] = {.index = 108, .length = 5},
  [52] = {.index = 113, .length = 3},
  [53] = {.index = 116, .length = 2},
  [54] = {.index = 118, .length = 2},
  [55] = {.index = 120, .length = 3},
  [56] = {.index = 123, .length = 3},
  [57] = {.index = 126, .length = 3},
  [58] = {.index = 129, .length = 2},
  [59] = {.index = 131, .length = 4},
  [60] = {.index = 135, .length = 3},
  [61] = {.index = 138, .length = 3},
  [62] = {.index = 141, .length = 2},
  [63] = {.index = 143, .length = 3},
  [64] = {.index = 146, .length = 4},
  [65] = {.index = 150, .length = 3},
  [66] = {.index = 153, .length = 4},
  [67] = {.index = 157, .length = 4},
  [68] = {.index = 161, .length = 3},
  [69] = {.index = 164, .length = 5},
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
    {field_pattern, 0},
  [38] =
    {field_element, 1},
  [39] =
    {field_lhs, 0},
    {field_rhs, 2},
  [41] =
    {field_expression, 3},
    {field_name, 0},
    {field_type_annotation, 1},
  [44] =
    {field_alias, 2},
    {field_alias, 3},
    {field_imports, 4},
    {field_module_name, 1},
  [48] =
    {field_alias, 3},
    {field_alias, 4},
    {field_module_name, 2},
    {field_package, 1},
  [52] =
    {field_aliased_type, 4},
    {field_name, 2},
  [54] =
    {field_variable, 1},
    {field_variable, 2},
  [56] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_name, 1},
  [59] =
    {field_constructor, 4},
    {field_name, 1},
    {field_variables, 2},
  [62] =
    {field_field, 1},
    {field_field, 2},
  [64] =
    {field_label, 0},
    {field_value, 2},
  [66] =
    {field_pattern, 0},
    {field_type_annotation, 1},
  [68] =
    {field_element, 1},
    {field_element, 2},
  [70] =
    {field_argument, 1},
  [71] =
    {field_return_type, 3},
  [72] =
    {field_alias, 3},
    {field_alias, 4},
    {field_imports, 5},
    {field_module_name, 2},
    {field_package, 1},
  [77] =
    {field_aliased_type, 5},
    {field_name, 2},
    {field_variables, 3},
  [80] =
    {field_variable, 1},
    {field_variable, 2},
    {field_variable, 3},
  [83] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
  [87] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
    {field_variables, 2},
  [91] =
    {field_field, 3},
    {field_target, 1},
  [93] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [96] =
    {field_body, 4},
  [97] =
    {field_arm, 3},
    {field_expression, 1},
  [99] =
    {field_rest, 2},
  [100] =
    {field_element, 1},
    {field_element, 2},
    {field_element, 3},
  [103] =
    {field_argument, 1},
    {field_argument, 2},
  [105] =
    {field_parameter, 1},
    {field_return_type, 4},
  [107] =
    {field_field, 3},
  [108] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_constructor, 6},
    {field_name, 1},
    {field_variables, 2},
  [113] =
    {field_field, 3},
    {field_field, 4},
    {field_target, 1},
  [116] =
    {field_body, 5},
    {field_return_type, 3},
  [118] =
    {field_body, 5},
    {field_parameter, 2},
  [120] =
    {field_condition, 1},
    {field_false_clause, 5},
    {field_true_clause, 3},
  [123] =
    {field_argument, 1},
    {field_argument, 2},
    {field_argument, 3},
  [126] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_return_type, 5},
  [129] =
    {field_field, 3},
    {field_field, 4},
  [131] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
    {field_target, 1},
  [135] =
    {field_body, 6},
    {field_parameter, 2},
    {field_return_type, 4},
  [138] =
    {field_body, 6},
    {field_parameter, 2},
    {field_parameter, 3},
  [141] =
    {field_match_arm_expression, 3},
    {field_match_arm_pattern, 1},
  [143] =
    {field_bind_expression, 2},
    {field_bind_name, 0},
    {field_rest, 4},
  [146] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 6},
  [150] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
  [153] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 5},
  [157] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_parameter, 4},
  [161] =
    {field_let_binder, 1},
    {field_let_expression, 3},
    {field_rest, 5},
  [164] =
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
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == '_') ADVANCE(167);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(0)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(1)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(126);
      if (sym__name_character_set_1(lookahead)) ADVANCE(166);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '{') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(2)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(126);
      if (sym__name_character_set_1(lookahead)) ADVANCE(166);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(3)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(126);
      if (sym__name_character_set_1(lookahead)) ADVANCE(166);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(93);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '_') ADVANCE(167);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(6)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(126);
      if (sym__name_character_set_1(lookahead)) ADVANCE(166);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(168);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(110);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(7);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(10)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(108);
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
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 't') ADVANCE(165);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(71)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(166);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 't') ADVANCE(165);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(72)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(166);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_match);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_do);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_expression_string);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_expression_int);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_expression_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_expression_true);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_expression_true);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_expression_false);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_expression_false);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_expression_unit);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_expression_unit);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__proper_name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__package_name);
      if (sym__package_name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(99);
      if (sym__name_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(143);
      if (sym__name_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(159);
      if (sym__name_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(140);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(158);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(121);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(123);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(87);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(141);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(162);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(101);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(147);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(105);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(139);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(160);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(157);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(152);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(142);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(114);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(96);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(109);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(155);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(156);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(135);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(150);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(163);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(146);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(136);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(161);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(134);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(112);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(131);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(125);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(80);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(164);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(133);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(154);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'y') ADVANCE(151);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__unused_name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
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
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 71},
  [36] = {.lex_state = 71},
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
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 72},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 72},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 72},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 71},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 71},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 71},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 71},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 71},
  [157] = {.lex_state = 71},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 71},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 71},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 71},
  [169] = {.lex_state = 71},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 72},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 72},
  [175] = {.lex_state = 72},
  [176] = {.lex_state = 72},
  [177] = {.lex_state = 72},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 72},
  [183] = {.lex_state = 72},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 72},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 72},
  [195] = {.lex_state = 72},
  [196] = {.lex_state = 72},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 72},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 72},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 6},
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
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 6},
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
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 6},
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
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 6},
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
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 10},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 2},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
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
    [anon_sym_let] = ACTIONS(1),
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
    [sym__unused_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(366),
    [sym_module_header] = STATE(35),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
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
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    STATE(333), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(295), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(357), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [91] = 23,
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
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    STATE(333), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(295), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(328), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [182] = 23,
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
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    STATE(333), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(295), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(365), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [273] = 23,
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
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    STATE(333), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(295), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(336), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [364] = 20,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(242), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [442] = 20,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(242), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [520] = 20,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(242), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [598] = 20,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
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
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [676] = 20,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
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
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [754] = 20,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(242), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [832] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
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
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [907] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(319), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [982] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(305), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1057] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(242), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1132] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(107), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1207] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(98), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1282] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(334), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1357] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
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
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1432] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(99), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1507] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(100), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1582] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(103), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1657] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(335), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1732] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(325), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1807] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(361), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1882] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(102), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [1957] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(96), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [2032] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(321), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [2107] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(348), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [2182] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(108), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [2257] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
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
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [2332] = 19,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(89), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(338), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [2407] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    STATE(256), 1,
      sym_expression_record_field,
    STATE(355), 1,
      sym__expression_record_update_target,
    STATE(360), 1,
      sym_expression_record_field_label,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(254), 2,
      sym__expression1,
      sym_expression_constructor,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [2471] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym__proper_name,
    ACTIONS(35), 1,
      sym__name,
    STATE(73), 1,
      sym_expression_variable_name,
    STATE(88), 1,
      sym_expression_constructor_proper_name,
    STATE(201), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(72), 2,
      sym__expression1,
      sym_expression_constructor,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(82), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
      sym_expression_variable,
  [2523] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_import,
    ACTIONS(55), 1,
      anon_sym_type,
    ACTIONS(57), 1,
      anon_sym_foreign,
    ACTIONS(59), 1,
      sym__name,
    STATE(267), 1,
      sym_value_declaration_name,
    STATE(36), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(83), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2559] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_import,
    ACTIONS(55), 1,
      anon_sym_type,
    ACTIONS(57), 1,
      anon_sym_foreign,
    ACTIONS(59), 1,
      sym__name,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(267), 1,
      sym_value_declaration_name,
    STATE(121), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(62), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2595] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(287), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2633] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(287), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2671] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(287), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2709] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(287), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2747] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(287), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2785] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(252), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2823] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(287), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2861] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(165), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2896] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(322), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2931] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(280), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2966] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(237), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3001] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(354), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3036] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(170), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3071] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(287), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3106] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(200), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3141] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(323), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3176] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(155), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3211] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(146), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3246] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(221), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    ACTIONS(85), 13,
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
  [3303] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__proper_name,
    ACTIONS(71), 1,
      sym__name,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_type_constructor_proper_name,
    STATE(301), 1,
      sym_qualifier,
    STATE(112), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(353), 5,
      sym__type1,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3336] = 3,
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
  [3357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(95), 12,
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
  [3378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(99), 12,
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
  [3399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(103), 12,
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
  [3420] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_type,
    ACTIONS(57), 1,
      anon_sym_foreign,
    ACTIONS(59), 1,
      sym__name,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(267), 1,
      sym_value_declaration_name,
    STATE(76), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(109), 12,
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
  [3470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(113), 12,
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
    ACTIONS(119), 1,
      anon_sym_PIPE,
    ACTIONS(117), 12,
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
  [3533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_PIPE,
    ACTIONS(125), 12,
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
  [3575] = 4,
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
  [3598] = 3,
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
  [3619] = 3,
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
  [3640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    STATE(75), 1,
      sym_expression_call_arguments,
    ACTIONS(147), 10,
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
  [3665] = 3,
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
  [3686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(157), 12,
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
  [3707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    ACTIONS(161), 12,
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
  [3728] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      anon_sym_type,
    ACTIONS(170), 1,
      anon_sym_foreign,
    ACTIONS(173), 1,
      sym__name,
    STATE(267), 1,
      sym_value_declaration_name,
    STATE(76), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(176), 12,
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
  [3778] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    STATE(75), 1,
      sym_expression_call_arguments,
    ACTIONS(180), 10,
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
  [3803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(184), 12,
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
  [3824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(188), 12,
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
  [3845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_PIPE,
    ACTIONS(192), 12,
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
  [3866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(200), 1,
      anon_sym_PIPE,
    ACTIONS(196), 11,
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
  [3889] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_type,
    ACTIONS(57), 1,
      anon_sym_foreign,
    ACTIONS(59), 1,
      sym__name,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(267), 1,
      sym_value_declaration_name,
    STATE(76), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_PIPE,
    ACTIONS(204), 12,
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
  [3939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_PIPE,
    ACTIONS(208), 12,
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
  [3960] = 3,
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
  [3980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_PIPE,
    ACTIONS(212), 11,
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
  [4000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(216), 11,
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
  [4020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_PIPE,
    ACTIONS(224), 1,
      anon_sym_PIPE_GT,
    ACTIONS(220), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [4041] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    ACTIONS(228), 1,
      sym__proper_name,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      sym__unused_name,
    STATE(115), 1,
      sym_pattern_constructor_proper_name,
    STATE(223), 1,
      sym_expression_function_parameter,
    STATE(292), 1,
      sym_qualifier,
    STATE(193), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4072] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__proper_name,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      sym__unused_name,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_pattern_constructor_proper_name,
    STATE(288), 1,
      sym_expression_function_parameter,
    STATE(292), 1,
      sym_qualifier,
    STATE(193), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4103] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__proper_name,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      sym__unused_name,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_pattern_constructor_proper_name,
    STATE(288), 1,
      sym_expression_function_parameter,
    STATE(292), 1,
      sym_qualifier,
    STATE(193), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 10,
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
  [4150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 10,
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
  [4166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 10,
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
  [4182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 10,
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
  [4198] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__proper_name,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      sym__unused_name,
    STATE(115), 1,
      sym_pattern_constructor_proper_name,
    STATE(292), 1,
      sym_qualifier,
    STATE(320), 1,
      sym_expression_effect_let_binder,
    STATE(211), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 10,
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
  [4242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 10,
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
  [4258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 10,
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
  [4274] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__proper_name,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      sym__unused_name,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_pattern_constructor_proper_name,
    STATE(292), 1,
      sym_qualifier,
    STATE(283), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 10,
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
  [4318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 10,
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
  [4334] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__proper_name,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      sym__unused_name,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_pattern_constructor_proper_name,
    STATE(292), 1,
      sym_qualifier,
    STATE(245), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4362] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__proper_name,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      sym__unused_name,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_pattern_constructor_proper_name,
    STATE(292), 1,
      sym_qualifier,
    STATE(283), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4390] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__proper_name,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      sym__unused_name,
    STATE(115), 1,
      sym_pattern_constructor_proper_name,
    STATE(288), 1,
      sym_expression_function_parameter,
    STATE(292), 1,
      sym_qualifier,
    STATE(193), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 10,
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
  [4434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 10,
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
  [4450] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__proper_name,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      sym__unused_name,
    STATE(115), 1,
      sym_pattern_constructor_proper_name,
    STATE(292), 1,
      sym_qualifier,
    STATE(283), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4475] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__proper_name,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      sym__unused_name,
    STATE(115), 1,
      sym_pattern_constructor_proper_name,
    STATE(292), 1,
      sym_qualifier,
    STATE(339), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DOT,
    ACTIONS(266), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_type_call_arguments,
    ACTIONS(268), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4534] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    ACTIONS(274), 1,
      sym__proper_name,
    ACTIONS(276), 1,
      sym__name,
    STATE(149), 1,
      sym_exposing_type_name,
    STATE(299), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4555] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__proper_name,
    ACTIONS(276), 1,
      sym__name,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_exposing_type_name,
    STATE(299), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_pattern_constructor_fields,
    ACTIONS(282), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [4593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DOT,
    ACTIONS(284), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [4608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_pattern_constructor_fields,
    ACTIONS(286), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [4625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4638] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      anon_sym_as,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(342), 1,
      sym__everything,
    STATE(312), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4672] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      anon_sym_import,
    STATE(121), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    ACTIONS(303), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4691] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__proper_name,
    ACTIONS(276), 1,
      sym__name,
    ACTIONS(305), 1,
      anon_sym_DOT_DOT,
    STATE(149), 1,
      sym_exposing_type_name,
    STATE(226), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4738] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      anon_sym_as,
    STATE(342), 1,
      sym__everything,
    STATE(314), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DOT,
    STATE(135), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(317), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LT_DASH,
    ACTIONS(125), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
  [4813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    STATE(342), 1,
      sym__everything,
    STATE(359), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DOT,
    STATE(143), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(333), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    STATE(342), 1,
      sym__everything,
    STATE(324), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [4949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DASH_GT,
    ACTIONS(341), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4963] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__proper_name,
    ACTIONS(276), 1,
      sym__name,
    STATE(149), 1,
      sym_exposing_type_name,
    STATE(299), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    STATE(143), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(347), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [5009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [5044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5068] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    STATE(272), 1,
      sym_exposing_type_constructors,
    STATE(274), 1,
      sym__everything,
    ACTIONS(364), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 5,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_LPAREN,
  [5096] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(368), 1,
      sym__name,
    STATE(246), 1,
      sym_type_record_field,
    STATE(341), 1,
      sym_type_record_field_label,
    STATE(343), 1,
      sym_type_open_record_row_variable,
  [5115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(342), 1,
      sym__everything,
    STATE(344), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [5143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(376), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [5167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(386), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    ACTIONS(394), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [5285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    ACTIONS(418), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [5344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    ACTIONS(424), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_expression_call_arguments_repeat1,
    ACTIONS(426), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5370] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      sym__proper_name,
    STATE(119), 1,
      sym_module_name,
    STATE(282), 1,
      sym_module_import_package,
  [5386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(441), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SEMI,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(455), 1,
      anon_sym_EQ,
    STATE(298), 1,
      sym_type_declaration_variables,
  [5450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    ACTIONS(459), 1,
      sym__name,
    STATE(306), 1,
      sym_expression_record_field,
    STATE(360), 1,
      sym_expression_record_field_label,
  [5466] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    ACTIONS(463), 1,
      sym__name,
    STATE(281), 1,
      sym_type_record_field,
    STATE(341), 1,
      sym_type_record_field_label,
  [5482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_EQ,
    ACTIONS(125), 3,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [5494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(467), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_PIPE,
    ACTIONS(475), 1,
      sym__proper_name,
    STATE(186), 1,
      sym_type_declaration_constructor_name,
    STATE(225), 1,
      sym_type_declaration_constructor,
  [5534] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym__name,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_type_record_field,
    STATE(341), 1,
      sym_type_record_field_label,
  [5550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    STATE(286), 1,
      sym_type_declaration_constructor_fields,
    ACTIONS(479), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_PIPE,
    ACTIONS(486), 1,
      anon_sym_end,
    STATE(187), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [5578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_PIPE,
    ACTIONS(490), 1,
      anon_sym_end,
    STATE(187), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [5592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__name,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_expression_record_field,
    STATE(360), 1,
      sym_expression_record_field_label,
  [5608] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym__name,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_type_record_field,
    STATE(341), 1,
      sym_type_record_field_label,
  [5624] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__name,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_expression_record_field,
    STATE(360), 1,
      sym_expression_record_field_label,
  [5640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
    ACTIONS(500), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COLON,
    STATE(310), 1,
      sym_type_annotation,
    ACTIONS(502), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
    ACTIONS(508), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
    ACTIONS(512), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
    ACTIONS(516), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym__proper_name,
    ACTIONS(518), 1,
      anon_sym_PIPE,
    STATE(186), 1,
      sym_type_declaration_constructor_name,
    STATE(239), 1,
      sym_type_declaration_constructor,
  [5718] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__name,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_expression_record_field,
    STATE(360), 1,
      sym_expression_record_field_label,
  [5734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    ACTIONS(524), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [5756] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym__proper_name,
    ACTIONS(530), 1,
      sym__name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(87), 1,
      sym_expression_constructor_proper_name,
  [5772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    ACTIONS(534), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym__name,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_type_record_field,
    STATE(341), 1,
      sym_type_record_field_label,
  [5800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [5809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym__name,
    STATE(255), 1,
      sym_type_record_field,
    STATE(341), 1,
      sym_type_record_field_label,
  [5835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_DASH_GT,
    ACTIONS(544), 1,
      anon_sym_COLON,
    STATE(350), 1,
      sym_return_type_annotation,
  [5848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_exposing_list_repeat1,
  [5874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_EQ,
    STATE(331), 1,
      sym_type_annotation,
  [5900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    STATE(265), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [5913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_PIPE,
    STATE(188), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [5924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(565), 1,
      sym__name,
    STATE(302), 1,
      sym_type_declaration_variable,
  [5946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_type_closed_record_repeat1,
  [5972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_SEMI,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    STATE(220), 1,
      aux_sym_type_declaration_repeat1,
  [5985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym__name,
    STATE(281), 1,
      sym_type_record_field,
    STATE(341), 1,
      sym_type_record_field_label,
  [5998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_SEMI,
    ACTIONS(580), 1,
      anon_sym_PIPE,
    STATE(220), 1,
      aux_sym_type_declaration_repeat1,
  [6011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    ACTIONS(587), 1,
      anon_sym_SEMI,
    STATE(264), 1,
      aux_sym_type_declaration_repeat1,
  [6037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_expression_function_repeat1,
  [6050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    ACTIONS(587), 1,
      anon_sym_SEMI,
    STATE(220), 1,
      aux_sym_type_declaration_repeat1,
  [6063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    STATE(224), 1,
      aux_sym_type_declaration_repeat1,
  [6076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_exposing_list_repeat1,
  [6089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COLON,
    ACTIONS(599), 1,
      anon_sym_DASH_GT,
    STATE(317), 1,
      sym_return_type_annotation,
  [6102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      aux_sym_expression_record_repeat1,
  [6115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_type_closed_record_repeat1,
  [6128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_expression_record_repeat1,
  [6141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COLON,
    ACTIONS(610), 1,
      anon_sym_DASH_GT,
    STATE(349), 1,
      sym_return_type_annotation,
  [6154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym_expression_function_repeat1,
  [6167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_type_declaration_variables_repeat1,
  [6180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym__proper_name,
    STATE(186), 1,
      sym_type_declaration_constructor_name,
    STATE(251), 1,
      sym_type_declaration_constructor,
  [6193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__name,
    STATE(238), 1,
      sym_expression_record_field,
    STATE(360), 1,
      sym_expression_record_field_label,
  [6206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(618), 1,
      anon_sym_EQ,
    STATE(313), 1,
      sym_type_declaration_variables,
  [6219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      aux_sym_expression_record_repeat1,
  [6245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    ACTIONS(628), 1,
      anon_sym_SEMI,
    STATE(243), 1,
      aux_sym_type_declaration_repeat1,
  [6258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym__proper_name,
    STATE(186), 1,
      sym_type_declaration_constructor_name,
    STATE(222), 1,
      sym_type_declaration_constructor,
  [6271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    ACTIONS(632), 1,
      anon_sym_SEMI,
    STATE(220), 1,
      aux_sym_type_declaration_repeat1,
  [6302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [6328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      aux_sym_type_closed_record_repeat1,
  [6341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_expression_call_arguments_repeat1,
  [6354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym__proper_name,
    STATE(186), 1,
      sym_type_declaration_constructor_name,
    STATE(271), 1,
      sym_type_declaration_constructor,
  [6367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym_expression_function_repeat1,
  [6380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COLON,
    ACTIONS(651), 1,
      anon_sym_DASH_GT,
    STATE(327), 1,
      sym_return_type_annotation,
  [6393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    ACTIONS(632), 1,
      anon_sym_SEMI,
    STATE(218), 1,
      aux_sym_type_declaration_repeat1,
  [6406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    STATE(75), 1,
      sym_expression_call_arguments,
  [6445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      aux_sym_type_closed_record_repeat1,
  [6458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      aux_sym_expression_record_repeat1,
  [6471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__name,
    STATE(306), 1,
      sym_expression_record_field,
    STATE(360), 1,
      sym_expression_record_field_label,
  [6484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_type_declaration_variables_repeat1,
  [6497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      aux_sym_type_closed_record_repeat1,
  [6510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_expression_record_repeat1,
  [6523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__name,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      sym_type_declaration_variable,
  [6536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [6545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    STATE(220), 1,
      aux_sym_type_declaration_repeat1,
  [6571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    STATE(265), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [6584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_RBRACK,
    STATE(205), 1,
      aux_sym_expression_call_arguments_repeat1,
  [6597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(698), 1,
      anon_sym_EQ,
    STATE(346), 1,
      sym_type_annotation,
  [6610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    ACTIONS(700), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_exposing_list_repeat1,
  [6623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_alias,
    ACTIONS(704), 1,
      sym__proper_name,
    STATE(178), 1,
      sym_type_declaration_name,
  [6636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__name,
    STATE(302), 1,
      sym_type_declaration_variable,
  [6670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      sym__proper_name,
      sym__name,
  [6686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym__name,
    STATE(289), 1,
      sym_value_declaration_name,
  [6696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [6704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__name,
    STATE(71), 1,
      sym_expression_record_field_label,
  [6714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [6722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym__proper_name,
    STATE(125), 1,
      sym_module_name,
  [6748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__proper_name,
    STATE(236), 1,
      sym_type_declaration_name,
  [6766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COLON,
    STATE(330), 1,
      sym_type_annotation,
  [6808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_PIPE,
    ACTIONS(730), 1,
      anon_sym_COLON,
  [6826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym__proper_name,
    STATE(117), 1,
      sym_pattern_constructor_proper_name,
  [6836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym__proper_name,
    STATE(132), 1,
      sym_module_import_alias,
  [6846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_SEMI,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
  [6864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym__proper_name,
    STATE(364), 1,
      sym_module_name,
  [6874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__name,
    STATE(233), 1,
      sym_type_declaration_variable,
  [6884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_SEMI,
    ACTIONS(744), 1,
      anon_sym_EQ,
  [6894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
  [6920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym__proper_name,
    STATE(138), 1,
      sym_module_import_alias,
  [6970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [6986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SEMI,
  [7001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_SEMI,
  [7008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_EQ,
  [7015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_SEMI,
  [7022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_DASH_GT,
  [7029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym__proper_name,
  [7036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DASH_GT,
  [7043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [7050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_with,
  [7057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_EQ,
  [7064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_SEMI,
  [7071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
  [7078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_SEMI,
  [7085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_SEMI,
  [7092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
  [7099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_LBRACE,
  [7106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_DASH_GT,
  [7113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
  [7120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
  [7127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_SEMI,
  [7134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_EQ,
  [7141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SEMI,
  [7148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_LT_DASH,
  [7155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_RBRACE,
  [7162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_SEMI,
  [7169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
  [7176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SEMI,
  [7183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_else,
  [7190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_DASH_GT,
  [7197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
  [7204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_COLON,
  [7211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_SEMI,
  [7218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_PIPE,
  [7225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_SEMI,
  [7232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DASH_GT,
  [7239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_EQ,
  [7246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_DASH_GT,
  [7253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
  [7260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_DASH_GT,
  [7267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_DASH_GT,
  [7274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COLON,
  [7281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_DASH_GT,
  [7288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DASH_GT,
  [7295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_SEMI,
  [7302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_PIPE,
  [7309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym__package_name,
  [7316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
  [7323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym__proper_name,
  [7330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_SEMI,
  [7337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_EQ,
  [7344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_then,
  [7351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_SEMI,
  [7358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOT_DOT,
  [7365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_exports,
  [7372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
  [7379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 364,
  [SMALL_STATE(7)] = 442,
  [SMALL_STATE(8)] = 520,
  [SMALL_STATE(9)] = 598,
  [SMALL_STATE(10)] = 676,
  [SMALL_STATE(11)] = 754,
  [SMALL_STATE(12)] = 832,
  [SMALL_STATE(13)] = 907,
  [SMALL_STATE(14)] = 982,
  [SMALL_STATE(15)] = 1057,
  [SMALL_STATE(16)] = 1132,
  [SMALL_STATE(17)] = 1207,
  [SMALL_STATE(18)] = 1282,
  [SMALL_STATE(19)] = 1357,
  [SMALL_STATE(20)] = 1432,
  [SMALL_STATE(21)] = 1507,
  [SMALL_STATE(22)] = 1582,
  [SMALL_STATE(23)] = 1657,
  [SMALL_STATE(24)] = 1732,
  [SMALL_STATE(25)] = 1807,
  [SMALL_STATE(26)] = 1882,
  [SMALL_STATE(27)] = 1957,
  [SMALL_STATE(28)] = 2032,
  [SMALL_STATE(29)] = 2107,
  [SMALL_STATE(30)] = 2182,
  [SMALL_STATE(31)] = 2257,
  [SMALL_STATE(32)] = 2332,
  [SMALL_STATE(33)] = 2407,
  [SMALL_STATE(34)] = 2471,
  [SMALL_STATE(35)] = 2523,
  [SMALL_STATE(36)] = 2559,
  [SMALL_STATE(37)] = 2595,
  [SMALL_STATE(38)] = 2633,
  [SMALL_STATE(39)] = 2671,
  [SMALL_STATE(40)] = 2709,
  [SMALL_STATE(41)] = 2747,
  [SMALL_STATE(42)] = 2785,
  [SMALL_STATE(43)] = 2823,
  [SMALL_STATE(44)] = 2861,
  [SMALL_STATE(45)] = 2896,
  [SMALL_STATE(46)] = 2931,
  [SMALL_STATE(47)] = 2966,
  [SMALL_STATE(48)] = 3001,
  [SMALL_STATE(49)] = 3036,
  [SMALL_STATE(50)] = 3071,
  [SMALL_STATE(51)] = 3106,
  [SMALL_STATE(52)] = 3141,
  [SMALL_STATE(53)] = 3176,
  [SMALL_STATE(54)] = 3211,
  [SMALL_STATE(55)] = 3246,
  [SMALL_STATE(56)] = 3281,
  [SMALL_STATE(57)] = 3303,
  [SMALL_STATE(58)] = 3336,
  [SMALL_STATE(59)] = 3357,
  [SMALL_STATE(60)] = 3378,
  [SMALL_STATE(61)] = 3399,
  [SMALL_STATE(62)] = 3420,
  [SMALL_STATE(63)] = 3449,
  [SMALL_STATE(64)] = 3470,
  [SMALL_STATE(65)] = 3491,
  [SMALL_STATE(66)] = 3512,
  [SMALL_STATE(67)] = 3533,
  [SMALL_STATE(68)] = 3554,
  [SMALL_STATE(69)] = 3575,
  [SMALL_STATE(70)] = 3598,
  [SMALL_STATE(71)] = 3619,
  [SMALL_STATE(72)] = 3640,
  [SMALL_STATE(73)] = 3665,
  [SMALL_STATE(74)] = 3686,
  [SMALL_STATE(75)] = 3707,
  [SMALL_STATE(76)] = 3728,
  [SMALL_STATE(77)] = 3757,
  [SMALL_STATE(78)] = 3778,
  [SMALL_STATE(79)] = 3803,
  [SMALL_STATE(80)] = 3824,
  [SMALL_STATE(81)] = 3845,
  [SMALL_STATE(82)] = 3866,
  [SMALL_STATE(83)] = 3889,
  [SMALL_STATE(84)] = 3918,
  [SMALL_STATE(85)] = 3939,
  [SMALL_STATE(86)] = 3960,
  [SMALL_STATE(87)] = 3980,
  [SMALL_STATE(88)] = 4000,
  [SMALL_STATE(89)] = 4020,
  [SMALL_STATE(90)] = 4041,
  [SMALL_STATE(91)] = 4072,
  [SMALL_STATE(92)] = 4103,
  [SMALL_STATE(93)] = 4134,
  [SMALL_STATE(94)] = 4150,
  [SMALL_STATE(95)] = 4166,
  [SMALL_STATE(96)] = 4182,
  [SMALL_STATE(97)] = 4198,
  [SMALL_STATE(98)] = 4226,
  [SMALL_STATE(99)] = 4242,
  [SMALL_STATE(100)] = 4258,
  [SMALL_STATE(101)] = 4274,
  [SMALL_STATE(102)] = 4302,
  [SMALL_STATE(103)] = 4318,
  [SMALL_STATE(104)] = 4334,
  [SMALL_STATE(105)] = 4362,
  [SMALL_STATE(106)] = 4390,
  [SMALL_STATE(107)] = 4418,
  [SMALL_STATE(108)] = 4434,
  [SMALL_STATE(109)] = 4450,
  [SMALL_STATE(110)] = 4475,
  [SMALL_STATE(111)] = 4500,
  [SMALL_STATE(112)] = 4516,
  [SMALL_STATE(113)] = 4534,
  [SMALL_STATE(114)] = 4555,
  [SMALL_STATE(115)] = 4576,
  [SMALL_STATE(116)] = 4593,
  [SMALL_STATE(117)] = 4608,
  [SMALL_STATE(118)] = 4625,
  [SMALL_STATE(119)] = 4638,
  [SMALL_STATE(120)] = 4659,
  [SMALL_STATE(121)] = 4672,
  [SMALL_STATE(122)] = 4691,
  [SMALL_STATE(123)] = 4712,
  [SMALL_STATE(124)] = 4725,
  [SMALL_STATE(125)] = 4738,
  [SMALL_STATE(126)] = 4759,
  [SMALL_STATE(127)] = 4771,
  [SMALL_STATE(128)] = 4783,
  [SMALL_STATE(129)] = 4799,
  [SMALL_STATE(130)] = 4813,
  [SMALL_STATE(131)] = 4825,
  [SMALL_STATE(132)] = 4837,
  [SMALL_STATE(133)] = 4855,
  [SMALL_STATE(134)] = 4867,
  [SMALL_STATE(135)] = 4879,
  [SMALL_STATE(136)] = 4895,
  [SMALL_STATE(137)] = 4907,
  [SMALL_STATE(138)] = 4919,
  [SMALL_STATE(139)] = 4937,
  [SMALL_STATE(140)] = 4949,
  [SMALL_STATE(141)] = 4963,
  [SMALL_STATE(142)] = 4981,
  [SMALL_STATE(143)] = 4993,
  [SMALL_STATE(144)] = 5009,
  [SMALL_STATE(145)] = 5021,
  [SMALL_STATE(146)] = 5033,
  [SMALL_STATE(147)] = 5044,
  [SMALL_STATE(148)] = 5055,
  [SMALL_STATE(149)] = 5068,
  [SMALL_STATE(150)] = 5085,
  [SMALL_STATE(151)] = 5096,
  [SMALL_STATE(152)] = 5115,
  [SMALL_STATE(153)] = 5128,
  [SMALL_STATE(154)] = 5143,
  [SMALL_STATE(155)] = 5156,
  [SMALL_STATE(156)] = 5167,
  [SMALL_STATE(157)] = 5180,
  [SMALL_STATE(158)] = 5193,
  [SMALL_STATE(159)] = 5204,
  [SMALL_STATE(160)] = 5215,
  [SMALL_STATE(161)] = 5228,
  [SMALL_STATE(162)] = 5239,
  [SMALL_STATE(163)] = 5250,
  [SMALL_STATE(164)] = 5263,
  [SMALL_STATE(165)] = 5274,
  [SMALL_STATE(166)] = 5285,
  [SMALL_STATE(167)] = 5296,
  [SMALL_STATE(168)] = 5307,
  [SMALL_STATE(169)] = 5320,
  [SMALL_STATE(170)] = 5333,
  [SMALL_STATE(171)] = 5344,
  [SMALL_STATE(172)] = 5356,
  [SMALL_STATE(173)] = 5370,
  [SMALL_STATE(174)] = 5386,
  [SMALL_STATE(175)] = 5398,
  [SMALL_STATE(176)] = 5410,
  [SMALL_STATE(177)] = 5422,
  [SMALL_STATE(178)] = 5434,
  [SMALL_STATE(179)] = 5450,
  [SMALL_STATE(180)] = 5466,
  [SMALL_STATE(181)] = 5482,
  [SMALL_STATE(182)] = 5494,
  [SMALL_STATE(183)] = 5506,
  [SMALL_STATE(184)] = 5518,
  [SMALL_STATE(185)] = 5534,
  [SMALL_STATE(186)] = 5550,
  [SMALL_STATE(187)] = 5564,
  [SMALL_STATE(188)] = 5578,
  [SMALL_STATE(189)] = 5592,
  [SMALL_STATE(190)] = 5608,
  [SMALL_STATE(191)] = 5624,
  [SMALL_STATE(192)] = 5640,
  [SMALL_STATE(193)] = 5652,
  [SMALL_STATE(194)] = 5666,
  [SMALL_STATE(195)] = 5678,
  [SMALL_STATE(196)] = 5690,
  [SMALL_STATE(197)] = 5702,
  [SMALL_STATE(198)] = 5718,
  [SMALL_STATE(199)] = 5734,
  [SMALL_STATE(200)] = 5746,
  [SMALL_STATE(201)] = 5756,
  [SMALL_STATE(202)] = 5772,
  [SMALL_STATE(203)] = 5784,
  [SMALL_STATE(204)] = 5800,
  [SMALL_STATE(205)] = 5809,
  [SMALL_STATE(206)] = 5822,
  [SMALL_STATE(207)] = 5835,
  [SMALL_STATE(208)] = 5848,
  [SMALL_STATE(209)] = 5861,
  [SMALL_STATE(210)] = 5874,
  [SMALL_STATE(211)] = 5887,
  [SMALL_STATE(212)] = 5900,
  [SMALL_STATE(213)] = 5913,
  [SMALL_STATE(214)] = 5924,
  [SMALL_STATE(215)] = 5933,
  [SMALL_STATE(216)] = 5946,
  [SMALL_STATE(217)] = 5959,
  [SMALL_STATE(218)] = 5972,
  [SMALL_STATE(219)] = 5985,
  [SMALL_STATE(220)] = 5998,
  [SMALL_STATE(221)] = 6011,
  [SMALL_STATE(222)] = 6024,
  [SMALL_STATE(223)] = 6037,
  [SMALL_STATE(224)] = 6050,
  [SMALL_STATE(225)] = 6063,
  [SMALL_STATE(226)] = 6076,
  [SMALL_STATE(227)] = 6089,
  [SMALL_STATE(228)] = 6102,
  [SMALL_STATE(229)] = 6115,
  [SMALL_STATE(230)] = 6128,
  [SMALL_STATE(231)] = 6141,
  [SMALL_STATE(232)] = 6154,
  [SMALL_STATE(233)] = 6167,
  [SMALL_STATE(234)] = 6180,
  [SMALL_STATE(235)] = 6193,
  [SMALL_STATE(236)] = 6206,
  [SMALL_STATE(237)] = 6219,
  [SMALL_STATE(238)] = 6232,
  [SMALL_STATE(239)] = 6245,
  [SMALL_STATE(240)] = 6258,
  [SMALL_STATE(241)] = 6271,
  [SMALL_STATE(242)] = 6280,
  [SMALL_STATE(243)] = 6289,
  [SMALL_STATE(244)] = 6302,
  [SMALL_STATE(245)] = 6315,
  [SMALL_STATE(246)] = 6328,
  [SMALL_STATE(247)] = 6341,
  [SMALL_STATE(248)] = 6354,
  [SMALL_STATE(249)] = 6367,
  [SMALL_STATE(250)] = 6380,
  [SMALL_STATE(251)] = 6393,
  [SMALL_STATE(252)] = 6406,
  [SMALL_STATE(253)] = 6419,
  [SMALL_STATE(254)] = 6432,
  [SMALL_STATE(255)] = 6445,
  [SMALL_STATE(256)] = 6458,
  [SMALL_STATE(257)] = 6471,
  [SMALL_STATE(258)] = 6484,
  [SMALL_STATE(259)] = 6497,
  [SMALL_STATE(260)] = 6510,
  [SMALL_STATE(261)] = 6523,
  [SMALL_STATE(262)] = 6536,
  [SMALL_STATE(263)] = 6545,
  [SMALL_STATE(264)] = 6558,
  [SMALL_STATE(265)] = 6571,
  [SMALL_STATE(266)] = 6584,
  [SMALL_STATE(267)] = 6597,
  [SMALL_STATE(268)] = 6610,
  [SMALL_STATE(269)] = 6623,
  [SMALL_STATE(270)] = 6636,
  [SMALL_STATE(271)] = 6644,
  [SMALL_STATE(272)] = 6652,
  [SMALL_STATE(273)] = 6660,
  [SMALL_STATE(274)] = 6670,
  [SMALL_STATE(275)] = 6678,
  [SMALL_STATE(276)] = 6686,
  [SMALL_STATE(277)] = 6696,
  [SMALL_STATE(278)] = 6704,
  [SMALL_STATE(279)] = 6714,
  [SMALL_STATE(280)] = 6722,
  [SMALL_STATE(281)] = 6730,
  [SMALL_STATE(282)] = 6738,
  [SMALL_STATE(283)] = 6748,
  [SMALL_STATE(284)] = 6756,
  [SMALL_STATE(285)] = 6766,
  [SMALL_STATE(286)] = 6774,
  [SMALL_STATE(287)] = 6782,
  [SMALL_STATE(288)] = 6790,
  [SMALL_STATE(289)] = 6798,
  [SMALL_STATE(290)] = 6808,
  [SMALL_STATE(291)] = 6816,
  [SMALL_STATE(292)] = 6826,
  [SMALL_STATE(293)] = 6836,
  [SMALL_STATE(294)] = 6846,
  [SMALL_STATE(295)] = 6854,
  [SMALL_STATE(296)] = 6864,
  [SMALL_STATE(297)] = 6874,
  [SMALL_STATE(298)] = 6884,
  [SMALL_STATE(299)] = 6894,
  [SMALL_STATE(300)] = 6902,
  [SMALL_STATE(301)] = 6910,
  [SMALL_STATE(302)] = 6920,
  [SMALL_STATE(303)] = 6928,
  [SMALL_STATE(304)] = 6936,
  [SMALL_STATE(305)] = 6944,
  [SMALL_STATE(306)] = 6952,
  [SMALL_STATE(307)] = 6960,
  [SMALL_STATE(308)] = 6970,
  [SMALL_STATE(309)] = 6978,
  [SMALL_STATE(310)] = 6986,
  [SMALL_STATE(311)] = 6994,
  [SMALL_STATE(312)] = 7001,
  [SMALL_STATE(313)] = 7008,
  [SMALL_STATE(314)] = 7015,
  [SMALL_STATE(315)] = 7022,
  [SMALL_STATE(316)] = 7029,
  [SMALL_STATE(317)] = 7036,
  [SMALL_STATE(318)] = 7043,
  [SMALL_STATE(319)] = 7050,
  [SMALL_STATE(320)] = 7057,
  [SMALL_STATE(321)] = 7064,
  [SMALL_STATE(322)] = 7071,
  [SMALL_STATE(323)] = 7078,
  [SMALL_STATE(324)] = 7085,
  [SMALL_STATE(325)] = 7092,
  [SMALL_STATE(326)] = 7099,
  [SMALL_STATE(327)] = 7106,
  [SMALL_STATE(328)] = 7113,
  [SMALL_STATE(329)] = 7120,
  [SMALL_STATE(330)] = 7127,
  [SMALL_STATE(331)] = 7134,
  [SMALL_STATE(332)] = 7141,
  [SMALL_STATE(333)] = 7148,
  [SMALL_STATE(334)] = 7155,
  [SMALL_STATE(335)] = 7162,
  [SMALL_STATE(336)] = 7169,
  [SMALL_STATE(337)] = 7176,
  [SMALL_STATE(338)] = 7183,
  [SMALL_STATE(339)] = 7190,
  [SMALL_STATE(340)] = 7197,
  [SMALL_STATE(341)] = 7204,
  [SMALL_STATE(342)] = 7211,
  [SMALL_STATE(343)] = 7218,
  [SMALL_STATE(344)] = 7225,
  [SMALL_STATE(345)] = 7232,
  [SMALL_STATE(346)] = 7239,
  [SMALL_STATE(347)] = 7246,
  [SMALL_STATE(348)] = 7253,
  [SMALL_STATE(349)] = 7260,
  [SMALL_STATE(350)] = 7267,
  [SMALL_STATE(351)] = 7274,
  [SMALL_STATE(352)] = 7281,
  [SMALL_STATE(353)] = 7288,
  [SMALL_STATE(354)] = 7295,
  [SMALL_STATE(355)] = 7302,
  [SMALL_STATE(356)] = 7309,
  [SMALL_STATE(357)] = 7316,
  [SMALL_STATE(358)] = 7323,
  [SMALL_STATE(359)] = 7330,
  [SMALL_STATE(360)] = 7337,
  [SMALL_STATE(361)] = 7344,
  [SMALL_STATE(362)] = 7351,
  [SMALL_STATE(363)] = 7358,
  [SMALL_STATE(364)] = 7365,
  [SMALL_STATE(365)] = 7372,
  [SMALL_STATE(366)] = 7379,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field_label, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_field_label, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_parens, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_parens, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 4, .production_id = 31),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 4, .production_id = 31),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 56),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 56),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 3, .production_id = 20),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 3, .production_id = 20),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_update, 6, .production_id = 52),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_update, 6, .production_id = 52),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable_name, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable_name, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 3, .production_id = 22),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 3, .production_id = 22),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_access, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_access, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 23),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 23),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 5, .production_id = 47),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 5, .production_id = 47),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(269),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(276),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(277),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_update, 7, .production_id = 59),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_update, 7, .production_id = 59),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression2, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression2, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_update, 5, .production_id = 42),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_update, 5, .production_id = 42),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 5, .production_id = 43),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 5, .production_id = 43),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 4, .production_id = 34),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 4, .production_id = 34),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression1, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression1, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 35),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 35),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 48),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 48),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_if, 6, .production_id = 55),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match, 5, .production_id = 45),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 9, .production_id = 69),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 5, .production_id = 44),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 67),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 66),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 61),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 60),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 53),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 54),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor_proper_name, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type1, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_proper_name, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 5, .production_id = 56),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 4, .production_id = 48),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind_name, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call, 2, .production_id = 14),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 3, .production_id = 35),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 7, .production_id = 65),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 4, .production_id = 31),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 3, .production_id = 20),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 6, .production_id = 58),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_parens, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 5, .production_id = 43),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(358),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 5, .production_id = 50),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 7, .production_id = 64),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 26),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 26),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 7, .production_id = 37),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 7, .production_id = 37),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 4, .production_id = 36),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 4, .production_id = 31),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_variable, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_unused, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 6, .production_id = 57),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 5, .production_id = 43),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 3, .production_id = 20),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 5, .production_id = 49),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 40),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 40),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 7, .production_id = 38),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias_declaration, 7, .production_id = 38),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 41),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 41),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 1, .production_id = 10),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2), SHIFT_REPEAT(110),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 30),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 30),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 1, .production_id = 21),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 29),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 29),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 8, .production_id = 51),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 8, .production_id = 51),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 6, .production_id = 27),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias_declaration, 6, .production_id = 27),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 5, .production_id = 24),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 5, .production_id = 24),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_name, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2), SHIFT_REPEAT(141),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_let_binder, 1, .production_id = 21),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_name, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2), SHIFT_REPEAT(273),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(248),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2), SHIFT_REPEAT(257),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__everything, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2), SHIFT_REPEAT(106),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2), SHIFT_REPEAT(50),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_record_update_target, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_closed_record_repeat1, 2), SHIFT_REPEAT(219),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_closed_record_repeat1, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_name, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2), SHIFT_REPEAT(109),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 5, .production_id = 39),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_constructors, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration_name, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match_arm, 4, .production_id = 62),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field, 3, .production_id = 32),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 3, .production_id = 17),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 2, .production_id = 19),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 5, .production_id = 43),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record_row_variable, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field_label, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 3, .production_id = 20),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 4, .production_id = 28),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 4, .production_id = 31),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variable, 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field, 3, .production_id = 32),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_value, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_alias, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 2, .production_id = 33),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_package, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 3, .production_id = 46),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_let_binder, 2, .production_id = 33),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 4),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_return, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_everything, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_annotation, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind, 5, .production_id = 63),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 5),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_let, 6, .production_id = 68),
  [866] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
