#include "script_component.hpp"

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

if (isServer) then {
    missionNamespace setVariable [QGVAR(groups), +(uiNamespace getVariable QGVAR(groups)), true];
    GVAR(dispensers) = [];
};
