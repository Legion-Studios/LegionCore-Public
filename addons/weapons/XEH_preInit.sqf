#include "script_component.hpp"

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(rechargeMagazines) = createHashMap;

private _category = [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)];

#include "initSettings.inc.sqf"
