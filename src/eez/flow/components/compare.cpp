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

struct CompareActionComponent : public Component {
	uint8_t conditionInstructions[1];
};

void executeCompareComponent(FlowState *flowState, unsigned componentIndex) {
    auto component = (CompareActionComponent *)flowState->flow->components[componentIndex];

    Value conditionValue;
    if (!evalExpression(flowState, componentIndex, component->conditionInstructions, conditionValue, "Failed to evaluate Condition in Compare")) {
        return;
    }

    int err;
    bool result = conditionValue.toBool(&err);
    if (err == 0) {
        if (result) {
            propagateValue(flowState, componentIndex, 1, Value(true, VALUE_TYPE_BOOLEAN));
        } else {
            propagateValue(flowState, componentIndex, 2, Value(false, VALUE_TYPE_BOOLEAN));
        }
    } else {
        throwError(flowState, componentIndex, "Failed to convert Value to boolean in IsTrue\n");
        return;
    }

	propagateValueThroughSeqout(flowState, componentIndex);
}

} // namespace flow
} // namespace eez
