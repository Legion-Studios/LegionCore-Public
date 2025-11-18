#include "script_component.hpp"

[QGVAR(stun), LINKFUNC(stun)] call CBA_fnc_addEventHandler;

if (hasInterface) then {
    call COMPILE_SCRIPT(XEH_postInitClient);
};
