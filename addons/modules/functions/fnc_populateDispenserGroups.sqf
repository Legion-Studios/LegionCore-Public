#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Populates the given tree view with dispenser groups
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: RscTree control <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _rscTree call ls_modules_fnc_populateDispenserGroups
 *
 * Public: No
 */

params ["_ctrl"];
TRACE_1("fnc_populateDispenserGroups",_ctrl);

tvClear _ctrl;

{
    _y params ["_displayName", "_side", "_sections"];
    private _factionIndex = _ctrl tvAdd [[], _displayName];
    private _sideColor = _side call EFUNC(common,getSideColor);
    _ctrl tvSetPicture [[_factionIndex], _x call EFUNC(common,getFactionIcon)];

    {
        _y params ["_displayName", "_groups"];
        private _sectionIndex = _ctrl tvAdd [[_factionIndex], _displayName];

        {
            _y params ["_displayName", "_icon", "_unitTypes"];
            private _path = [_factionIndex, _sectionIndex, _ctrl tvAdd [[_factionIndex, _sectionIndex], _displayName]];
            _ctrl tvSetPicture [_path, _icon];
            _ctrl tvSetPictureColor [_path, _sideColor];
            _ctrl tvSetData [_path, str _unitTypes];
        } forEach _groups;
    } forEach _sections;

} forEach EGVAR(dispenser,groups);

_ctrl tvSortAll [[], false];
