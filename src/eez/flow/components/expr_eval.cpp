/*
 * EEZ Modular Firmware
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

#include <eez/conf-internal.h>

#include <eez/flow/components.h>
#include <eez/flow/flow_defs_v3.h>
#include <eez/flow/expression.h>

namespace eez {
namespace flow {

void executeEvalExprComponent(FlowState *flowState, unsigned componentIndex) {
	Value expressionValue;
	if (!evalProperty(flowState, componentIndex, defs_v3::EVAL_EXPR_ACTION_COMPONENT_PROPERTY_EXPRESSION, expressionValue, "Failed to evaluate Expression in EvalExpr")) {
		return;
	}

	propagateValue(flowState, componentIndex, 1, expressionValue);

	propagateValueThroughSeqout(flowState, componentIndex);
}

} // namespace flow
} // namespace eez
