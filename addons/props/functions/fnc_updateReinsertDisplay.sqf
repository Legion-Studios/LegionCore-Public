#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Updates the UI on texture for a given reinsert terminal.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Terminal <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * cursorObject call ls_props_fnc_updateReinsertDisplay
 *
 * Public: No
 */

params ["_object"];
TRACE_1("fnc_updateReinsertDisplay",_object);

private _displayName = format [QGVAR(reinsertDisplay_%1), hashValue _object];
private _display = findDisplay _displayName;

if (isNull _display) then {
    _object setObjectTexture ["screen", format ["#(rgb,1024,1024,1)ui('ls_RscReinsertScreen','%1','ca')", _displayName]];
};

// Seems to take four frames to create display for local units, and six for remote
[{
    params ["", "_displayName"];
    !isNull (findDisplay _displayName);
}, {
    params ["_object", "_displayName"];
    private _display = findDisplay _displayName;

    private _ctrlBackground = _display displayCtrl IDC_REINSERT_BACKGROUND;
    _ctrlBackground ctrlSetText QPATHTOF(terminals\01\data\screen_template_co.paa);

    private _ctrlTimer = _display displayCtrl IDC_REINSERT_TIMER;
    _ctrlTimer ctrlSetText (localize "STR_A3_Ready");
    _ctrlTimer ctrlSetTextColor [0.5, 1, 0.5, 1];

    private _ctrlTimerIcon = _display displayCtrl IDC_REINSERT_TIMER_ICON;
    _ctrlTimerIcon ctrlSetText "\A3\UI_F\data\IGUI\Cfg\HoldActions\progress2\progress_0_ca.paa";

    private _name = _object getVariable [QGVAR(name), ""];
    if (count _name > 12) then {
        _name = _name select [0, 12];
        _name = _name + "...";
    };
    (_display displayCtrl IDC_REINSERT_LOCATION) ctrlSetText _name;

    // On cooldown
    private _cooldownTime = _object getVariable [QGVAR(activationCooldown), CBA_missionTime];
    if (_cooldownTime > CBA_missionTime) then {
        private _lastUsed = _object getVariable [QGVAR(lastUsedTime), CBA_missionTime];
        private _progress = ceil (linearConversion [_lastUsed, _cooldownTime, CBA_missionTime, 0, 24, true]);

        private _timeRemaining = _cooldownTime - CBA_missionTime;
        private _minutes = floor (_timeRemaining / 60);
        private _seconds = floor (_timeRemaining % 60);
        private _text = format ["%1%2:%3%4", floor (_minutes / 10), _minutes % 10, floor (_seconds / 10), _seconds % 10];
        _ctrlTimer ctrlSetText _text;
        _ctrlTimer ctrlSetTextColor [1, 0.5, 0.5, 1];

        _ctrlTimerIcon ctrlSetText format ["\A3\UI_F\data\IGUI\Cfg\HoldActions\progress2\progress_%1_ca.paa", _progress];
    };

    { _x ctrlCommit 0 } forEach [_ctrlBackground, _ctrlTimer, _ctrlTimerIcon];
    displayUpdate _display;
}, [_object, _displayName]] call CBA_fnc_waitUntilAndExecute;
