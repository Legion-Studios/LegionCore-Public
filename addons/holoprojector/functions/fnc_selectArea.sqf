#include "..\script_component.hpp"
/*
 * Authors: Tennesse Timmy, CrimzonKat, Ragwolf
 * Rewritten by DartRuffian
 * Opens the map for client to select an area to be mapped.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for the 101st Doom Battalion, and used in Legion Studios: Core with permission.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _holomap call ls_holoprojector_fnc_selectArea;
 *
 * Public: No
 */

params ["_object"];
TRACE_1("fnc_mapArea",_object);

if (!hasInterface) exitWith {};

[_object, "Beep_Target"] call EFUNC(common,say3D);
openMap [true, true]; // Force user to select an area, prevent unexpected behavior by user closing map on their own
hint "Select an area to map.";

_object onMapSingleClick {
    #pragma hemtt ignore_variables ["_pos"];
    [_this, "readoutClick"] call EFUNC(common,say3D);
    hintSilent "";
    onMapSingleClick "";
    openMap [false, false];
    _this setVariable [QGVAR(mapScaleHeight), 500, true];
    [_this, _pos, GET_TERRAINMODE(_this)] call FUNC(map);
    nil; // nil to not overwrite default map behaviour
};
