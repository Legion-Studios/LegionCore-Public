#include "script_component.hpp"

[QGVAR(stun), LINKFUNC(stun)] call CBA_fnc_addEventHandler;

if (hasInterface) then {
    call COMPILE_SCRIPT(XEH_postInitClient);
};

if ("ace_common" call EFUNC(common,isModLoaded)) then {
    LINKFUNC(exploded) call ace_common_fnc_addExplosionEventHandler;
} else {
    // Re-create ACE's unified explosion event handler if ACE isn't loaded
    // https://github.com/acemod/ACE3/blob/master/addons/common/functions/fnc_addExplosionEventHandler.sqf
    [QGVAR(explosion), LINKFUNC(exploded)] call CBA_fnc_addEventHandler;
    if !(missionNamespace getVariable [QGVAR(addExplosionEventHandlerActive), false]) then {
        GVAR(addExplosionEventHandlerActive) = true;

        // Add EH to existing projectiles and mines
        {
            TRACE_2("existing",typeOf _x,local _x);
            // Rockets only explode on local clients
            _x addEventHandler ["Explode", {
                TRACE_1("exp (existing)",_this);
                [QGVAR(explosion), _this] call CBA_fnc_localEvent;
            }];
        } forEach ((8 allObjects 2) select {local _x});

        addMissionEventHandler ["ProjectileCreated", {
            params ["_projectile"];
            TRACE_2("pc",typeOf _projectile,local _projectile);

            if (!local _projectile) exitWith {}; // Rockets only explode on local clients

            _projectile addEventHandler ["Explode", {
                TRACE_1("exp",_this);
                [QGVAR(explosion), _this] call CBA_fnc_localEvent;
            }];
        }];
    };
};
