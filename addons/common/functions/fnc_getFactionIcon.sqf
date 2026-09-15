#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns the icon for a given faction, or a procedural texture with the faction side's color if no icon is set. If a side (SIDE or NUMBER) is passed, the color will always be passed.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Faction or side <STRING|SIDE|NUMBER>
 *    - String: CfgFactionsClass
 *    - Number:
 *      - 0: OPFOR
 *      - 1: BLUFOR
 *      - 2: Independent
 *      - 3: Civilian
 *      - Anything else: Unknown
 * 1: Use colored side icons (optional, default: true) <BOOL>
 *    - If true, the default side icons wll be colored. If false they will be plain white
 *
 * Return Value:
 * Faction icon or procedural texture string <STRING>
 *
 * Example:
 * "ls_cis" call ls_common_fnc_getFactionIcon;
 *
 * Public: Yes
 */

params [
    ["_faction", "", ["", sideEmpty, 0]],
    ["_useColor", true, [true]]
];
TRACE_2("fnc_getFactionIcon",_faction,_useColor);

switch (typeName _faction) do {
    case "STRING": {
        private _factionConfig = configFile >> "CfgFactionClasses" >> _faction;
        private _icon = getText (_factionConfig >> "icon");
        if (_icon == "") then {
            private _sideConfig = _factionConfig >> "side";
            // If side isn't defined, default to sideUnknown
            private _side = if (isNumber _sideConfig) then { getNumber _sideConfig } else { 4 };
            _icon = [_side, _useColor] call FUNC(getFactionIcon);
        };
        _icon; // Return
    };
    case "SIDE": {
        private _sideID = switch (_faction) do {
            case east: { 0 };
            case west: { 1 };
            case independent: { 2 };
            case civilian: { 3 };
            default { 4 };
        };
        [_sideID, _useColor] call FUNC(getFactionIcon); // Return
    };
    case "SCALAR": {
        [
            [
                "\A3\UI_F_Curator\data\displays\RscDisplayCurator\side_east_ca.paa",
                "\A3\UI_F_Curator\data\displays\RscDisplayCurator\side_west_ca.paa",
                "\A3\UI_F_Curator\data\displays\RscDisplayCurator\side_guer_ca.paa",
                "\A3\UI_F_Curator\data\displays\RscDisplayCurator\side_civ_ca.paa",
                "\A3\UI_F_Curator\data\displays\RscDisplayCurator\side_unknown_ca.paa"
            ], [
                "\A3\3DEN\data\displays\Display3DEN\panelright\side_east_ca.paa",
                "\A3\3DEN\data\displays\Display3DEN\panelright\side_west_ca.paa",
                "\A3\3DEN\data\displays\Display3DEN\panelright\side_guer_ca.paa",
                "\A3\3DEN\data\displays\Display3DEN\panelright\side_civ_ca.paa",
                "\A3\3DEN\data\displays\Display3DEN\panelright\side_empty_ca.paa"
            ]
        ] select _useColor select _faction; // Return
    };
};
