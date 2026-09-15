#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns equipment data for a given item.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Item class <STRING>
 *
 * Return Value:
 * Equipment data <HASHMAP>
 *
 * Example:
 * (headgear _unit) call ls_lighting_fnc_getEquipmentData;
 *
 * Public: Yes
 */

params [
    ["_item", "", [""]]
];
TRACE_1("fnc_getEquipmentData",_item);

private _return = GVAR(equipmentCache) get _item;
if (isNil "_return") then {
    private _config = (_item call CBA_fnc_getItemConfig) >> QUOTE(ADDON);
    _return = createHashMapFromArray [
        ["enabled", getNumber (_config >> "enabled") >= 1],
        ["lightModes", getArray (_config >> "lightModes")],
        ["soundOn", getText (_config >> "soundOn")],
        ["soundOff", getText (_config >> "soundOff")],
        ["soundToggle", getText (_config >> "soundToggle")],
        ["sources", []]
    ];

    {
        private _sourceConfig = _config >> _x;
        private _attachOffset = getArray (_sourceConfig >> "attachOffset");
        private _attachVectorDir = getArray (_sourceConfig >> "attachVectorDir");
        private _attachVectorUp = getArray (_sourceConfig >> "attachVectorUp");

        {
            if (_x isEqualTo []) then {
                _x set [0, 0];
                _x set [1, 0];
                _x set [2, 0];
            };
        } forEach [_attachOffset, _attachVectorDir, _attachVectorUp];

        private _sourceData = createHashMapFromArray [
            ["attachOffset", _attachOffset],
            ["attachVectorDir", _attachVectorDir],
            ["attachVectorUp", _attachVectorUp],
            ["attachBone", getText (_sourceConfig >> "attachBone")],
            ["attachBoneFollow", getNumber (_sourceConfig >> "attachBoneFollow") >= 1]
        ];

        private _allSources = _return get "sources";
        _allSources pushBack _sourceData;
    } forEach (getArray (_config >> "sources"));

    GVAR(equipmentCache) set [_item, _return];
};

_return;
