#include "script_component.hpp"

// Modules done through the curatorInfoType UI don't respect the isGlobal variable defined in the module's config
[QGVAR(moduleBreachDoor), LINKFUNC(moduleBreachDoor)] call CBA_fnc_addEventHandler;
[QGVAR(moduleDroidDispenser), LINKFUNC(moduleDroidDispenser)] call CBA_fnc_addEventHandler;
GVAR(dispenserLastOptions) = [];

if (hasInterface) then {
    [] call FUNC(areaHealPFH);
};
