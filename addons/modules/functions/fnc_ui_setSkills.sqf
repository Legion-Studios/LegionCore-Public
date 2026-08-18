#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initializes the Traits Zeus module display.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Control group <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _ctrl call ls_modules_fnc_ui_setSkills
 *
 * Public: No
 */

// From defineResinclDesign.inc, pulled here since that file redefines lots of macros and causes warnings
#define IDC_OK                                1
#define IDC_CANCEL                            2
#define IDC_RSCDISPLAYATTRIBUTES_BACKGROUND   30001
#define IDC_RSCDISPLAYATTRIBUTES_TITLE        30002
#define IDC_RSCDISPLAYATTRIBUTES_CONTENT      30003
#define IDC_RSCDISPLAYATTRIBUTES_BUTTONCUSTOM 30004
#define IDC_RSCDISPLAYATTRIBUTES_BUTTONOK     30005
#define IDC_RSCDISPLAYATTRIBUTES_BUTTONCANCEL 30006

params ["_ctrl"];

_ctrl ctrlRemoveAllEventHandlers "SetFocus";

// Needs a small delay since vanilla will try to reorganize the controls
[{
    params ["_ctrl"];
    private _display = ctrlParent _ctrl;

    private _logic = GET_CURRENT_TARGET;
    private _unit = attachedTo _logic;

    private _exit = true;
    switch (false) do {
        case (!isNull _unit): {
            [LSTRING(nothingSelected), _logic, _display] call FUNC(errorAndClose);
        };
        case (_unit isKindOf "CAManBase"): {
            [LSTRING(onlyInfantry), _logic, _display] call FUNC(errorAndClose);
        };
        case (alive _unit): {
            [LSTRING(onlyAlive), _logic, _display] call FUNC(errorAndClose);
        };
        default {
            _exit = false;
        };
    };

    if (_exit) exitWith {};

    private _fnc_onUnload = {
        deleteVehicle GET_CURRENT_TARGET;
    };

    private _fnc_onConfirm = {
        params ["_ctrlButtonOK"];

        private _display = ctrlParent _ctrlButtonOK;
        private _logic = GET_CURRENT_TARGET;
        private _unit = attachedTo _logic;

        if (isNull _logic || isNull _display || !alive _unit) exitWith {};

        private _updatedSkills = false;
        {
            private _skill = _x getVariable [QGVAR(skillName), ""];
            if (_skill == "") then { continue };

            private _toolbox = _x controlsGroupCtrl IDC_SKILLS_TOOLBOX;
            private _newLevel = lbCurSel _toolbox;

            if (_newLevel != [_unit, _skill] call EFUNC(common,getSkill)) then {
                _updatedSkills = true;
                [_unit, _skill, _newLevel] call EFUNC(common,setSkill);
                TRACE_CHAT_3("Setting skill level",_unit,_skill,_newLevel);
            };
        } forEach (_display getVariable [QGVAR(skillControls), []]);

        if (_updatedSkills) then {
            [objNull, format [LLSTRING(updatedSkills), GET_NAME(_unit)]] call BIS_fnc_showCuratorFeedbackMessage;
        };
        nil;
    };

    _display displayAddEventHandler ["Unload", _fnc_onUnload];
    _ctrl ctrlAddEventHandler ["ButtonClick", _fnc_onConfirm];

    // Get all the controls so we can adjust the positions as needed after adding all the skill controls
    private _ctrlBackground = _display displayCtrl IDC_RSCDISPLAYATTRIBUTES_BACKGROUND;
    private _ctrlTitle = _display displayCtrl IDC_RSCDISPLAYATTRIBUTES_TITLE;
    private _ctrlContent = _display displayCtrl IDC_RSCDISPLAYATTRIBUTES_CONTENT;
    private _ctrlButtonOK = _display displayCtrl IDC_OK;
    private _ctrlButtonCancel = _display displayCtrl IDC_CANCEL;
    private _ctrlButtonCustom = _display displayCtrl IDC_RSCDISPLAYATTRIBUTES_BUTTONCUSTOM;

    private _ctrlBackgroundPos = ctrlPosition _ctrlBackground;
    private _ctrlTitlePos = ctrlPosition _ctrlTitle;
    private _ctrlContentPos = ctrlPosition _ctrlContent;
    private _ctrlButtonOKPos = ctrlPosition _ctrlButtonOK;
    private _ctrlButtonCancelPos = ctrlPosition _ctrlButtonCancel;
    private _ctrlButtonCustomPos = ctrlPosition _ctrlButtonCustom;

    private _ctrlTitleOffsetY = (_ctrlBackgroundPos select 1) - (_ctrlTitlePos select 1) - (_ctrlTitlePos select 3);
    private _ctrlContentOffsetY = (_ctrlContentPos select 1) - (_ctrlBackgroundPos select 1);

    private _ctrlPosY = _ctrlContentOffsetY;

    private _skillControls = [];
    {
        _y params ["_name", "_tooltip"];
        private _group = _display ctrlCreate [QGVAR(AttributeSkillToolBox), -1, _ctrlContent];
        _group setVariable [QGVAR(skillName), _x];

        private _label = _group controlsGroupCtrl IDC_SKILLS_LABEL;
        _label ctrlSetText _name;
        _label ctrlSetTooltip _tooltip;

        private _toolbox = _group controlsGroupCtrl IDC_SKILLS_TOOLBOX;
        _toolbox lbSetCurSel ([_unit, _x] call EFUNC(common,getSkill));

        private _ctrlPos = ctrlPosition _group;
        _ctrlPos set [0, 0];
        _ctrlPos set [1, _ctrlPosY];
        _group ctrlSetPosition _ctrlPos;
        _group ctrlCommit 0;
        _ctrlPosY = _ctrlPosY + (_ctrlPos select 3) + 0.002;

        _skillControls pushBack _group;
    } forEach EGVAR(common,skills);
    _display setVariable [QGVAR(skillControls), _skillControls];

    private _ctrlPosH = ((_ctrlPosY + _ctrlContentOffsetY) min 0.9) * 0.5;

    // Repositioning logic copied from base RscDisplayAtrributes script
    _ctrlBackgroundPos set [1, 0.5 - _ctrlPosH];
    _ctrlBackgroundPos set [3, _ctrlPosH * 2];
    _ctrlBackground ctrlSetPosition _ctrlBackgroundPos;

    _ctrlTitlePos set [1, (0.5 - _ctrlPosH) - (_ctrlTitlePos select 3) - _ctrlTitleOffsetY];
    _ctrlTitle ctrlSetPosition _ctrlTitlePos;

    _ctrlContentPos set [1, 0.5 - _ctrlPosH];
    _ctrlContentPos set [3, _ctrlPosH * 2];
    _ctrlContent ctrlSetPosition _ctrlContentPos;

    _ctrlButtonOKPos set [1, 0.5 + _ctrlPosH + _ctrlTitleOffsetY];
    _ctrlButtonOK ctrlSetPosition _ctrlButtonOKPos;

    _ctrlButtonCancelPos set [1, 0.5 + _ctrlPosH + _ctrlTitleOffsetY];
    _ctrlButtonCancel ctrlSetPosition _ctrlButtonCancelPos;

    _ctrlButtonCustomPos set [1, 0.5 + _ctrlPosH + _ctrlTitleOffsetY];
    _ctrlButtonCustom ctrlSetPosition _ctrlButtonCustomPos;

    { _x ctrlCommit 0 } forEach [
        _ctrlBackground,
        _ctrlTitle,
        _ctrlContent,
        _ctrlButtonOK,
        _ctrlButtonCancel,
        _ctrlButtonCustom
    ];
    ctrlSetFocus _ctrlButtonOK;
}, _this] call CBA_fnc_execNextFrame;
