/*
* EEZ Generic Firmware
* Copyright (C) 2021-present, Envox d.o.o.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.

* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.

* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

namespace eez {
namespace flow {
namespace defs_v3 {

enum ComponentTypes {
    COMPONENT_TYPE_NONE = 0,
    COMPONENT_TYPE_CONTAINER_WIDGET = 1,
    COMPONENT_TYPE_LIST_WIDGET = 2,
    COMPONENT_TYPE_GRID_WIDGET = 3,
    COMPONENT_TYPE_SELECT_WIDGET = 4,
    COMPONENT_TYPE_DISPLAY_DATA_WIDGET = 5,
    COMPONENT_TYPE_TEXT_WIDGET = 6,
    COMPONENT_TYPE_MULTILINE_TEXT_WIDGET = 7,
    COMPONENT_TYPE_RECTANGLE_WIDGET = 8,
    COMPONENT_TYPE_BITMAP_WIDGET = 9,
    COMPONENT_TYPE_BUTTON_WIDGET = 10,
    COMPONENT_TYPE_TOGGLE_BUTTON_WIDGET = 11,
    COMPONENT_TYPE_BUTTON_GROUP_WIDGET = 12,
    COMPONENT_TYPE_BAR_GRAPH_WIDGET = 14,
    COMPONENT_TYPE_LAYOUT_VIEW_WIDGET = 15,
    COMPONENT_TYPE_YTGRAPH_WIDGET = 16,
    COMPONENT_TYPE_UP_DOWN_WIDGET = 17,
    COMPONENT_TYPE_LIST_GRAPH_WIDGET = 18,
    COMPONENT_TYPE_APP_VIEW_WIDGET = 19,
    COMPONENT_TYPE_SCROLL_BAR_WIDGET = 20,
    COMPONENT_TYPE_PROGRESS_WIDGET = 21,
    COMPONENT_TYPE_CANVAS_WIDGET = 22,
    COMPONENT_TYPE_GAUGE_EMBEDDED_WIDGET = 23,
    COMPONENT_TYPE_INPUT_EMBEDDED_WIDGET = 24,
    COMPONENT_TYPE_ROLLER_WIDGET = 25,
    COMPONENT_TYPE_SWITCH_WIDGET = 26,
    COMPONENT_TYPE_SLIDER_WIDGET = 27,
    COMPONENT_TYPE_DROP_DOWN_LIST_WIDGET = 28,
    COMPONENT_TYPE_START_ACTION = 1001,
    COMPONENT_TYPE_END_ACTION = 1002,
    COMPONENT_TYPE_INPUT_ACTION = 1003,
    COMPONENT_TYPE_OUTPUT_ACTION = 1004,
    COMPONENT_TYPE_WATCH_VARIABLE_ACTION = 1005,
    COMPONENT_TYPE_EVAL_EXPR_ACTION = 1006,
    COMPONENT_TYPE_SET_VARIABLE_ACTION = 1007,
    COMPONENT_TYPE_SWITCH_ACTION = 1008,
    COMPONENT_TYPE_COMPARE_ACTION = 1009,
    COMPONENT_TYPE_IS_TRUE_ACTION = 1010,
    COMPONENT_TYPE_CONSTANT_ACTION = 1011,
    COMPONENT_TYPE_LOG_ACTION = 1012,
    COMPONENT_TYPE_CALL_ACTION_ACTION = 1013,
    COMPONENT_TYPE_DELAY_ACTION = 1014,
    COMPONENT_TYPE_ERROR_ACTION = 1015,
    COMPONENT_TYPE_CATCH_ERROR_ACTION = 1016,
    COMPONENT_TYPE_COUNTER_ACTION = 1017,
    COMPONENT_TYPE_LOOP_ACTION = 1018,
    COMPONENT_TYPE_SHOW_PAGE_ACTION = 1019,
    COMPONENT_TYPE_SCPIACTION = 1020,
    COMPONENT_TYPE_SHOW_MESSAGE_BOX_ACTION = 1021,
    COMPONENT_TYPE_SHOW_KEYBOARD_ACTION = 1022,
    COMPONENT_TYPE_SHOW_KEYPAD_ACTION = 1023,
    COMPONENT_TYPE_NOOP_ACTION = 1024,
    COMPONENT_TYPE_COMMENT_ACTION = 1025,
    COMPONENT_TYPE_SELECT_LANGUAGE_ACTION = 1026,
    COMPONENT_TYPE_SET_PAGE_DIRECTION_ACTION = 1027,
    COMPONENT_TYPE_ANIMATE_ACTION = 1028,
    COMPONENT_TYPE_ON_EVENT_ACTION = 1029,
    FIRST_DASHBOARD_COMPONENT_TYPE = 10000
};

enum Component_CONTAINER_WIDGET_Properties {
    CONTAINER_WIDGET_PROPERTY_DATA = 0,
    CONTAINER_WIDGET_PROPERTY_VISIBLE = 1,
    CONTAINER_WIDGET_PROPERTY_OVERLAY = 2
};

enum Component_LIST_WIDGET_Properties {
    LIST_WIDGET_PROPERTY_DATA = 0,
    LIST_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_GRID_WIDGET_Properties {
    GRID_WIDGET_PROPERTY_DATA = 0,
    GRID_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_SELECT_WIDGET_Properties {
    SELECT_WIDGET_PROPERTY_DATA = 0,
    SELECT_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_DISPLAY_DATA_WIDGET_Properties {
    DISPLAY_DATA_WIDGET_PROPERTY_DATA = 0,
    DISPLAY_DATA_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_TEXT_WIDGET_Properties {
    TEXT_WIDGET_PROPERTY_DATA = 0,
    TEXT_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_MULTILINE_TEXT_WIDGET_Properties {
    MULTILINE_TEXT_WIDGET_PROPERTY_DATA = 0,
    MULTILINE_TEXT_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_RECTANGLE_WIDGET_Properties {
    RECTANGLE_WIDGET_PROPERTY_DATA = 0,
    RECTANGLE_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_BITMAP_WIDGET_Properties {
    BITMAP_WIDGET_PROPERTY_DATA = 0,
    BITMAP_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_BUTTON_WIDGET_Properties {
    BUTTON_WIDGET_PROPERTY_DATA = 0,
    BUTTON_WIDGET_PROPERTY_VISIBLE = 1,
    BUTTON_WIDGET_PROPERTY_ENABLED = 2
};

enum Component_TOGGLE_BUTTON_WIDGET_Properties {
    TOGGLE_BUTTON_WIDGET_PROPERTY_DATA = 0,
    TOGGLE_BUTTON_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_BUTTON_GROUP_WIDGET_Properties {
    BUTTON_GROUP_WIDGET_PROPERTY_DATA = 0,
    BUTTON_GROUP_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_BAR_GRAPH_WIDGET_Properties {
    BAR_GRAPH_WIDGET_PROPERTY_DATA = 0,
    BAR_GRAPH_WIDGET_PROPERTY_VISIBLE = 1,
    BAR_GRAPH_WIDGET_PROPERTY_LINE1_DATA = 2,
    BAR_GRAPH_WIDGET_PROPERTY_LINE2_DATA = 3
};

enum Component_LAYOUT_VIEW_WIDGET_Properties {
    LAYOUT_VIEW_WIDGET_PROPERTY_DATA = 0,
    LAYOUT_VIEW_WIDGET_PROPERTY_VISIBLE = 1,
    LAYOUT_VIEW_WIDGET_PROPERTY_CONTEXT = 2
};

enum Component_YTGRAPH_WIDGET_Properties {
    YTGRAPH_WIDGET_PROPERTY_DATA = 0,
    YTGRAPH_WIDGET_PROPERTY_VISIBLE = 1,
    YTGRAPH_WIDGET_PROPERTY_Y2_DATA = 2
};

enum Component_UP_DOWN_WIDGET_Properties {
    UP_DOWN_WIDGET_PROPERTY_DATA = 0,
    UP_DOWN_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_LIST_GRAPH_WIDGET_Properties {
    LIST_GRAPH_WIDGET_PROPERTY_DATA = 0,
    LIST_GRAPH_WIDGET_PROPERTY_VISIBLE = 1,
    LIST_GRAPH_WIDGET_PROPERTY_DWELL_DATA = 2,
    LIST_GRAPH_WIDGET_PROPERTY_Y1_DATA = 3,
    LIST_GRAPH_WIDGET_PROPERTY_Y2_DATA = 4,
    LIST_GRAPH_WIDGET_PROPERTY_CURSOR_DATA = 5
};

enum Component_APP_VIEW_WIDGET_Properties {
    APP_VIEW_WIDGET_PROPERTY_DATA = 0,
    APP_VIEW_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_SCROLL_BAR_WIDGET_Properties {
    SCROLL_BAR_WIDGET_PROPERTY_DATA = 0,
    SCROLL_BAR_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_PROGRESS_WIDGET_Properties {
    PROGRESS_WIDGET_PROPERTY_DATA = 0,
    PROGRESS_WIDGET_PROPERTY_VISIBLE = 1,
    PROGRESS_WIDGET_PROPERTY_MIN = 2,
    PROGRESS_WIDGET_PROPERTY_MAX = 3
};

enum Component_CANVAS_WIDGET_Properties {
    CANVAS_WIDGET_PROPERTY_DATA = 0,
    CANVAS_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_GAUGE_EMBEDDED_WIDGET_Properties {
    GAUGE_EMBEDDED_WIDGET_PROPERTY_DATA = 0,
    GAUGE_EMBEDDED_WIDGET_PROPERTY_VISIBLE = 1,
    GAUGE_EMBEDDED_WIDGET_PROPERTY_MIN = 2,
    GAUGE_EMBEDDED_WIDGET_PROPERTY_MAX = 3,
    GAUGE_EMBEDDED_WIDGET_PROPERTY_THRESHOLD = 4,
    GAUGE_EMBEDDED_WIDGET_PROPERTY_UNIT = 5
};

enum Component_INPUT_EMBEDDED_WIDGET_Properties {
    INPUT_EMBEDDED_WIDGET_PROPERTY_DATA = 0,
    INPUT_EMBEDDED_WIDGET_PROPERTY_VISIBLE = 1,
    INPUT_EMBEDDED_WIDGET_PROPERTY_MIN = 2,
    INPUT_EMBEDDED_WIDGET_PROPERTY_MAX = 3,
    INPUT_EMBEDDED_WIDGET_PROPERTY_PRECISION = 4,
    INPUT_EMBEDDED_WIDGET_PROPERTY_UNIT = 5
};

enum Component_ROLLER_WIDGET_Properties {
    ROLLER_WIDGET_PROPERTY_DATA = 0,
    ROLLER_WIDGET_PROPERTY_VISIBLE = 1,
    ROLLER_WIDGET_PROPERTY_MIN = 2,
    ROLLER_WIDGET_PROPERTY_MAX = 3,
    ROLLER_WIDGET_PROPERTY_TEXT = 4
};

enum Component_SWITCH_WIDGET_Properties {
    SWITCH_WIDGET_PROPERTY_DATA = 0,
    SWITCH_WIDGET_PROPERTY_VISIBLE = 1
};

enum Component_SLIDER_WIDGET_Properties {
    SLIDER_WIDGET_PROPERTY_DATA = 0,
    SLIDER_WIDGET_PROPERTY_VISIBLE = 1,
    SLIDER_WIDGET_PROPERTY_MIN = 2,
    SLIDER_WIDGET_PROPERTY_MAX = 3
};

enum Component_DROP_DOWN_LIST_WIDGET_Properties {
    DROP_DOWN_LIST_WIDGET_PROPERTY_DATA = 0,
    DROP_DOWN_LIST_WIDGET_PROPERTY_VISIBLE = 1,
    DROP_DOWN_LIST_WIDGET_PROPERTY_OPTIONS = 2
};

enum Component_WATCH_VARIABLE_ACTION_COMPONENT_Properties {
    WATCH_VARIABLE_ACTION_COMPONENT_PROPERTY_VARIABLE = 0
};

enum Component_EVAL_EXPR_ACTION_COMPONENT_Properties {
    EVAL_EXPR_ACTION_COMPONENT_PROPERTY_EXPRESSION = 0
};

enum Component_COMPARE_ACTION_COMPONENT_Properties {
    COMPARE_ACTION_COMPONENT_PROPERTY_A = 0,
    COMPARE_ACTION_COMPONENT_PROPERTY_B = 1,
    COMPARE_ACTION_COMPONENT_PROPERTY_C = 2
};

enum Component_IS_TRUE_ACTION_COMPONENT_Properties {
    IS_TRUE_ACTION_COMPONENT_PROPERTY_VALUE = 0
};

enum Component_CONSTANT_ACTION_COMPONENT_Properties {
    CONSTANT_ACTION_COMPONENT_PROPERTY_VALUE = 0
};

enum Component_LOG_ACTION_COMPONENT_Properties {
    LOG_ACTION_COMPONENT_PROPERTY_VALUE = 0
};

enum Component_DELAY_ACTION_COMPONENT_Properties {
    DELAY_ACTION_COMPONENT_PROPERTY_MILLISECONDS = 0
};

enum Component_ERROR_ACTION_COMPONENT_Properties {
    ERROR_ACTION_COMPONENT_PROPERTY_MESSAGE = 0
};

enum Component_COUNTER_ACTION_COMPONENT_Properties {
    COUNTER_ACTION_COMPONENT_PROPERTY_COUNT_VALUE = 0
};

enum Component_LOOP_ACTION_COMPONENT_Properties {
    LOOP_ACTION_COMPONENT_PROPERTY_VARIABLE = 0,
    LOOP_ACTION_COMPONENT_PROPERTY_FROM = 1,
    LOOP_ACTION_COMPONENT_PROPERTY_TO = 2,
    LOOP_ACTION_COMPONENT_PROPERTY_STEP = 3
};

enum Component_SCPIACTION_COMPONENT_Properties {
    SCPIACTION_COMPONENT_PROPERTY_INSTRUMENT = 0
};

enum Component_SHOW_MESSAGE_BOX_ACTION_COMPONENT_Properties {
    SHOW_MESSAGE_BOX_ACTION_COMPONENT_PROPERTY_MESSAGE = 0
};

enum Component_SHOW_KEYBOARD_ACTION_COMPONENT_Properties {
    SHOW_KEYBOARD_ACTION_COMPONENT_PROPERTY_LABEL = 0,
    SHOW_KEYBOARD_ACTION_COMPONENT_PROPERTY_INITAL_TEXT = 1,
    SHOW_KEYBOARD_ACTION_COMPONENT_PROPERTY_MIN_CHARS = 2,
    SHOW_KEYBOARD_ACTION_COMPONENT_PROPERTY_MAX_CHARS = 3
};

enum Component_SHOW_KEYPAD_ACTION_COMPONENT_Properties {
    SHOW_KEYPAD_ACTION_COMPONENT_PROPERTY_LABEL = 0,
    SHOW_KEYPAD_ACTION_COMPONENT_PROPERTY_INITAL_VALUE = 1,
    SHOW_KEYPAD_ACTION_COMPONENT_PROPERTY_MIN = 2,
    SHOW_KEYPAD_ACTION_COMPONENT_PROPERTY_MAX = 3,
    SHOW_KEYPAD_ACTION_COMPONENT_PROPERTY_PRECISION = 4,
    SHOW_KEYPAD_ACTION_COMPONENT_PROPERTY_UNIT = 5
};

enum Component_SELECT_LANGUAGE_ACTION_COMPONENT_Properties {
    SELECT_LANGUAGE_ACTION_COMPONENT_PROPERTY_LANGUAGE = 0
};

enum Component_ANIMATE_ACTION_COMPONENT_Properties {
    ANIMATE_ACTION_COMPONENT_PROPERTY_FROM = 0,
    ANIMATE_ACTION_COMPONENT_PROPERTY_TO = 1,
    ANIMATE_ACTION_COMPONENT_PROPERTY_SPEED = 2
};

enum OperationTypes {
    OPERATION_TYPE_ADD = 0,
    OPERATION_TYPE_SUB = 1,
    OPERATION_TYPE_MUL = 2,
    OPERATION_TYPE_DIV = 3,
    OPERATION_TYPE_MOD = 4,
    OPERATION_TYPE_LEFT_SHIFT = 5,
    OPERATION_TYPE_RIGHT_SHIFT = 6,
    OPERATION_TYPE_BINARY_AND = 7,
    OPERATION_TYPE_BINARY_OR = 8,
    OPERATION_TYPE_BINARY_XOR = 9,
    OPERATION_TYPE_EQUAL = 10,
    OPERATION_TYPE_NOT_EQUAL = 11,
    OPERATION_TYPE_LESS = 12,
    OPERATION_TYPE_GREATER = 13,
    OPERATION_TYPE_LESS_OR_EQUAL = 14,
    OPERATION_TYPE_GREATER_OR_EQUAL = 15,
    OPERATION_TYPE_LOGICAL_AND = 16,
    OPERATION_TYPE_LOGICAL_OR = 17,
    OPERATION_TYPE_UNARY_PLUS = 18,
    OPERATION_TYPE_UNARY_MINUS = 19,
    OPERATION_TYPE_BINARY_ONE_COMPLEMENT = 20,
    OPERATION_TYPE_NOT = 21,
    OPERATION_TYPE_CONDITIONAL = 22,
    OPERATION_TYPE_SYSTEM_GET_TICK = 23,
    OPERATION_TYPE_FLOW_INDEX = 24,
    OPERATION_TYPE_FLOW_IS_PAGE_ACTIVE = 25,
    OPERATION_TYPE_FLOW_PAGE_TIMELINE_POSITION = 26,
    OPERATION_TYPE_FLOW_MAKE_VALUE = 27,
    OPERATION_TYPE_FLOW_MAKE_ARRAY_VALUE = 28,
    OPERATION_TYPE_FLOW_LANGUAGES = 29,
    OPERATION_TYPE_FLOW_TRANSLATE = 30,
    OPERATION_TYPE_FLOW_PARSE_INTEGER = 31,
    OPERATION_TYPE_FLOW_PARSE_FLOAT = 32,
    OPERATION_TYPE_FLOW_PARSE_DOUBLE = 33,
    OPERATION_TYPE_DATE_NOW = 34,
    OPERATION_TYPE_DATE_TO_STRING = 35,
    OPERATION_TYPE_DATE_FROM_STRING = 36,
    OPERATION_TYPE_MATH_SIN = 37,
    OPERATION_TYPE_MATH_COS = 38,
    OPERATION_TYPE_MATH_LOG = 39,
    OPERATION_TYPE_MATH_LOG10 = 40,
    OPERATION_TYPE_MATH_ABS = 41,
    OPERATION_TYPE_MATH_FLOOR = 42,
    OPERATION_TYPE_MATH_CEIL = 43,
    OPERATION_TYPE_MATH_ROUND = 44,
    OPERATION_TYPE_MATH_MIN = 45,
    OPERATION_TYPE_MATH_MAX = 46,
    OPERATION_TYPE_STRING_LENGTH = 47,
    OPERATION_TYPE_STRING_SUBSTRING = 48,
    OPERATION_TYPE_STRING_FIND = 49,
    OPERATION_TYPE_STRING_PAD_START = 50,
    OPERATION_TYPE_STRING_SPLIT = 51,
    OPERATION_TYPE_ARRAY_LENGTH = 52,
    OPERATION_TYPE_ARRAY_SLICE = 53
};

enum SystemStructures {
    SYSTEM_STRUCTURE_ACTION_PARAMS = 20,
    SYSTEM_STRUCTURE_CHECKBOX_ACTION_PARAMS = 21,
    SYSTEM_STRUCTURE_TEXT_INPUT_ACTION_PARAMS = 22,
    SYSTEM_STRUCTURE_DROP_DOWN_LIST_ACTION_PARAMS = 23,
    SYSTEM_STRUCTURE_SERIAL_PORT = 24,
    SYSTEM_STRUCTURE_TERMINAL_WIDGET_ON_DATA_PARAMS = 25
};

enum ActionParamsSystemStructureFields {
    SYSTEM_STRUCTURE_ACTION_PARAMS_FIELD_INDEX = 0,
    SYSTEM_STRUCTURE_ACTION_PARAMS_FIELD_INDEXES = 1,
    SYSTEM_STRUCTURE_ACTION_PARAMS_NUM_FIELDS
};

enum CheckboxActionParamsSystemStructureFields {
    SYSTEM_STRUCTURE_CHECKBOX_ACTION_PARAMS_FIELD_INDEX = 0,
    SYSTEM_STRUCTURE_CHECKBOX_ACTION_PARAMS_FIELD_INDEXES = 1,
    SYSTEM_STRUCTURE_CHECKBOX_ACTION_PARAMS_FIELD_VALUE = 2,
    SYSTEM_STRUCTURE_CHECKBOX_ACTION_PARAMS_NUM_FIELDS
};

enum TextInputActionParamsSystemStructureFields {
    SYSTEM_STRUCTURE_TEXT_INPUT_ACTION_PARAMS_FIELD_INDEX = 0,
    SYSTEM_STRUCTURE_TEXT_INPUT_ACTION_PARAMS_FIELD_INDEXES = 1,
    SYSTEM_STRUCTURE_TEXT_INPUT_ACTION_PARAMS_FIELD_VALUE = 2,
    SYSTEM_STRUCTURE_TEXT_INPUT_ACTION_PARAMS_NUM_FIELDS
};

enum DropDownListActionParamsSystemStructureFields {
    SYSTEM_STRUCTURE_DROP_DOWN_LIST_ACTION_PARAMS_FIELD_INDEX = 0,
    SYSTEM_STRUCTURE_DROP_DOWN_LIST_ACTION_PARAMS_FIELD_INDEXES = 1,
    SYSTEM_STRUCTURE_DROP_DOWN_LIST_ACTION_PARAMS_FIELD_SELECTED_INDEX = 2,
    SYSTEM_STRUCTURE_DROP_DOWN_LIST_ACTION_PARAMS_NUM_FIELDS
};

enum SerialPortSystemStructureFields {
    SYSTEM_STRUCTURE_SERIAL_PORT_FIELD_MANUFACTURER = 0,
    SYSTEM_STRUCTURE_SERIAL_PORT_FIELD_SERIAL_NUMBER = 1,
    SYSTEM_STRUCTURE_SERIAL_PORT_FIELD_PATH = 2,
    SYSTEM_STRUCTURE_SERIAL_PORT_NUM_FIELDS
};

enum TerminalWidgetOnDataParamsSystemStructureFields {
    SYSTEM_STRUCTURE_TERMINAL_WIDGET_ON_DATA_PARAMS_FIELD_INDEX = 0,
    SYSTEM_STRUCTURE_TERMINAL_WIDGET_ON_DATA_PARAMS_FIELD_INDEXES = 1,
    SYSTEM_STRUCTURE_TERMINAL_WIDGET_ON_DATA_PARAMS_FIELD_DATA = 2,
    SYSTEM_STRUCTURE_TERMINAL_WIDGET_ON_DATA_PARAMS_NUM_FIELDS
};

enum ArrayTypes {
    ARRAY_TYPE_INTEGER = 26,
    ARRAY_TYPE_FLOAT = 27,
    ARRAY_TYPE_DOUBLE = 28,
    ARRAY_TYPE_BOOLEAN = 29,
    ARRAY_TYPE_STRING = 30,
    ARRAY_TYPE_DATE = 31,
    ARRAY_TYPE_BLOB = 32,
    ARRAY_TYPE_ANY = 14
};

} // defs_v3
} // flow
} // eez