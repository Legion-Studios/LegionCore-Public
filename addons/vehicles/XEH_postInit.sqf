#include "script_component.hpp"

if (hasInterface) then {
    ["vehicle", LINKFUNC(disableAutoVectoring), true] call CBA_fnc_addPlayerEventHandler;
};
