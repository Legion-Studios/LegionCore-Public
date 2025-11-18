#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Adds a unit's jetpack name and picture to an ACE interaction.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/interactionmenu-framework
 *
 * Return Value:
 * None
 *
 * Examples:
 * modifierFunction = "call ls_jetpacks_fnc_modifyInteraction";
 *
 * Public: No
 */

params ["_target", "", "", "_actionData"];
TRACE_2("fnc_modifyInteraction",_target,_actionData);

private _config = configOf backpackContainer _target;
private _jetpackName = getText (_config >> "displayName");
private _picture = getText (_config >> "picture");

_actionData set [1, format [_actionData#1, _jetpackName]];
_actionData set [2, _picture];
