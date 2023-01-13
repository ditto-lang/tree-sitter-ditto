#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 462
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 42
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 72

enum {
  sym__name = 1,
  anon_sym_module = 2,
  anon_sym_exports = 3,
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
  anon_sym_alias = 14,
  anon_sym_foreign = 15,
  anon_sym_DASH_GT = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_COLON = 19,
  anon_sym_do = 20,
  anon_sym_LT_DASH = 21,
  anon_sym_SEMI = 22,
  anon_sym_let = 23,
  anon_sym_return = 24,
  anon_sym_fn = 25,
  anon_sym_if = 26,
  anon_sym_then = 27,
  anon_sym_else = 28,
  anon_sym_in = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  sym_expression_string = 32,
  sym_expression_int = 33,
  sym_expression_float = 34,
  sym_expression_true = 35,
  sym_expression_false = 36,
  sym_expression_unit = 37,
  anon_sym_match = 38,
  anon_sym_with = 39,
  anon_sym_end = 40,
  anon_sym_PIPE_GT = 41,
  sym__proper_name = 42,
  sym__package_name = 43,
  sym__unused_name = 44,
  sym_comment = 45,
  sym_source_file = 46,
  sym_module_header = 47,
  sym_module_name = 48,
  sym_module_import = 49,
  sym_module_import_package = 50,
  sym_module_import_alias = 51,
  sym__exposing = 52,
  sym_exposing_everything = 53,
  sym_exposing_list = 54,
  sym__exposing_list_item = 55,
  sym_exposing_list_item_type = 56,
  sym_exposing_list_item_type_name = 57,
  sym_exposing_list_item_type_constructors = 58,
  sym__everything = 59,
  sym_exposing_list_item_value = 60,
  sym__module_declaration = 61,
  sym__type_declaration = 62,
  sym_type_declaration = 63,
  sym_type_declaration_empty = 64,
  sym_type_alias_declaration = 65,
  sym_type_declaration_name = 66,
  sym_type_declaration_variables = 67,
  sym_type_declaration_variable = 68,
  sym_type_declaration_constructor = 69,
  sym_type_declaration_constructor_name = 70,
  sym_type_declaration_constructor_fields = 71,
  sym_value_declaration = 72,
  sym_value_declaration_name = 73,
  sym_foreign_value_declaration = 74,
  sym_foreign_value_declaration_name = 75,
  sym__type = 76,
  sym__type1 = 77,
  sym__type_parens = 78,
  sym_type_constructor = 79,
  sym_type_constructor_proper_name = 80,
  sym_type_variable = 81,
  sym_type_call = 82,
  sym_type_call_arguments = 83,
  sym_type_function = 84,
  sym_type_closed_record = 85,
  sym_type_record_field = 86,
  sym_type_record_field_label = 87,
  sym_type_open_record = 88,
  sym_type_open_record_row_variable = 89,
  sym_type_annotation = 90,
  sym_return_type_annotation = 91,
  sym__expression = 92,
  sym__expression4 = 93,
  sym__expression3 = 94,
  sym__expression2 = 95,
  sym__expression1 = 96,
  sym__expression0 = 97,
  sym__expression_parens = 98,
  sym_expression_constructor = 99,
  sym_expression_constructor_proper_name = 100,
  sym_expression_variable = 101,
  sym_expression_variable_name = 102,
  sym_expression_call = 103,
  sym_expression_call_arguments = 104,
  sym_expression_effect = 105,
  sym__expression_effect_statement = 106,
  sym_expression_effect_bind = 107,
  sym_expression_effect_bind_name = 108,
  sym_expression_effect_let = 109,
  sym_expression_effect_let_binder = 110,
  sym_expression_effect_expression = 111,
  sym_expression_effect_return = 112,
  sym_expression_function = 113,
  sym_expression_function_parameter = 114,
  sym_expression_if = 115,
  sym_expression_let = 116,
  sym_expression_let_value_declaration = 117,
  sym_expression_array = 118,
  sym_expression_match = 119,
  sym_expression_match_arm = 120,
  sym_expression_right_pipe = 121,
  sym_expression_record = 122,
  sym_expression_record_field = 123,
  sym_expression_record_field_label = 124,
  sym_expression_record_update = 125,
  sym__expression_record_update_target = 126,
  sym_expression_record_access = 127,
  sym__pattern = 128,
  sym_pattern_constructor = 129,
  sym_pattern_constructor_proper_name = 130,
  sym_pattern_constructor_fields = 131,
  sym_pattern_variable = 132,
  sym_pattern_unused = 133,
  sym_qualifier = 134,
  aux_sym_source_file_repeat1 = 135,
  aux_sym_source_file_repeat2 = 136,
  aux_sym_module_name_repeat1 = 137,
  aux_sym_exposing_list_repeat1 = 138,
  aux_sym_type_declaration_repeat1 = 139,
  aux_sym_type_declaration_variables_repeat1 = 140,
  aux_sym_type_declaration_constructor_fields_repeat1 = 141,
  aux_sym_type_closed_record_repeat1 = 142,
  aux_sym_expression_call_arguments_repeat1 = 143,
  aux_sym_expression_function_repeat1 = 144,
  aux_sym_expression_let_repeat1 = 145,
  aux_sym_expression_match_repeat1 = 146,
  aux_sym_expression_record_repeat1 = 147,
  aux_sym_pattern_constructor_fields_repeat1 = 148,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__name] = "_name",
  [anon_sym_module] = "module",
  [anon_sym_exports] = "exports",
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
  [anon_sym_alias] = "alias",
  [anon_sym_foreign] = "foreign",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_do] = "do",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_SEMI] = ";",
  [anon_sym_let] = "let",
  [anon_sym_return] = "return",
  [anon_sym_fn] = "fn",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_in] = "in",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_expression_string] = "expression_string",
  [sym_expression_int] = "expression_int",
  [sym_expression_float] = "expression_float",
  [sym_expression_true] = "expression_true",
  [sym_expression_false] = "expression_false",
  [sym_expression_unit] = "expression_unit",
  [anon_sym_match] = "match",
  [anon_sym_with] = "with",
  [anon_sym_end] = "end",
  [anon_sym_PIPE_GT] = "|>",
  [sym__proper_name] = "_proper_name",
  [sym__package_name] = "_package_name",
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
  [sym_exposing_list_item_type] = "exposing_list_item_type",
  [sym_exposing_list_item_type_name] = "exposing_list_item_type_name",
  [sym_exposing_list_item_type_constructors] = "exposing_list_item_type_constructors",
  [sym__everything] = "_everything",
  [sym_exposing_list_item_value] = "exposing_list_item_value",
  [sym__module_declaration] = "_module_declaration",
  [sym__type_declaration] = "_type_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_type_declaration_empty] = "type_declaration_empty",
  [sym_type_alias_declaration] = "type_alias_declaration",
  [sym_type_declaration_name] = "type_declaration_name",
  [sym_type_declaration_variables] = "type_declaration_variables",
  [sym_type_declaration_variable] = "type_declaration_variable",
  [sym_type_declaration_constructor] = "type_declaration_constructor",
  [sym_type_declaration_constructor_name] = "type_declaration_constructor_name",
  [sym_type_declaration_constructor_fields] = "type_declaration_constructor_fields",
  [sym_value_declaration] = "value_declaration",
  [sym_value_declaration_name] = "value_declaration_name",
  [sym_foreign_value_declaration] = "foreign_value_declaration",
  [sym_foreign_value_declaration_name] = "foreign_value_declaration_name",
  [sym__type] = "_type",
  [sym__type1] = "_type1",
  [sym__type_parens] = "_type_parens",
  [sym_type_constructor] = "type_constructor",
  [sym_type_constructor_proper_name] = "type_constructor_proper_name",
  [sym_type_variable] = "type_variable",
  [sym_type_call] = "type_call",
  [sym_type_call_arguments] = "type_call_arguments",
  [sym_type_function] = "type_function",
  [sym_type_closed_record] = "type_closed_record",
  [sym_type_record_field] = "type_record_field",
  [sym_type_record_field_label] = "type_record_field_label",
  [sym_type_open_record] = "type_open_record",
  [sym_type_open_record_row_variable] = "type_open_record_row_variable",
  [sym_type_annotation] = "type_annotation",
  [sym_return_type_annotation] = "return_type_annotation",
  [sym__expression] = "_expression",
  [sym__expression4] = "_expression4",
  [sym__expression3] = "_expression3",
  [sym__expression2] = "_expression2",
  [sym__expression1] = "_expression1",
  [sym__expression0] = "_expression0",
  [sym__expression_parens] = "_expression_parens",
  [sym_expression_constructor] = "expression_constructor",
  [sym_expression_constructor_proper_name] = "expression_constructor_proper_name",
  [sym_expression_variable] = "expression_variable",
  [sym_expression_variable_name] = "expression_variable_name",
  [sym_expression_call] = "expression_call",
  [sym_expression_call_arguments] = "expression_call_arguments",
  [sym_expression_effect] = "expression_effect",
  [sym__expression_effect_statement] = "_expression_effect_statement",
  [sym_expression_effect_bind] = "expression_effect_bind",
  [sym_expression_effect_bind_name] = "expression_effect_bind_name",
  [sym_expression_effect_let] = "expression_effect_let",
  [sym_expression_effect_let_binder] = "expression_effect_let_binder",
  [sym_expression_effect_expression] = "expression_effect_expression",
  [sym_expression_effect_return] = "expression_effect_return",
  [sym_expression_function] = "expression_function",
  [sym_expression_function_parameter] = "expression_function_parameter",
  [sym_expression_if] = "expression_if",
  [sym_expression_let] = "expression_let",
  [sym_expression_let_value_declaration] = "expression_let_value_declaration",
  [sym_expression_array] = "expression_array",
  [sym_expression_match] = "expression_match",
  [sym_expression_match_arm] = "expression_match_arm",
  [sym_expression_right_pipe] = "expression_right_pipe",
  [sym_expression_record] = "expression_record",
  [sym_expression_record_field] = "expression_record_field",
  [sym_expression_record_field_label] = "expression_record_field_label",
  [sym_expression_record_update] = "expression_record_update",
  [sym__expression_record_update_target] = "_expression_record_update_target",
  [sym_expression_record_access] = "expression_record_access",
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
  [aux_sym_expression_call_arguments_repeat1] = "expression_call_arguments_repeat1",
  [aux_sym_expression_function_repeat1] = "expression_function_repeat1",
  [aux_sym_expression_let_repeat1] = "expression_let_repeat1",
  [aux_sym_expression_match_repeat1] = "expression_match_repeat1",
  [aux_sym_expression_record_repeat1] = "expression_record_repeat1",
  [aux_sym_pattern_constructor_fields_repeat1] = "pattern_constructor_fields_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__name] = sym__name,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_exports] = anon_sym_exports,
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
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_foreign] = anon_sym_foreign,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_expression_string] = sym_expression_string,
  [sym_expression_int] = sym_expression_int,
  [sym_expression_float] = sym_expression_float,
  [sym_expression_true] = sym_expression_true,
  [sym_expression_false] = sym_expression_false,
  [sym_expression_unit] = sym_expression_unit,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [sym__proper_name] = sym__proper_name,
  [sym__package_name] = sym__package_name,
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
  [sym_exposing_list_item_type] = sym_exposing_list_item_type,
  [sym_exposing_list_item_type_name] = sym_exposing_list_item_type_name,
  [sym_exposing_list_item_type_constructors] = sym_exposing_list_item_type_constructors,
  [sym__everything] = sym__everything,
  [sym_exposing_list_item_value] = sym_exposing_list_item_value,
  [sym__module_declaration] = sym__module_declaration,
  [sym__type_declaration] = sym__type_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_type_declaration_empty] = sym_type_declaration_empty,
  [sym_type_alias_declaration] = sym_type_alias_declaration,
  [sym_type_declaration_name] = sym_type_declaration_name,
  [sym_type_declaration_variables] = sym_type_declaration_variables,
  [sym_type_declaration_variable] = sym_type_declaration_variable,
  [sym_type_declaration_constructor] = sym_type_declaration_constructor,
  [sym_type_declaration_constructor_name] = sym_type_declaration_constructor_name,
  [sym_type_declaration_constructor_fields] = sym_type_declaration_constructor_fields,
  [sym_value_declaration] = sym_value_declaration,
  [sym_value_declaration_name] = sym_value_declaration_name,
  [sym_foreign_value_declaration] = sym_foreign_value_declaration,
  [sym_foreign_value_declaration_name] = sym_foreign_value_declaration_name,
  [sym__type] = sym__type,
  [sym__type1] = sym__type1,
  [sym__type_parens] = sym__type_parens,
  [sym_type_constructor] = sym_type_constructor,
  [sym_type_constructor_proper_name] = sym_type_constructor_proper_name,
  [sym_type_variable] = sym_type_variable,
  [sym_type_call] = sym_type_call,
  [sym_type_call_arguments] = sym_type_call_arguments,
  [sym_type_function] = sym_type_function,
  [sym_type_closed_record] = sym_type_closed_record,
  [sym_type_record_field] = sym_type_record_field,
  [sym_type_record_field_label] = sym_type_record_field_label,
  [sym_type_open_record] = sym_type_open_record,
  [sym_type_open_record_row_variable] = sym_type_open_record_row_variable,
  [sym_type_annotation] = sym_type_annotation,
  [sym_return_type_annotation] = sym_return_type_annotation,
  [sym__expression] = sym__expression,
  [sym__expression4] = sym__expression4,
  [sym__expression3] = sym__expression3,
  [sym__expression2] = sym__expression2,
  [sym__expression1] = sym__expression1,
  [sym__expression0] = sym__expression0,
  [sym__expression_parens] = sym__expression_parens,
  [sym_expression_constructor] = sym_expression_constructor,
  [sym_expression_constructor_proper_name] = sym_expression_constructor_proper_name,
  [sym_expression_variable] = sym_expression_variable,
  [sym_expression_variable_name] = sym_expression_variable_name,
  [sym_expression_call] = sym_expression_call,
  [sym_expression_call_arguments] = sym_expression_call_arguments,
  [sym_expression_effect] = sym_expression_effect,
  [sym__expression_effect_statement] = sym__expression_effect_statement,
  [sym_expression_effect_bind] = sym_expression_effect_bind,
  [sym_expression_effect_bind_name] = sym_expression_effect_bind_name,
  [sym_expression_effect_let] = sym_expression_effect_let,
  [sym_expression_effect_let_binder] = sym_expression_effect_let_binder,
  [sym_expression_effect_expression] = sym_expression_effect_expression,
  [sym_expression_effect_return] = sym_expression_effect_return,
  [sym_expression_function] = sym_expression_function,
  [sym_expression_function_parameter] = sym_expression_function_parameter,
  [sym_expression_if] = sym_expression_if,
  [sym_expression_let] = sym_expression_let,
  [sym_expression_let_value_declaration] = sym_expression_let_value_declaration,
  [sym_expression_array] = sym_expression_array,
  [sym_expression_match] = sym_expression_match,
  [sym_expression_match_arm] = sym_expression_match_arm,
  [sym_expression_right_pipe] = sym_expression_right_pipe,
  [sym_expression_record] = sym_expression_record,
  [sym_expression_record_field] = sym_expression_record_field,
  [sym_expression_record_field_label] = sym_expression_record_field_label,
  [sym_expression_record_update] = sym_expression_record_update,
  [sym__expression_record_update_target] = sym__expression_record_update_target,
  [sym_expression_record_access] = sym_expression_record_access,
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
  [aux_sym_expression_call_arguments_repeat1] = aux_sym_expression_call_arguments_repeat1,
  [aux_sym_expression_function_repeat1] = aux_sym_expression_function_repeat1,
  [aux_sym_expression_let_repeat1] = aux_sym_expression_let_repeat1,
  [aux_sym_expression_match_repeat1] = aux_sym_expression_match_repeat1,
  [aux_sym_expression_record_repeat1] = aux_sym_expression_record_repeat1,
  [aux_sym_pattern_constructor_fields_repeat1] = aux_sym_pattern_constructor_fields_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
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
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
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
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_in] = {
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
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__proper_name] = {
    .visible = false,
    .named = true,
  },
  [sym__package_name] = {
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
  [sym_exposing_list_item_type] = {
    .visible = true,
    .named = true,
  },
  [sym_exposing_list_item_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_exposing_list_item_type_constructors] = {
    .visible = true,
    .named = true,
  },
  [sym__everything] = {
    .visible = false,
    .named = true,
  },
  [sym_exposing_list_item_value] = {
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
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_empty] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias_declaration] = {
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
  [sym_value_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_value_declaration_name] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_value_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_value_declaration_name] = {
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
  [sym__type_parens] = {
    .visible = false,
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
  [sym_type_call] = {
    .visible = true,
    .named = true,
  },
  [sym_type_call_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_type_function] = {
    .visible = true,
    .named = true,
  },
  [sym_type_closed_record] = {
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
  [sym_type_open_record] = {
    .visible = true,
    .named = true,
  },
  [sym_type_open_record_row_variable] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression4] = {
    .visible = false,
    .named = true,
  },
  [sym__expression3] = {
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
  [sym__expression_parens] = {
    .visible = false,
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
  [sym_expression_call] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_call_arguments] = {
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
  [sym_expression_effect_bind_name] = {
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
  [sym_expression_effect_return] = {
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
  [sym_expression_let] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_let_value_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_array] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_match] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_match_arm] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_right_pipe] = {
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
  [sym_expression_record_field_label] = {
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
  [sym_expression_record_access] = {
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
  [aux_sym_expression_call_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_let_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_match_repeat1] = {
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
  field_binder = 8,
  field_body = 9,
  field_condition = 10,
  field_constructor = 11,
  field_declaration = 12,
  field_element = 13,
  field_exports = 14,
  field_expression = 15,
  field_false_clause = 16,
  field_field = 17,
  field_fields = 18,
  field_function = 19,
  field_header = 20,
  field_import = 21,
  field_imports = 22,
  field_label = 23,
  field_let_binder = 24,
  field_let_expression = 25,
  field_lhs = 26,
  field_match_arm_expression = 27,
  field_match_arm_pattern = 28,
  field_module_name = 29,
  field_name = 30,
  field_package = 31,
  field_parameter = 32,
  field_pattern = 33,
  field_rest = 34,
  field_return_type = 35,
  field_rhs = 36,
  field_target = 37,
  field_true_clause = 38,
  field_type_annotation = 39,
  field_value = 40,
  field_variable = 41,
  field_variables = 42,
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
  [field_binder] = "binder",
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
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 3},
  [15] = {.index = 28, .length = 2},
  [16] = {.index = 30, .length = 1},
  [17] = {.index = 31, .length = 2},
  [18] = {.index = 33, .length = 3},
  [19] = {.index = 36, .length = 4},
  [20] = {.index = 40, .length = 4},
  [21] = {.index = 44, .length = 2},
  [22] = {.index = 46, .length = 1},
  [23] = {.index = 47, .length = 3},
  [24] = {.index = 50, .length = 2},
  [25] = {.index = 52, .length = 3},
  [26] = {.index = 55, .length = 1},
  [27] = {.index = 56, .length = 1},
  [28] = {.index = 57, .length = 1},
  [29] = {.index = 58, .length = 2},
  [30] = {.index = 60, .length = 5},
  [31] = {.index = 65, .length = 3},
  [32] = {.index = 68, .length = 2},
  [33] = {.index = 70, .length = 4},
  [34] = {.index = 74, .length = 4},
  [35] = {.index = 78, .length = 2},
  [36] = {.index = 80, .length = 2},
  [37] = {.index = 82, .length = 2},
  [38] = {.index = 84, .length = 2},
  [39] = {.index = 86, .length = 2},
  [40] = {.index = 88, .length = 1},
  [41] = {.index = 89, .length = 1},
  [42] = {.index = 90, .length = 3},
  [43] = {.index = 93, .length = 5},
  [44] = {.index = 98, .length = 3},
  [45] = {.index = 101, .length = 2},
  [46] = {.index = 103, .length = 1},
  [47] = {.index = 104, .length = 3},
  [48] = {.index = 107, .length = 1},
  [49] = {.index = 108, .length = 3},
  [50] = {.index = 111, .length = 2},
  [51] = {.index = 113, .length = 2},
  [52] = {.index = 115, .length = 2},
  [53] = {.index = 117, .length = 1},
  [54] = {.index = 118, .length = 3},
  [55] = {.index = 121, .length = 2},
  [56] = {.index = 123, .length = 2},
  [57] = {.index = 125, .length = 3},
  [58] = {.index = 128, .length = 3},
  [59] = {.index = 131, .length = 3},
  [60] = {.index = 134, .length = 2},
  [61] = {.index = 136, .length = 4},
  [62] = {.index = 140, .length = 3},
  [63] = {.index = 143, .length = 3},
  [64] = {.index = 146, .length = 3},
  [65] = {.index = 149, .length = 2},
  [66] = {.index = 151, .length = 4},
  [67] = {.index = 155, .length = 3},
  [68] = {.index = 158, .length = 3},
  [69] = {.index = 161, .length = 4},
  [70] = {.index = 165, .length = 4},
  [71] = {.index = 169, .length = 5},
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
    {field_module_name, 1},
  [6] =
    {field_name, 1},
  [7] =
    {field_declaration, 2},
    {field_header, 0},
    {field_import, 1},
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
    {field_name, 1},
    {field_variables, 2},
  [18] =
    {field_name, 1},
    {field_type_annotation, 2},
  [20] =
    {field_expression, 2},
    {field_name, 0},
  [22] =
    {field_alias, 2},
    {field_alias, 3},
    {field_module_name, 1},
  [25] =
    {field_imports, 3},
    {field_module_name, 2},
    {field_package, 1},
  [28] =
    {field_constructor, 3},
    {field_name, 1},
  [30] =
    {field_name, 0},
  [31] =
    {field_arguments, 1},
    {field_function, 0},
  [33] =
    {field_expression, 3},
    {field_name, 0},
    {field_type_annotation, 1},
  [36] =
    {field_alias, 2},
    {field_alias, 3},
    {field_imports, 4},
    {field_module_name, 1},
  [40] =
    {field_alias, 3},
    {field_alias, 4},
    {field_module_name, 2},
    {field_package, 1},
  [44] =
    {field_aliased_type, 4},
    {field_name, 2},
  [46] =
    {field_variable, 1},
  [47] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_name, 1},
  [50] =
    {field_fields, 1},
    {field_name, 0},
  [52] =
    {field_constructor, 4},
    {field_name, 1},
    {field_variables, 2},
  [55] =
    {field_field, 1},
  [56] =
    {field_pattern, 0},
  [57] =
    {field_element, 1},
  [58] =
    {field_lhs, 0},
    {field_rhs, 2},
  [60] =
    {field_alias, 3},
    {field_alias, 4},
    {field_imports, 5},
    {field_module_name, 2},
    {field_package, 1},
  [65] =
    {field_aliased_type, 5},
    {field_name, 2},
    {field_variables, 3},
  [68] =
    {field_variable, 1},
    {field_variable, 2},
  [70] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
  [74] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
    {field_variables, 2},
  [78] =
    {field_field, 1},
    {field_field, 2},
  [80] =
    {field_label, 0},
    {field_value, 2},
  [82] =
    {field_binder, 0},
    {field_expression, 2},
  [84] =
    {field_pattern, 0},
    {field_type_annotation, 1},
  [86] =
    {field_element, 1},
    {field_element, 2},
  [88] =
    {field_argument, 1},
  [89] =
    {field_return_type, 3},
  [90] =
    {field_variable, 1},
    {field_variable, 2},
    {field_variable, 3},
  [93] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_constructor, 6},
    {field_name, 1},
    {field_variables, 2},
  [98] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [101] =
    {field_field, 3},
    {field_target, 1},
  [103] =
    {field_rest, 2},
  [104] =
    {field_binder, 0},
    {field_expression, 3},
    {field_type_annotation, 1},
  [107] =
    {field_body, 4},
  [108] =
    {field_element, 1},
    {field_element, 2},
    {field_element, 3},
  [111] =
    {field_arm, 3},
    {field_expression, 1},
  [113] =
    {field_argument, 1},
    {field_argument, 2},
  [115] =
    {field_parameter, 1},
    {field_return_type, 4},
  [117] =
    {field_field, 3},
  [118] =
    {field_field, 3},
    {field_field, 4},
    {field_target, 1},
  [121] =
    {field_body, 5},
    {field_return_type, 3},
  [123] =
    {field_body, 5},
    {field_parameter, 2},
  [125] =
    {field_condition, 1},
    {field_false_clause, 5},
    {field_true_clause, 3},
  [128] =
    {field_argument, 1},
    {field_argument, 2},
    {field_argument, 3},
  [131] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_return_type, 5},
  [134] =
    {field_field, 3},
    {field_field, 4},
  [136] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
    {field_target, 1},
  [140] =
    {field_bind_expression, 2},
    {field_bind_name, 0},
    {field_rest, 4},
  [143] =
    {field_body, 6},
    {field_parameter, 2},
    {field_return_type, 4},
  [146] =
    {field_body, 6},
    {field_parameter, 2},
    {field_parameter, 3},
  [149] =
    {field_match_arm_expression, 3},
    {field_match_arm_pattern, 1},
  [151] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 6},
  [155] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
  [158] =
    {field_let_binder, 1},
    {field_let_expression, 3},
    {field_rest, 5},
  [161] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 5},
  [165] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_parameter, 4},
  [169] =
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 8,
  [14] = 9,
  [15] = 15,
  [16] = 7,
  [17] = 10,
  [18] = 15,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 31,
  [36] = 27,
  [37] = 37,
  [38] = 33,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 29,
  [43] = 23,
  [44] = 22,
  [45] = 45,
  [46] = 21,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 45,
  [52] = 32,
  [53] = 24,
  [54] = 41,
  [55] = 55,
  [56] = 50,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 59,
  [61] = 61,
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
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
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
  [129] = 128,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 133,
  [140] = 138,
  [141] = 131,
  [142] = 137,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
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
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 73,
  [177] = 74,
  [178] = 69,
  [179] = 63,
  [180] = 62,
  [181] = 85,
  [182] = 79,
  [183] = 80,
  [184] = 184,
  [185] = 66,
  [186] = 70,
  [187] = 187,
  [188] = 68,
  [189] = 189,
  [190] = 190,
  [191] = 64,
  [192] = 71,
  [193] = 72,
  [194] = 194,
  [195] = 65,
  [196] = 196,
  [197] = 81,
  [198] = 83,
  [199] = 86,
  [200] = 200,
  [201] = 61,
  [202] = 67,
  [203] = 203,
  [204] = 75,
  [205] = 205,
  [206] = 84,
  [207] = 78,
  [208] = 82,
  [209] = 76,
  [210] = 77,
  [211] = 211,
  [212] = 212,
  [213] = 92,
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
  [225] = 225,
  [226] = 93,
  [227] = 227,
  [228] = 90,
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
  [240] = 107,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 114,
  [270] = 115,
  [271] = 265,
  [272] = 116,
  [273] = 117,
  [274] = 112,
  [275] = 275,
  [276] = 118,
  [277] = 121,
  [278] = 278,
  [279] = 123,
  [280] = 280,
  [281] = 122,
  [282] = 282,
  [283] = 120,
  [284] = 113,
  [285] = 119,
  [286] = 268,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 267,
  [294] = 288,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 264,
  [300] = 266,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 306,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 320,
  [327] = 327,
  [328] = 328,
  [329] = 313,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 328,
  [338] = 305,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 318,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 330,
  [361] = 361,
  [362] = 362,
  [363] = 307,
  [364] = 364,
  [365] = 332,
  [366] = 339,
  [367] = 321,
  [368] = 336,
  [369] = 316,
  [370] = 308,
  [371] = 304,
  [372] = 372,
  [373] = 309,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 377,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 417,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 428,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 413,
  [439] = 439,
  [440] = 430,
  [441] = 427,
  [442] = 442,
  [443] = 425,
  [444] = 444,
  [445] = 445,
  [446] = 437,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 444,
  [456] = 449,
  [457] = 447,
  [458] = 420,
  [459] = 454,
  [460] = 460,
  [461] = 461,
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

static inline bool sym__proper_name_character_set_2(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(0)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(32);
      if (sym__name_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '.') ADVANCE(7);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(5)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(32);
      if (sym__name_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(2);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(6)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(22);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(10)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(32);
      if (sym__name_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_expression_string);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_expression_int);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_expression_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__proper_name);
      if (sym__proper_name_character_set_2(lookahead)) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__package_name);
      if (sym__package_name_character_set_2(lookahead)) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__name);
      if (sym__proper_name_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__unused_name);
      if (sym__proper_name_character_set_2(lookahead)) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_expression_true);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_expression_unit);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_expression_false);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
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
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 10},
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
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 10},
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
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 10},
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
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
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
  [289] = {.lex_state = 10},
  [290] = {.lex_state = 0},
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
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 6},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 5},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__name] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_exports] = ACTIONS(1),
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
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_foreign] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_expression_string] = ACTIONS(1),
    [sym_expression_int] = ACTIONS(1),
    [sym_expression_float] = ACTIONS(1),
    [sym_expression_true] = ACTIONS(1),
    [sym_expression_false] = ACTIONS(1),
    [sym_expression_unit] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [sym__proper_name] = ACTIONS(1),
    [sym__unused_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(461),
    [sym_module_header] = STATE(87),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__name,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    STATE(414), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(375), 5,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(421), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [91] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__name,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    STATE(414), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(375), 5,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(416), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [182] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__name,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    STATE(414), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(375), 5,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(412), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [273] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__name,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    STATE(414), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(375), 5,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(417), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [364] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__name,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    STATE(414), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(375), 5,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(435), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [455] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(360), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [539] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(311), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [623] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(311), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [707] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(305), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [791] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(311), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [875] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(311), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [959] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(311), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1043] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(311), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1127] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(311), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1211] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(330), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1295] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(338), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1379] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(311), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1463] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(115), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1544] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(180), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(240), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(270), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1625] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(180), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(240), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(276), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1706] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(180), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(240), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(277), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1787] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(180), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(240), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(279), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1868] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(180), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(240), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(283), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1949] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(298), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2030] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(424), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2111] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(180), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(240), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(284), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2192] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(436), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2273] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(114), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2354] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(275), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2435] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(116), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2516] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(459), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2597] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(180), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(240), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(273), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2678] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(180), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(240), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(292), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2759] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(180), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(240), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(272), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2840] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(113), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2921] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(393), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3002] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(117), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3083] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(112), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3164] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(180), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(240), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(274), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3245] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(440), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3326] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(180), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(240), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(269), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3407] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(123), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3488] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(121), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3569] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(438), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3650] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(118), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3731] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(418), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3812] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(400), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3893] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(180), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(240), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(278), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [3974] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(420), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [4055] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(413), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [4136] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(454), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [4217] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(120), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [4298] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(430), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [4379] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(311), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [4460] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(62), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(107), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(458), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [4541] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(85), 1,
      sym__name,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    STATE(366), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
    STATE(447), 1,
      sym__expression_record_update_target,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(303), 2,
      sym__expression1,
      sym_expression_constructor,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [4605] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(85), 1,
      sym__name,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    STATE(339), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
    STATE(457), 1,
      sym__expression_record_update_target,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(303), 2,
      sym__expression1,
      sym_expression_constructor,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [4669] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(65), 1,
      sym_expression_variable_name,
    STATE(90), 1,
      sym_expression_constructor_proper_name,
    STATE(294), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(83), 2,
      sym__expression1,
      sym_expression_constructor,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(63), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [4721] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      sym__proper_name,
    STATE(195), 1,
      sym_expression_variable_name,
    STATE(228), 1,
      sym_expression_constructor_proper_name,
    STATE(288), 1,
      sym_qualifier,
    ACTIONS(77), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(198), 2,
      sym__expression1,
      sym_expression_constructor,
    ACTIONS(79), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [4773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(91), 10,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [4799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_expression_call_arguments,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
    ACTIONS(97), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [4828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(101), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
    ACTIONS(103), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [4855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(107), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [4880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(111), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [4905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(115), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [4930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(119), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [4955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [4980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(127), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(131), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(139), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(143), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(147), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(151), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(155), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(159), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(163), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(167), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
    ACTIONS(173), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [5282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(181), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_expression_call_arguments,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
    ACTIONS(187), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [5361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(189), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(193), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
    ACTIONS(197), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
  [5436] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      sym__name,
    ACTIONS(205), 1,
      anon_sym_import,
    ACTIONS(207), 1,
      anon_sym_type,
    ACTIONS(209), 1,
      anon_sym_foreign,
    STATE(324), 1,
      sym_value_declaration_name,
    STATE(89), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(125), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_declaration,
      sym_type_declaration_empty,
      sym_type_alias_declaration,
      sym_value_declaration,
      sym_foreign_value_declaration,
      aux_sym_source_file_repeat2,
  [5472] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(384), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [5510] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym__name,
    ACTIONS(205), 1,
      anon_sym_import,
    ACTIONS(207), 1,
      anon_sym_type,
    ACTIONS(209), 1,
      anon_sym_foreign,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    STATE(324), 1,
      sym_value_declaration_name,
    STATE(194), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(126), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_declaration,
      sym_type_declaration_empty,
      sym_type_alias_declaration,
      sym_value_declaration,
      sym_foreign_value_declaration,
      aux_sym_source_file_repeat2,
  [5546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
    ACTIONS(225), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [5570] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(384), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [5608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
    ACTIONS(231), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [5632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_PIPE_GT,
    ACTIONS(173), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [5656] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(384), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [5694] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(384), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [5732] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(333), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [5770] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(384), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [5808] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(384), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [5846] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(205), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [5881] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(174), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [5916] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(384), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [5951] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(175), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [5986] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(344), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [6021] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(261), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [6056] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(172), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [6091] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(353), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [6126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_PIPE_GT,
    ACTIONS(243), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(245), 8,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6151] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(282), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [6186] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(173), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [6221] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(431), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [6256] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(392), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [6291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(251), 7,
      anon_sym_type,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(255), 7,
      anon_sym_type,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(259), 7,
      anon_sym_type,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(263), 7,
      anon_sym_type,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(267), 7,
      anon_sym_type,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(271), 7,
      anon_sym_type,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(275), 7,
      anon_sym_type,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(279), 7,
      anon_sym_type,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(283), 7,
      anon_sym_type,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(287), 7,
      anon_sym_type,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(291), 7,
      anon_sym_type,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(295), 7,
      anon_sym_type,
      anon_sym_foreign,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      sym__name,
  [6555] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(299), 1,
      sym__name,
    ACTIONS(302), 1,
      anon_sym_type,
    ACTIONS(305), 1,
      anon_sym_foreign,
    STATE(324), 1,
      sym_value_declaration_name,
    STATE(124), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_declaration,
      sym_type_declaration_empty,
      sym_type_alias_declaration,
      sym_value_declaration,
      sym_foreign_value_declaration,
      aux_sym_source_file_repeat2,
  [6584] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym__name,
    ACTIONS(207), 1,
      anon_sym_type,
    ACTIONS(209), 1,
      anon_sym_foreign,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    STATE(324), 1,
      sym_value_declaration_name,
    STATE(124), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_declaration,
      sym_type_declaration_empty,
      sym_type_alias_declaration,
      sym_value_declaration,
      sym_foreign_value_declaration,
      aux_sym_source_file_repeat2,
  [6613] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym__name,
    ACTIONS(207), 1,
      anon_sym_type,
    ACTIONS(209), 1,
      anon_sym_foreign,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    STATE(324), 1,
      sym_value_declaration_name,
    STATE(124), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_declaration,
      sym_type_declaration_empty,
      sym_type_alias_declaration,
      sym_value_declaration,
      sym_foreign_value_declaration,
      aux_sym_source_file_repeat2,
  [6642] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__name,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym__proper_name,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_type_constructor_proper_name,
    STATE(374), 1,
      sym_qualifier,
    STATE(136), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(434), 5,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_closed_record,
      sym_type_open_record,
  [6675] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__name,
    ACTIONS(316), 1,
      anon_sym_in,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(130), 2,
      sym_expression_let_value_declaration,
      aux_sym_expression_let_repeat1,
    STATE(372), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [6707] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__name,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(322), 1,
      anon_sym_in,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(130), 2,
      sym_expression_let_value_declaration,
      aux_sym_expression_let_repeat1,
    STATE(372), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [6739] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym__name,
    ACTIONS(327), 1,
      anon_sym_in,
    ACTIONS(329), 1,
      sym__proper_name,
    ACTIONS(332), 1,
      sym__unused_name,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(130), 2,
      sym_expression_let_value_declaration,
      aux_sym_expression_let_repeat1,
    STATE(372), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [6771] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(382), 1,
      sym_expression_function_parameter,
    STATE(287), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [6802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(341), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(339), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [6823] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(129), 2,
      sym_expression_let_value_declaration,
      aux_sym_expression_let_repeat1,
    STATE(372), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [6852] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 1,
      anon_sym_as,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    STATE(260), 1,
      sym__everything,
    STATE(242), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
    ACTIONS(345), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6879] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 1,
      anon_sym_as,
    STATE(260), 1,
      sym__everything,
    STATE(239), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
    ACTIONS(353), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym_type_call_arguments,
    ACTIONS(359), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(357), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [6929] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(382), 1,
      sym_expression_function_parameter,
    STATE(287), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [6960] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(370), 1,
      sym_expression_function_parameter,
    STATE(380), 1,
      sym_qualifier,
    STATE(287), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [6991] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(128), 2,
      sym_expression_let_value_declaration,
      aux_sym_expression_let_repeat1,
    STATE(372), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [7020] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(308), 1,
      sym_expression_function_parameter,
    STATE(380), 1,
      sym_qualifier,
    STATE(287), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [7051] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(382), 1,
      sym_expression_function_parameter,
    STATE(287), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [7082] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(382), 1,
      sym_expression_function_parameter,
    STATE(287), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [7113] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(387), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [7141] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(451), 1,
      sym_expression_effect_let_binder,
    STATE(334), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [7169] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(382), 1,
      sym_expression_function_parameter,
    STATE(287), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [7197] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    STATE(260), 1,
      sym__everything,
    STATE(236), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
    ACTIONS(377), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [7221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(381), 6,
      anon_sym_exports,
      anon_sym_import,
      anon_sym_as,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [7243] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(325), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [7271] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_DOT,
    STATE(153), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(389), 6,
      anon_sym_exports,
      anon_sym_import,
      anon_sym_as,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [7293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(391), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(395), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(339), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DOT,
    STATE(153), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(401), 6,
      anon_sym_exports,
      anon_sym_import,
      anon_sym_as,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [7369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(406), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7387] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    STATE(260), 1,
      sym__everything,
    STATE(231), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
    ACTIONS(412), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [7411] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(387), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [7439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(416), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7456] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(453), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [7481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(401), 6,
      anon_sym_exports,
      anon_sym_import,
      anon_sym_as,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [7498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(420), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(424), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(428), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7549] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__proper_name,
    ACTIONS(320), 1,
      sym__unused_name,
    ACTIONS(335), 1,
      sym__name,
    STATE(200), 1,
      sym_pattern_constructor_proper_name,
    STATE(380), 1,
      sym_qualifier,
    STATE(387), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [7574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(432), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(436), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(440), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(444), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(448), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(452), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(456), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [7693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_DASH_GT,
    ACTIONS(462), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(460), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [7712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(466), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [7728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(470), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [7744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(474), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [7760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(478), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [7776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(143), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [7791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(147), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [7806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(127), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [7821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_DOT,
    ACTIONS(103), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(101), 4,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [7838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_expression_call_arguments,
    ACTIONS(97), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(95), 3,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [7857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(193), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [7872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(167), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [7887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(173), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(171), 4,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [7904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    STATE(259), 1,
      sym_type_declaration_constructor_fields,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(488), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [7923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(115), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [7938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(131), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [7953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(492), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [7968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(123), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [7983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    STATE(232), 1,
      sym_pattern_constructor_fields,
    ACTIONS(496), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [8000] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(504), 1,
      anon_sym_EQ,
    STATE(233), 1,
      sym_type_declaration_variables,
    ACTIONS(500), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(107), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(135), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(139), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8066] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
    ACTIONS(510), 1,
      anon_sym_import,
    STATE(194), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    ACTIONS(508), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(111), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__name,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    ACTIONS(517), 1,
      sym__proper_name,
    STATE(244), 1,
      sym_exposing_list_item_type_name,
    STATE(391), 3,
      sym__exposing_list_item,
      sym_exposing_list_item_type,
      sym_exposing_list_item_value,
  [8121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(177), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_expression_call_arguments,
    ACTIONS(187), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(185), 3,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(197), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    STATE(252), 1,
      sym_pattern_constructor_fields,
    ACTIONS(519), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [8187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(91), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(119), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8217] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__name,
    ACTIONS(517), 1,
      sym__proper_name,
    ACTIONS(521), 1,
      anon_sym_DOT_DOT,
    STATE(244), 1,
      sym_exposing_list_item_type_name,
    STATE(356), 3,
      sym__exposing_list_item,
      sym_exposing_list_item_type,
      sym_exposing_list_item_value,
  [8238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(151), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
    ACTIONS(523), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [8268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(189), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(163), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(181), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(155), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(159), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8343] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__name,
    ACTIONS(517), 1,
      sym__proper_name,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      sym_exposing_list_item_type_name,
    STATE(391), 3,
      sym__exposing_list_item,
      sym_exposing_list_item_type,
      sym_exposing_list_item_value,
  [8364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(531), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(229), 4,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PIPE,
    ACTIONS(535), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 1,
      anon_sym_PIPE,
    STATE(215), 1,
      aux_sym_type_declaration_repeat1,
    ACTIONS(539), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    STATE(215), 1,
      aux_sym_type_declaration_repeat1,
    ACTIONS(546), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    STATE(215), 1,
      aux_sym_type_declaration_repeat1,
    ACTIONS(552), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    STATE(223), 1,
      aux_sym_type_declaration_repeat1,
    ACTIONS(556), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8479] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    STATE(215), 1,
      aux_sym_type_declaration_repeat1,
    ACTIONS(556), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8497] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    STATE(219), 1,
      aux_sym_type_declaration_repeat1,
    ACTIONS(560), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_EQ,
    ACTIONS(564), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_LT_DASH,
    ACTIONS(167), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE_GT,
  [8543] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    STATE(215), 1,
      aux_sym_type_declaration_repeat1,
    ACTIONS(570), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8561] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__name,
    ACTIONS(517), 1,
      sym__proper_name,
    STATE(244), 1,
      sym_exposing_list_item_type_name,
    STATE(391), 3,
      sym__exposing_list_item,
      sym_exposing_list_item_type,
      sym_exposing_list_item_value,
  [8579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [8591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(171), 4,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(574), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(223), 4,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      sym__proper_name,
      sym__unused_name,
  [8633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
    STATE(217), 1,
      aux_sym_type_declaration_repeat1,
    ACTIONS(578), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8651] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    STATE(216), 1,
      aux_sym_type_declaration_repeat1,
    ACTIONS(552), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    ACTIONS(582), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [8693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(590), 1,
      anon_sym_EQ,
    ACTIONS(588), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(594), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(598), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
    ACTIONS(602), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(539), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      ts_builtin_sym_end,
    ACTIONS(606), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    ACTIONS(610), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_PIPE_GT,
    ACTIONS(243), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(245), 2,
      anon_sym_in,
      sym__name,
  [8801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(616), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(620), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
    ACTIONS(624), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8840] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_LPAREN,
    STATE(394), 1,
      sym__everything,
    STATE(395), 1,
      sym_exposing_list_item_type_constructors,
    ACTIONS(628), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(632), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [8881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    ACTIONS(638), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8894] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym__name,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    STATE(341), 1,
      sym_type_record_field,
    STATE(408), 1,
      sym_type_open_record_row_variable,
    STATE(411), 1,
      sym_type_record_field_label,
  [8913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(646), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(650), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [8950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [8961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [8972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [8983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(660), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [8996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    STATE(260), 1,
      sym__everything,
    STATE(243), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [9011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [9022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [9033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(668), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [9046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    ACTIONS(672), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [9059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      ts_builtin_sym_end,
    ACTIONS(676), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [9071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    ACTIONS(680), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [9083] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    ACTIONS(684), 1,
      sym__proper_name,
    STATE(135), 1,
      sym_module_name,
    STATE(405), 1,
      sym_module_import_package,
  [9099] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__name,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
  [9115] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__name,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
  [9131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_PIPE,
    ACTIONS(694), 1,
      anon_sym_end,
    STATE(297), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [9145] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__name,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
  [9161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__name,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
  [9177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(259), 2,
      anon_sym_in,
      sym__name,
  [9189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(263), 2,
      anon_sym_in,
      sym__name,
  [9201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__name,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
  [9217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(267), 2,
      anon_sym_in,
      sym__name,
  [9229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(271), 2,
      anon_sym_in,
      sym__name,
  [9241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(251), 2,
      anon_sym_in,
      sym__name,
  [9253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      ts_builtin_sym_end,
    ACTIONS(704), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [9265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(275), 2,
      anon_sym_in,
      sym__name,
  [9277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(287), 2,
      anon_sym_in,
      sym__name,
  [9289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(708), 2,
      sym__proper_name,
      sym__unused_name,
  [9301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(295), 2,
      anon_sym_in,
      sym__name,
  [9313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__name,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym_type_record_field,
    STATE(411), 1,
      sym_type_record_field_label,
  [9329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(291), 2,
      anon_sym_in,
      sym__name,
  [9341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      ts_builtin_sym_end,
    ACTIONS(716), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [9353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(283), 2,
      anon_sym_in,
      sym__name,
  [9365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(255), 2,
      anon_sym_in,
      sym__name,
  [9377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      sym__proper_name,
      sym__unused_name,
    ACTIONS(279), 2,
      anon_sym_in,
      sym__name,
  [9389] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__name,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
  [9405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(383), 1,
      sym_type_annotation,
    ACTIONS(720), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9419] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      sym__name,
    ACTIONS(726), 1,
      sym__proper_name,
    STATE(191), 1,
      sym_expression_variable_name,
    STATE(213), 1,
      sym_expression_constructor_proper_name,
  [9435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(167), 3,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [9447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_PIPE,
    ACTIONS(730), 1,
      sym__proper_name,
    STATE(184), 1,
      sym_type_declaration_constructor_name,
    STATE(220), 1,
      sym_type_declaration_constructor,
  [9463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__name,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym_type_record_field,
    STATE(411), 1,
      sym_type_record_field_label,
  [9479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(736), 2,
      sym__proper_name,
      sym__unused_name,
  [9491] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__name,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
  [9507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym__name,
    ACTIONS(742), 1,
      sym__proper_name,
    STATE(64), 1,
      sym_expression_variable_name,
    STATE(92), 1,
      sym_expression_constructor_proper_name,
  [9523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__name,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym_type_record_field,
    STATE(411), 1,
      sym_type_record_field_label,
  [9539] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym__proper_name,
    ACTIONS(746), 1,
      anon_sym_PIPE,
    STATE(184), 1,
      sym_type_declaration_constructor_name,
    STATE(229), 1,
      sym_type_declaration_constructor,
  [9555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_PIPE,
    ACTIONS(751), 1,
      anon_sym_end,
    STATE(297), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [9569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
    ACTIONS(755), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [9581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__name,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
  [9597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_PIPE,
    ACTIONS(759), 1,
      anon_sym_end,
    STATE(297), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [9611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_expression_call_arguments_repeat1,
    ACTIONS(761), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [9625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__name,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym_type_record_field,
    STATE(411), 1,
      sym_type_record_field_label,
  [9641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(768), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      sym_expression_call_arguments,
  [9654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_DASH_GT,
    ACTIONS(772), 1,
      anon_sym_COLON,
    STATE(428), 1,
      sym_return_type_annotation,
  [9667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RBRACK,
    STATE(365), 1,
      aux_sym_expression_call_arguments_repeat1,
  [9680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_expression_function_repeat1,
  [9693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_PIPE,
    STATE(266), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [9704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_expression_function_repeat1,
  [9717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__name,
    STATE(328), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
  [9730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_alias,
    ACTIONS(786), 1,
      sym__proper_name,
    STATE(190), 1,
      sym_type_declaration_name,
  [9743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__name,
    STATE(397), 1,
      sym_type_record_field,
    STATE(411), 1,
      sym_type_record_field_label,
  [9765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(788), 1,
      anon_sym_DASH_GT,
    STATE(443), 1,
      sym_return_type_annotation,
  [9778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_type_closed_record_repeat1,
  [9791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [9804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(797), 1,
      anon_sym_DASH_GT,
    STATE(441), 1,
      sym_return_type_annotation,
  [9817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_expression_function_repeat1,
  [9830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_expression_record_repeat1,
  [9843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(805), 1,
      anon_sym_DASH_GT,
    STATE(446), 1,
      sym_return_type_annotation,
  [9865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_expression_call_arguments_repeat1,
  [9878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [9891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    ACTIONS(813), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [9904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(816), 1,
      anon_sym_EQ,
    STATE(439), 1,
      sym_type_annotation,
  [9917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [9930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(822), 1,
      anon_sym_DASH_GT,
    STATE(437), 1,
      sym_return_type_annotation,
  [9943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(824), 1,
      anon_sym_EQ,
    STATE(429), 1,
      sym_type_declaration_variables,
  [9956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    ACTIONS(828), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_expression_record_repeat1,
  [9969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(830), 1,
      anon_sym_DASH_GT,
    STATE(425), 1,
      sym_return_type_annotation,
  [9982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_expression_call_arguments_repeat1,
  [9995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_type_declaration_variables_repeat1,
  [10008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_expression_call_arguments_repeat1,
  [10021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [10034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(846), 1,
      anon_sym_EQ,
    STATE(415), 1,
      sym_type_annotation,
  [10047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [10060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_expression_record_repeat1,
  [10073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_COMMA,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
    STATE(343), 1,
      aux_sym_expression_record_repeat1,
  [10086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_RBRACK,
    STATE(332), 1,
      aux_sym_expression_call_arguments_repeat1,
  [10099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      aux_sym_expression_record_repeat1,
  [10112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      aux_sym_expression_record_repeat1,
  [10125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_type_closed_record_repeat1,
  [10138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__name,
    STATE(404), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
  [10151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_expression_record_repeat1,
  [10164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [10177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_type_declaration_variables_repeat1,
  [10190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym__name,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      sym_type_declaration_variable,
  [10203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_exposing_list_repeat1,
  [10216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [10229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
    STATE(349), 1,
      aux_sym_type_closed_record_repeat1,
  [10242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    ACTIONS(899), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_exposing_list_repeat1,
  [10255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym__proper_name,
    STATE(184), 1,
      sym_type_declaration_constructor_name,
    STATE(230), 1,
      sym_type_declaration_constructor,
  [10268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym__name,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      sym_type_declaration_variable,
  [10281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [10294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__name,
    STATE(364), 1,
      sym_type_record_field,
    STATE(411), 1,
      sym_type_record_field_label,
  [10307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_type_closed_record_repeat1,
  [10320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_exposing_list_repeat1,
  [10333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [10346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_expression_function_repeat1,
  [10359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_type_declaration_variables_repeat1,
  [10372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      aux_sym_expression_call_arguments_repeat1,
  [10385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym__proper_name,
    STATE(184), 1,
      sym_type_declaration_constructor_name,
    STATE(237), 1,
      sym_type_declaration_constructor,
  [10398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym__proper_name,
    STATE(184), 1,
      sym_type_declaration_constructor_name,
    STATE(218), 1,
      sym_type_declaration_constructor,
  [10411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_PIPE,
    STATE(300), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [10422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    ACTIONS(929), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_type_closed_record_repeat1,
  [10435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(931), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_expression_call_arguments_repeat1,
  [10448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_COMMA,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      aux_sym_expression_record_repeat1,
  [10461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_expression_call_arguments_repeat1,
  [10474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
    ACTIONS(939), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_expression_record_repeat1,
  [10487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(941), 1,
      anon_sym_DASH_GT,
    STATE(427), 1,
      sym_return_type_annotation,
  [10500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_expression_function_repeat1,
  [10513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(947), 1,
      anon_sym_DASH_GT,
    STATE(432), 1,
      sym_return_type_annotation,
  [10526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(949), 1,
      anon_sym_EQ,
    STATE(452), 1,
      sym_type_annotation,
  [10539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__name,
    STATE(337), 1,
      sym_expression_record_field,
    STATE(442), 1,
      sym_expression_record_field_label,
  [10552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym__proper_name,
    STATE(154), 1,
      sym_type_constructor_proper_name,
  [10562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
    ACTIONS(955), 1,
      anon_sym_SEMI,
  [10572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 2,
      sym__proper_name,
      sym__name,
  [10580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__name,
    STATE(75), 1,
      sym_expression_record_field_label,
  [10590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym__name,
    STATE(401), 1,
      sym_type_declaration_variable,
  [10600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym__proper_name,
    STATE(155), 1,
      sym_module_import_alias,
  [10610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym__proper_name,
    STATE(189), 1,
      sym_pattern_constructor_proper_name,
  [10620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym__name,
    STATE(389), 1,
      sym_foreign_value_declaration_name,
  [10630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym__name,
    STATE(331), 1,
      sym_type_declaration_variable,
  [10672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [10688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(262), 1,
      sym_type_annotation,
  [10698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [10730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym__proper_name,
    STATE(146), 1,
      sym_module_import_alias,
  [10756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym__name,
    STATE(204), 1,
      sym_expression_record_field_label,
  [10774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym__proper_name,
    STATE(327), 1,
      sym_type_declaration_name,
  [10784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_PIPE,
    ACTIONS(987), 1,
      anon_sym_COLON,
  [10810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__proper_name,
    STATE(450), 1,
      sym_module_name,
  [10820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__proper_name,
    STATE(134), 1,
      sym_module_name,
  [10838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym__proper_name,
  [10845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_COLON,
  [10852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_PIPE,
  [10859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_DASH_GT,
  [10866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym__package_name,
  [10873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_COLON,
  [10880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_RBRACE,
  [10887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
  [10894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_LT_DASH,
  [10901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_EQ,
  [10908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_RBRACE,
  [10915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_RBRACE,
  [10922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_SEMI,
  [10929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
  [10936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_then,
  [10943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
  [10950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
  [10957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_DOT_DOT,
  [10964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_RBRACE,
  [10971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_DASH_GT,
  [10978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym__proper_name,
  [10985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_DASH_GT,
  [10992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_DASH_GT,
  [10999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_EQ,
  [11006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_else,
  [11013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
  [11020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_DASH_GT,
  [11027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_COLON,
  [11034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_DASH_GT,
  [11041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
  [11048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_SEMI,
  [11055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_DASH_GT,
  [11062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
  [11069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_EQ,
  [11076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_else,
  [11083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_DASH_GT,
  [11090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_EQ,
  [11097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_DASH_GT,
  [11104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_LBRACE,
  [11111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_DASH_GT,
  [11118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_DASH_GT,
  [11125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_PIPE,
  [11132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_DASH_GT,
  [11139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_LPAREN,
  [11146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_exports,
  [11153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_EQ,
  [11160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_EQ,
  [11167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_DASH_GT,
  [11174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_with,
  [11181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_LBRACE,
  [11188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_LPAREN,
  [11195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_PIPE,
  [11202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_then,
  [11209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_with,
  [11216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_DASH_GT,
  [11223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 364,
  [SMALL_STATE(7)] = 455,
  [SMALL_STATE(8)] = 539,
  [SMALL_STATE(9)] = 623,
  [SMALL_STATE(10)] = 707,
  [SMALL_STATE(11)] = 791,
  [SMALL_STATE(12)] = 875,
  [SMALL_STATE(13)] = 959,
  [SMALL_STATE(14)] = 1043,
  [SMALL_STATE(15)] = 1127,
  [SMALL_STATE(16)] = 1211,
  [SMALL_STATE(17)] = 1295,
  [SMALL_STATE(18)] = 1379,
  [SMALL_STATE(19)] = 1463,
  [SMALL_STATE(20)] = 1544,
  [SMALL_STATE(21)] = 1625,
  [SMALL_STATE(22)] = 1706,
  [SMALL_STATE(23)] = 1787,
  [SMALL_STATE(24)] = 1868,
  [SMALL_STATE(25)] = 1949,
  [SMALL_STATE(26)] = 2030,
  [SMALL_STATE(27)] = 2111,
  [SMALL_STATE(28)] = 2192,
  [SMALL_STATE(29)] = 2273,
  [SMALL_STATE(30)] = 2354,
  [SMALL_STATE(31)] = 2435,
  [SMALL_STATE(32)] = 2516,
  [SMALL_STATE(33)] = 2597,
  [SMALL_STATE(34)] = 2678,
  [SMALL_STATE(35)] = 2759,
  [SMALL_STATE(36)] = 2840,
  [SMALL_STATE(37)] = 2921,
  [SMALL_STATE(38)] = 3002,
  [SMALL_STATE(39)] = 3083,
  [SMALL_STATE(40)] = 3164,
  [SMALL_STATE(41)] = 3245,
  [SMALL_STATE(42)] = 3326,
  [SMALL_STATE(43)] = 3407,
  [SMALL_STATE(44)] = 3488,
  [SMALL_STATE(45)] = 3569,
  [SMALL_STATE(46)] = 3650,
  [SMALL_STATE(47)] = 3731,
  [SMALL_STATE(48)] = 3812,
  [SMALL_STATE(49)] = 3893,
  [SMALL_STATE(50)] = 3974,
  [SMALL_STATE(51)] = 4055,
  [SMALL_STATE(52)] = 4136,
  [SMALL_STATE(53)] = 4217,
  [SMALL_STATE(54)] = 4298,
  [SMALL_STATE(55)] = 4379,
  [SMALL_STATE(56)] = 4460,
  [SMALL_STATE(57)] = 4541,
  [SMALL_STATE(58)] = 4605,
  [SMALL_STATE(59)] = 4669,
  [SMALL_STATE(60)] = 4721,
  [SMALL_STATE(61)] = 4773,
  [SMALL_STATE(62)] = 4799,
  [SMALL_STATE(63)] = 4828,
  [SMALL_STATE(64)] = 4855,
  [SMALL_STATE(65)] = 4880,
  [SMALL_STATE(66)] = 4905,
  [SMALL_STATE(67)] = 4930,
  [SMALL_STATE(68)] = 4955,
  [SMALL_STATE(69)] = 4980,
  [SMALL_STATE(70)] = 5005,
  [SMALL_STATE(71)] = 5030,
  [SMALL_STATE(72)] = 5055,
  [SMALL_STATE(73)] = 5080,
  [SMALL_STATE(74)] = 5105,
  [SMALL_STATE(75)] = 5130,
  [SMALL_STATE(76)] = 5155,
  [SMALL_STATE(77)] = 5180,
  [SMALL_STATE(78)] = 5205,
  [SMALL_STATE(79)] = 5230,
  [SMALL_STATE(80)] = 5255,
  [SMALL_STATE(81)] = 5282,
  [SMALL_STATE(82)] = 5307,
  [SMALL_STATE(83)] = 5332,
  [SMALL_STATE(84)] = 5361,
  [SMALL_STATE(85)] = 5386,
  [SMALL_STATE(86)] = 5411,
  [SMALL_STATE(87)] = 5436,
  [SMALL_STATE(88)] = 5472,
  [SMALL_STATE(89)] = 5510,
  [SMALL_STATE(90)] = 5546,
  [SMALL_STATE(91)] = 5570,
  [SMALL_STATE(92)] = 5608,
  [SMALL_STATE(93)] = 5632,
  [SMALL_STATE(94)] = 5656,
  [SMALL_STATE(95)] = 5694,
  [SMALL_STATE(96)] = 5732,
  [SMALL_STATE(97)] = 5770,
  [SMALL_STATE(98)] = 5808,
  [SMALL_STATE(99)] = 5846,
  [SMALL_STATE(100)] = 5881,
  [SMALL_STATE(101)] = 5916,
  [SMALL_STATE(102)] = 5951,
  [SMALL_STATE(103)] = 5986,
  [SMALL_STATE(104)] = 6021,
  [SMALL_STATE(105)] = 6056,
  [SMALL_STATE(106)] = 6091,
  [SMALL_STATE(107)] = 6126,
  [SMALL_STATE(108)] = 6151,
  [SMALL_STATE(109)] = 6186,
  [SMALL_STATE(110)] = 6221,
  [SMALL_STATE(111)] = 6256,
  [SMALL_STATE(112)] = 6291,
  [SMALL_STATE(113)] = 6313,
  [SMALL_STATE(114)] = 6335,
  [SMALL_STATE(115)] = 6357,
  [SMALL_STATE(116)] = 6379,
  [SMALL_STATE(117)] = 6401,
  [SMALL_STATE(118)] = 6423,
  [SMALL_STATE(119)] = 6445,
  [SMALL_STATE(120)] = 6467,
  [SMALL_STATE(121)] = 6489,
  [SMALL_STATE(122)] = 6511,
  [SMALL_STATE(123)] = 6533,
  [SMALL_STATE(124)] = 6555,
  [SMALL_STATE(125)] = 6584,
  [SMALL_STATE(126)] = 6613,
  [SMALL_STATE(127)] = 6642,
  [SMALL_STATE(128)] = 6675,
  [SMALL_STATE(129)] = 6707,
  [SMALL_STATE(130)] = 6739,
  [SMALL_STATE(131)] = 6771,
  [SMALL_STATE(132)] = 6802,
  [SMALL_STATE(133)] = 6823,
  [SMALL_STATE(134)] = 6852,
  [SMALL_STATE(135)] = 6879,
  [SMALL_STATE(136)] = 6906,
  [SMALL_STATE(137)] = 6929,
  [SMALL_STATE(138)] = 6960,
  [SMALL_STATE(139)] = 6991,
  [SMALL_STATE(140)] = 7020,
  [SMALL_STATE(141)] = 7051,
  [SMALL_STATE(142)] = 7082,
  [SMALL_STATE(143)] = 7113,
  [SMALL_STATE(144)] = 7141,
  [SMALL_STATE(145)] = 7169,
  [SMALL_STATE(146)] = 7197,
  [SMALL_STATE(147)] = 7221,
  [SMALL_STATE(148)] = 7243,
  [SMALL_STATE(149)] = 7271,
  [SMALL_STATE(150)] = 7293,
  [SMALL_STATE(151)] = 7311,
  [SMALL_STATE(152)] = 7329,
  [SMALL_STATE(153)] = 7347,
  [SMALL_STATE(154)] = 7369,
  [SMALL_STATE(155)] = 7387,
  [SMALL_STATE(156)] = 7411,
  [SMALL_STATE(157)] = 7439,
  [SMALL_STATE(158)] = 7456,
  [SMALL_STATE(159)] = 7481,
  [SMALL_STATE(160)] = 7498,
  [SMALL_STATE(161)] = 7515,
  [SMALL_STATE(162)] = 7532,
  [SMALL_STATE(163)] = 7549,
  [SMALL_STATE(164)] = 7574,
  [SMALL_STATE(165)] = 7591,
  [SMALL_STATE(166)] = 7608,
  [SMALL_STATE(167)] = 7625,
  [SMALL_STATE(168)] = 7642,
  [SMALL_STATE(169)] = 7659,
  [SMALL_STATE(170)] = 7676,
  [SMALL_STATE(171)] = 7693,
  [SMALL_STATE(172)] = 7712,
  [SMALL_STATE(173)] = 7728,
  [SMALL_STATE(174)] = 7744,
  [SMALL_STATE(175)] = 7760,
  [SMALL_STATE(176)] = 7776,
  [SMALL_STATE(177)] = 7791,
  [SMALL_STATE(178)] = 7806,
  [SMALL_STATE(179)] = 7821,
  [SMALL_STATE(180)] = 7838,
  [SMALL_STATE(181)] = 7857,
  [SMALL_STATE(182)] = 7872,
  [SMALL_STATE(183)] = 7887,
  [SMALL_STATE(184)] = 7904,
  [SMALL_STATE(185)] = 7923,
  [SMALL_STATE(186)] = 7938,
  [SMALL_STATE(187)] = 7953,
  [SMALL_STATE(188)] = 7968,
  [SMALL_STATE(189)] = 7983,
  [SMALL_STATE(190)] = 8000,
  [SMALL_STATE(191)] = 8021,
  [SMALL_STATE(192)] = 8036,
  [SMALL_STATE(193)] = 8051,
  [SMALL_STATE(194)] = 8066,
  [SMALL_STATE(195)] = 8085,
  [SMALL_STATE(196)] = 8100,
  [SMALL_STATE(197)] = 8121,
  [SMALL_STATE(198)] = 8136,
  [SMALL_STATE(199)] = 8155,
  [SMALL_STATE(200)] = 8170,
  [SMALL_STATE(201)] = 8187,
  [SMALL_STATE(202)] = 8202,
  [SMALL_STATE(203)] = 8217,
  [SMALL_STATE(204)] = 8238,
  [SMALL_STATE(205)] = 8253,
  [SMALL_STATE(206)] = 8268,
  [SMALL_STATE(207)] = 8283,
  [SMALL_STATE(208)] = 8298,
  [SMALL_STATE(209)] = 8313,
  [SMALL_STATE(210)] = 8328,
  [SMALL_STATE(211)] = 8343,
  [SMALL_STATE(212)] = 8364,
  [SMALL_STATE(213)] = 8379,
  [SMALL_STATE(214)] = 8393,
  [SMALL_STATE(215)] = 8407,
  [SMALL_STATE(216)] = 8425,
  [SMALL_STATE(217)] = 8443,
  [SMALL_STATE(218)] = 8461,
  [SMALL_STATE(219)] = 8479,
  [SMALL_STATE(220)] = 8497,
  [SMALL_STATE(221)] = 8515,
  [SMALL_STATE(222)] = 8529,
  [SMALL_STATE(223)] = 8543,
  [SMALL_STATE(224)] = 8561,
  [SMALL_STATE(225)] = 8579,
  [SMALL_STATE(226)] = 8591,
  [SMALL_STATE(227)] = 8605,
  [SMALL_STATE(228)] = 8619,
  [SMALL_STATE(229)] = 8633,
  [SMALL_STATE(230)] = 8651,
  [SMALL_STATE(231)] = 8669,
  [SMALL_STATE(232)] = 8682,
  [SMALL_STATE(233)] = 8693,
  [SMALL_STATE(234)] = 8708,
  [SMALL_STATE(235)] = 8721,
  [SMALL_STATE(236)] = 8734,
  [SMALL_STATE(237)] = 8747,
  [SMALL_STATE(238)] = 8760,
  [SMALL_STATE(239)] = 8773,
  [SMALL_STATE(240)] = 8786,
  [SMALL_STATE(241)] = 8801,
  [SMALL_STATE(242)] = 8814,
  [SMALL_STATE(243)] = 8827,
  [SMALL_STATE(244)] = 8840,
  [SMALL_STATE(245)] = 8857,
  [SMALL_STATE(246)] = 8870,
  [SMALL_STATE(247)] = 8881,
  [SMALL_STATE(248)] = 8894,
  [SMALL_STATE(249)] = 8913,
  [SMALL_STATE(250)] = 8926,
  [SMALL_STATE(251)] = 8939,
  [SMALL_STATE(252)] = 8950,
  [SMALL_STATE(253)] = 8961,
  [SMALL_STATE(254)] = 8972,
  [SMALL_STATE(255)] = 8983,
  [SMALL_STATE(256)] = 8996,
  [SMALL_STATE(257)] = 9011,
  [SMALL_STATE(258)] = 9022,
  [SMALL_STATE(259)] = 9033,
  [SMALL_STATE(260)] = 9046,
  [SMALL_STATE(261)] = 9059,
  [SMALL_STATE(262)] = 9071,
  [SMALL_STATE(263)] = 9083,
  [SMALL_STATE(264)] = 9099,
  [SMALL_STATE(265)] = 9115,
  [SMALL_STATE(266)] = 9131,
  [SMALL_STATE(267)] = 9145,
  [SMALL_STATE(268)] = 9161,
  [SMALL_STATE(269)] = 9177,
  [SMALL_STATE(270)] = 9189,
  [SMALL_STATE(271)] = 9201,
  [SMALL_STATE(272)] = 9217,
  [SMALL_STATE(273)] = 9229,
  [SMALL_STATE(274)] = 9241,
  [SMALL_STATE(275)] = 9253,
  [SMALL_STATE(276)] = 9265,
  [SMALL_STATE(277)] = 9277,
  [SMALL_STATE(278)] = 9289,
  [SMALL_STATE(279)] = 9301,
  [SMALL_STATE(280)] = 9313,
  [SMALL_STATE(281)] = 9329,
  [SMALL_STATE(282)] = 9341,
  [SMALL_STATE(283)] = 9353,
  [SMALL_STATE(284)] = 9365,
  [SMALL_STATE(285)] = 9377,
  [SMALL_STATE(286)] = 9389,
  [SMALL_STATE(287)] = 9405,
  [SMALL_STATE(288)] = 9419,
  [SMALL_STATE(289)] = 9435,
  [SMALL_STATE(290)] = 9447,
  [SMALL_STATE(291)] = 9463,
  [SMALL_STATE(292)] = 9479,
  [SMALL_STATE(293)] = 9491,
  [SMALL_STATE(294)] = 9507,
  [SMALL_STATE(295)] = 9523,
  [SMALL_STATE(296)] = 9539,
  [SMALL_STATE(297)] = 9555,
  [SMALL_STATE(298)] = 9569,
  [SMALL_STATE(299)] = 9581,
  [SMALL_STATE(300)] = 9597,
  [SMALL_STATE(301)] = 9611,
  [SMALL_STATE(302)] = 9625,
  [SMALL_STATE(303)] = 9641,
  [SMALL_STATE(304)] = 9654,
  [SMALL_STATE(305)] = 9667,
  [SMALL_STATE(306)] = 9680,
  [SMALL_STATE(307)] = 9693,
  [SMALL_STATE(308)] = 9704,
  [SMALL_STATE(309)] = 9717,
  [SMALL_STATE(310)] = 9730,
  [SMALL_STATE(311)] = 9743,
  [SMALL_STATE(312)] = 9752,
  [SMALL_STATE(313)] = 9765,
  [SMALL_STATE(314)] = 9778,
  [SMALL_STATE(315)] = 9791,
  [SMALL_STATE(316)] = 9804,
  [SMALL_STATE(317)] = 9817,
  [SMALL_STATE(318)] = 9830,
  [SMALL_STATE(319)] = 9843,
  [SMALL_STATE(320)] = 9852,
  [SMALL_STATE(321)] = 9865,
  [SMALL_STATE(322)] = 9878,
  [SMALL_STATE(323)] = 9891,
  [SMALL_STATE(324)] = 9904,
  [SMALL_STATE(325)] = 9917,
  [SMALL_STATE(326)] = 9930,
  [SMALL_STATE(327)] = 9943,
  [SMALL_STATE(328)] = 9956,
  [SMALL_STATE(329)] = 9969,
  [SMALL_STATE(330)] = 9982,
  [SMALL_STATE(331)] = 9995,
  [SMALL_STATE(332)] = 10008,
  [SMALL_STATE(333)] = 10021,
  [SMALL_STATE(334)] = 10034,
  [SMALL_STATE(335)] = 10047,
  [SMALL_STATE(336)] = 10060,
  [SMALL_STATE(337)] = 10073,
  [SMALL_STATE(338)] = 10086,
  [SMALL_STATE(339)] = 10099,
  [SMALL_STATE(340)] = 10112,
  [SMALL_STATE(341)] = 10125,
  [SMALL_STATE(342)] = 10138,
  [SMALL_STATE(343)] = 10151,
  [SMALL_STATE(344)] = 10164,
  [SMALL_STATE(345)] = 10177,
  [SMALL_STATE(346)] = 10190,
  [SMALL_STATE(347)] = 10203,
  [SMALL_STATE(348)] = 10216,
  [SMALL_STATE(349)] = 10229,
  [SMALL_STATE(350)] = 10242,
  [SMALL_STATE(351)] = 10255,
  [SMALL_STATE(352)] = 10268,
  [SMALL_STATE(353)] = 10281,
  [SMALL_STATE(354)] = 10294,
  [SMALL_STATE(355)] = 10307,
  [SMALL_STATE(356)] = 10320,
  [SMALL_STATE(357)] = 10333,
  [SMALL_STATE(358)] = 10346,
  [SMALL_STATE(359)] = 10359,
  [SMALL_STATE(360)] = 10372,
  [SMALL_STATE(361)] = 10385,
  [SMALL_STATE(362)] = 10398,
  [SMALL_STATE(363)] = 10411,
  [SMALL_STATE(364)] = 10422,
  [SMALL_STATE(365)] = 10435,
  [SMALL_STATE(366)] = 10448,
  [SMALL_STATE(367)] = 10461,
  [SMALL_STATE(368)] = 10474,
  [SMALL_STATE(369)] = 10487,
  [SMALL_STATE(370)] = 10500,
  [SMALL_STATE(371)] = 10513,
  [SMALL_STATE(372)] = 10526,
  [SMALL_STATE(373)] = 10539,
  [SMALL_STATE(374)] = 10552,
  [SMALL_STATE(375)] = 10562,
  [SMALL_STATE(376)] = 10572,
  [SMALL_STATE(377)] = 10580,
  [SMALL_STATE(378)] = 10590,
  [SMALL_STATE(379)] = 10600,
  [SMALL_STATE(380)] = 10610,
  [SMALL_STATE(381)] = 10620,
  [SMALL_STATE(382)] = 10630,
  [SMALL_STATE(383)] = 10638,
  [SMALL_STATE(384)] = 10646,
  [SMALL_STATE(385)] = 10654,
  [SMALL_STATE(386)] = 10662,
  [SMALL_STATE(387)] = 10672,
  [SMALL_STATE(388)] = 10680,
  [SMALL_STATE(389)] = 10688,
  [SMALL_STATE(390)] = 10698,
  [SMALL_STATE(391)] = 10706,
  [SMALL_STATE(392)] = 10714,
  [SMALL_STATE(393)] = 10722,
  [SMALL_STATE(394)] = 10730,
  [SMALL_STATE(395)] = 10738,
  [SMALL_STATE(396)] = 10746,
  [SMALL_STATE(397)] = 10756,
  [SMALL_STATE(398)] = 10764,
  [SMALL_STATE(399)] = 10774,
  [SMALL_STATE(400)] = 10784,
  [SMALL_STATE(401)] = 10792,
  [SMALL_STATE(402)] = 10800,
  [SMALL_STATE(403)] = 10810,
  [SMALL_STATE(404)] = 10820,
  [SMALL_STATE(405)] = 10828,
  [SMALL_STATE(406)] = 10838,
  [SMALL_STATE(407)] = 10845,
  [SMALL_STATE(408)] = 10852,
  [SMALL_STATE(409)] = 10859,
  [SMALL_STATE(410)] = 10866,
  [SMALL_STATE(411)] = 10873,
  [SMALL_STATE(412)] = 10880,
  [SMALL_STATE(413)] = 10887,
  [SMALL_STATE(414)] = 10894,
  [SMALL_STATE(415)] = 10901,
  [SMALL_STATE(416)] = 10908,
  [SMALL_STATE(417)] = 10915,
  [SMALL_STATE(418)] = 10922,
  [SMALL_STATE(419)] = 10929,
  [SMALL_STATE(420)] = 10936,
  [SMALL_STATE(421)] = 10943,
  [SMALL_STATE(422)] = 10950,
  [SMALL_STATE(423)] = 10957,
  [SMALL_STATE(424)] = 10964,
  [SMALL_STATE(425)] = 10971,
  [SMALL_STATE(426)] = 10978,
  [SMALL_STATE(427)] = 10985,
  [SMALL_STATE(428)] = 10992,
  [SMALL_STATE(429)] = 10999,
  [SMALL_STATE(430)] = 11006,
  [SMALL_STATE(431)] = 11013,
  [SMALL_STATE(432)] = 11020,
  [SMALL_STATE(433)] = 11027,
  [SMALL_STATE(434)] = 11034,
  [SMALL_STATE(435)] = 11041,
  [SMALL_STATE(436)] = 11048,
  [SMALL_STATE(437)] = 11055,
  [SMALL_STATE(438)] = 11062,
  [SMALL_STATE(439)] = 11069,
  [SMALL_STATE(440)] = 11076,
  [SMALL_STATE(441)] = 11083,
  [SMALL_STATE(442)] = 11090,
  [SMALL_STATE(443)] = 11097,
  [SMALL_STATE(444)] = 11104,
  [SMALL_STATE(445)] = 11111,
  [SMALL_STATE(446)] = 11118,
  [SMALL_STATE(447)] = 11125,
  [SMALL_STATE(448)] = 11132,
  [SMALL_STATE(449)] = 11139,
  [SMALL_STATE(450)] = 11146,
  [SMALL_STATE(451)] = 11153,
  [SMALL_STATE(452)] = 11160,
  [SMALL_STATE(453)] = 11167,
  [SMALL_STATE(454)] = 11174,
  [SMALL_STATE(455)] = 11181,
  [SMALL_STATE(456)] = 11188,
  [SMALL_STATE(457)] = 11195,
  [SMALL_STATE(458)] = 11202,
  [SMALL_STATE(459)] = 11209,
  [SMALL_STATE(460)] = 11216,
  [SMALL_STATE(461)] = 11223,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field_label, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_field_label, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression2, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression2, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression1, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression1, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 5, .production_id = 49),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 5, .production_id = 49),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_update, 5, .production_id = 45),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_update, 5, .production_id = 45),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 5, .production_id = 44),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 5, .production_id = 44),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call, 2, .production_id = 17),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call, 2, .production_id = 17),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_parens, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_parens, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 3, .production_id = 26),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 3, .production_id = 26),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_update, 7, .production_id = 61),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_update, 7, .production_id = 61),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 58),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 58),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_access, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_access, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 40),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 40),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_update, 6, .production_id = 54),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_update, 6, .production_id = 54),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 4, .production_id = 39),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 4, .production_id = 39),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable_name, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable_name, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 3, .production_id = 28),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 3, .production_id = 28),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 51),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 51),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 29),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 29),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 4, .production_id = 35),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 4, .production_id = 35),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression3, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression3, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 63),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_function, 7, .production_id = 63),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_let, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_let, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 9, .production_id = 71),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_function, 9, .production_id = 71),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 70),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_function, 8, .production_id = 70),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 69),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_function, 8, .production_id = 69),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 64),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_function, 7, .production_id = 64),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_if, 6, .production_id = 57),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_if, 6, .production_id = 57),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_effect, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 5, .production_id = 48),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_function, 5, .production_id = 48),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 56),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_function, 6, .production_id = 56),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match, 5, .production_id = 50),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_match, 5, .production_id = 50),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 55),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_function, 6, .production_id = 55),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(388),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(310),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(381),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 6),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_let_repeat1, 2), SHIFT_REPEAT(254),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_let_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_let_repeat1, 2), SHIFT_REPEAT(187),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_let_repeat1, 2), SHIFT_REPEAT(257),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor_proper_name, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_constructor_proper_name, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 9),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 9),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 2, .production_id = 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 2, .production_id = 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type1, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type1, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 13),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 13),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variable, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_constructor, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(406),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_constructor, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 20),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 20),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 5, .production_id = 44),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_closed_record, 5, .production_id = 44),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 7, .production_id = 67),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_open_record, 7, .production_id = 67),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 5, .production_id = 53),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_open_record, 5, .production_id = 53),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 4, .production_id = 51),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_call_arguments, 4, .production_id = 51),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 3, .production_id = 26),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_closed_record, 3, .production_id = 26),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 5, .production_id = 58),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_call_arguments, 5, .production_id = 58),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 3, .production_id = 40),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_call_arguments, 3, .production_id = 40),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 4, .production_id = 35),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_closed_record, 4, .production_id = 35),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 6, .production_id = 60),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_open_record, 6, .production_id = 60),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_closed_record, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call, 2, .production_id = 17),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_call, 2, .production_id = 17),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_parens, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_parens, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 7, .production_id = 66),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_function, 7, .production_id = 66),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 6, .production_id = 59),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_function, 6, .production_id = 59),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 4, .production_id = 41),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_function, 4, .production_id = 41),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 5, .production_id = 52),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_function, 5, .production_id = 52),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 1, .production_id = 16),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_constructor, 1, .production_id = 16),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_proper_name, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_empty, 2, .production_id = 5),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_empty, 2, .production_id = 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(263),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_annotation, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__everything, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__everything, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_name, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_constructor_name, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(361),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 33),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 33),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 23),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 23),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 34),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 34),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 25),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 25),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_name, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_name, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind_name, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 43),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 43),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_alias, 1),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import_alias, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, .production_id = 15),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 4, .production_id = 15),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 30),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 30),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_empty, 3, .production_id = 10),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_empty, 3, .production_id = 10),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 4, .production_id = 35),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_constructor_fields, 4, .production_id = 35),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 4, .production_id = 32),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_variables, 4, .production_id = 32),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 19),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 19),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 4),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exposing_list, 4),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 8),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 8),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 5, .production_id = 44),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_constructor_fields, 5, .production_id = 44),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 14),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 14),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_header, 4, .production_id = 7),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_header, 4, .production_id = 7),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list_item_type, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 3, .production_id = 22),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_variables, 3, .production_id = 22),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 4, .production_id = 35),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 5),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exposing_list, 5),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 5, .production_id = 42),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_variables, 5, .production_id = 42),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 3, .production_id = 26),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_constructor_fields, 3, .production_id = 26),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 3, .production_id = 26),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_variable, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 3),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exposing_list, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_unused, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 5, .production_id = 44),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 2, .production_id = 24),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_constructor, 2, .production_id = 24),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_everything, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exposing_everything, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 6, .production_id = 31),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias_declaration, 6, .production_id = 31),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_value_declaration, 3, .production_id = 11),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreign_value_declaration, 3, .production_id = 11),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 4, .production_id = 18),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 4, .production_id = 18),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_let_value_declaration, 4, .production_id = 47),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_let_value_declaration, 4, .production_id = 47),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 5, .production_id = 21),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias_declaration, 5, .production_id = 21),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 1, .production_id = 27),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_let_value_declaration, 3, .production_id = 37),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_let_value_declaration, 3, .production_id = 37),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2), SHIFT_REPEAT(158),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 3, .production_id = 12),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 3, .production_id = 12),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2), SHIFT_REPEAT(55),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_record_update_target, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2), SHIFT_REPEAT(101),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list_item_type_name, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2), SHIFT_REPEAT(163),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_let_binder, 1, .production_id = 27),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2), SHIFT_REPEAT(342),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2), SHIFT_REPEAT(378),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_closed_record_repeat1, 2), SHIFT_REPEAT(312),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_closed_record_repeat1, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2), SHIFT_REPEAT(224),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2),
  [918] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2), SHIFT_REPEAT(145),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 2, .production_id = 38),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list_item_value, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration_name, 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variable, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field, 3, .production_id = 36),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match_arm, 4, .production_id = 65),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list_item_type_constructors, 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list_item_type, 2),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field, 3, .production_id = 36),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record_row_variable, 1),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field_label, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_value_declaration_name, 1),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind, 5, .production_id = 62),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_let_binder, 2, .production_id = 38),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 3, .production_id = 46),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_return, 2),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_package, 3),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_annotation, 2),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_let, 6, .production_id = 68),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1093] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__name,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
