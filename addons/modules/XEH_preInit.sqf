#include "script_component.hpp"

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// private _category = [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)];

// #include "initSettings.inc.sqf"
// #include "initKeybinds.inc.sqf"

// Render object data when opening eden for the first time
if (is3DEN) then {
    private _modules = all3DENEntities select 3;
    {
        _x call FUNC(moduleSpaceDebris_createFromSavedData);
    } forEach (_modules select { typeOf _x == "lsb_moduleSpaceDebris" });
};
