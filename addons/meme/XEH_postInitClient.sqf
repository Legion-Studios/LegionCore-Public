#include "script_component.hpp"

[
    QGVAR(graciousGovernmentMix), LLSTRING(graciousGovernmentMix_healActionName), "Eat", nil, nil, {true}, {
        params ["_unit"];
        _unit call EFUNC(common,fullHeal);
        hintSilent LLSTRING(graciousGovernmentMix_localMessage);

        private _curators = ([] call BIS_fnc_listCuratorPlayers) - [_unit];
        [QEGVAR(common,notify), [LSTRING(graciousGovernmentMix_zeusMessage), name _unit], _curators] call CBA_fnc_targetEvent;
    }, true
] call CBA_fnc_addItemContextMenuOption;
