#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Swaps weapons attachments on compatible weapons when reloading.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Weapon <STRING>
 * 2: Magazine <ARRAY>
 *    - See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers/Reloaded
 *
 * Return Value:
 * None
 *
 * Examples:
 * [ls_player, currentWeapon ls_player, "someMagazine"] call ls_weapons_fnc_handleAttachmentSwap;
 *
 * Public: No
 */

params ["_unit", "_weapon", "_magazine"];

private _isEnabled = getNumber (configFile >> "CfgWeapons" >> _weapon >> QGVAR(attachmentSwapEnabled));
private _attachments = getArray (configFile >> "CfgWeapons" >> _weapon >> QGVAR(attachments));

TRACE_5("fnc_attachmentSwap",_unit,_weapon,_magazine,_isEnabled,_attachments);

if (_isEnabled < 1 or {_attachments isEqualTo []}) exitWith {};

{
    _x params ["_property", "_attachment"];

    private _matches = getNumber (configFile >> "CfgMagazines" >> _magazine >> _property);

    // Only add the first attachment that matches
    if (_matches >= 1) exitWith {
        _unit addWeaponItem [_weapon, _attachment, true];
    };
} forEach _attachments;
nil;
