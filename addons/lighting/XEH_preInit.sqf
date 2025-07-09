#include "script_component.hpp"

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

if (isServer) then {
    GVAR(ai_enableFlashlightState) = false;
    GVAR(ai_flashlightThread) = false;
};

private _category = [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)];

#include "initSettings.inc.sqf"
#include "initKeybinds.inc.sqf"
