#include "script_component.hpp"

[
    QGVAR(graciousGovernmentMix), "ALL", "Eat", nil, nil, {true}, {
        params ["_unit"];
        [_unit] call EFUNC(common,fullHeal);
        hintSilent "You can feel Palpatine's approval for you. You feel emboldened and healed by this.";

        private _message = format ["%1 has accepted Palpatine's gift and has consumed a Gracious Government Mix. They have been healed of all wounds.", name _unit];
        private _curators = ([] call BIS_fnc_listCuratorPlayers) - [_unit];

        [QEGVAR(common,notify), _message, _curators] call CBA_fnc_targetEvent;
    }, true
] call CBA_fnc_addItemContextMenuOption;
