#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles the rangefinder display's onLoad event.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * _display call ls_equipment_fnc_rangefinderOnLoad;
 *
 * Public: No
 */

// Seconds between updates
#define UPDATE_RATE 0

params ["_display"];
TRACE_1("fnc_rangefinderOnLoad",_display);

uiNamespace setVariable [QGVAR(RscRangefinder), _display];
private _ctrlDistance = _display displayCtrl IDC_DISTANCE;
private _ctrlTime = _display displayCtrl IDC_TIME;
private _ctrlGrid = _display displayCtrl IDC_GRID;
private _ctrlBearing = _display displayCtrl IDC_BEARING;
private _ctrlBearingArrow = _display displayCtrl IDC_BEARING_ARROW;

// Prevent the arrow spinning around on first run
_ctrlBearingArrow ctrlSetAngle [getDir ls_player, 0.5, 0.5];

if (GVAR(rangefinderPFH) == -1) then {
    GVAR(rangefinderPFH) = [{
        params ["_args", "_handle"];
        _args params ["_ctrlDistance", "_ctrlTime", "_ctrlGrid", "_ctrlBearing", "_ctrlBearingArrow"];

        if (isNull ctrlParent _ctrlDistance) exitWith {
            GVAR(rangefinderPFH) = -1;
            _handle call CBA_fnc_removePerFrameHandler;
        };

        // Update distance
        private _distance = [] call EFUNC(common,getDistanceToTarget);
        if (_distance == -1) then {
            _distance = "----";
        } else {
            _distance = [str round _distance, 4, "0"] call EFUNC(common,leftPad);
        };
        _ctrlDistance ctrlSetText (_distance + "m");

        // Update time
        // It was ~20 ms faster to use date for the hours and minutes
        // and dayTime for the seconds.
        private _currentTime = date;
        private _minutes = _currentTime select 4;
        if (_minutes < 10) then {
            _minutes = "0" + str _minutes;
        };
        private _seconds = round (60 * (60 * (dayTime % 1) % 1));
        if (_seconds < 10) then {
            _seconds = "0" + str _seconds;
        };
        _ctrlTime ctrlSetText format ["%1 %2 %3", _currentTime select 3, _minutes, _seconds];

        // Update grid ref / altitude
        private _gridPos = mapGridPosition ls_player;
        private _gridX = _gridPos select [0, 3];
        private _gridY = _gridPos select [3];
        private _altitude = (str round (getPosATL ls_player select 2)) + "m";
        _ctrlGrid ctrlSetText format ["%1. %2. %3", _gridX, _gridY, _altitude];

        // Updating bearing
        private _bearing = round (getDir ls_player);
        _ctrlBearing ctrlSetText ([str _bearing, 3, "0"] call EFUNC(common,leftPad)) + "°";
        _ctrlBearingArrow ctrlSetAngle [_bearing, 0.5, 0.5];
    }, UPDATE_RATE, [_ctrlDistance, _ctrlTime, _ctrlGrid, _ctrlBearing, _ctrlBearingArrow]] call CBA_fnc_addPerFrameHandler;
};
