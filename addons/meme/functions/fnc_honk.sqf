#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Plays a random honk sound
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Player (unused) <OBJECT>
 * 1: Target <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorObject] call ls_meme_fnc_honk;
 *
 * Public: No
 */

params ["", "_target"];
TRACE_1("fnc_honk",_target);

_target say3D (selectRandom [
    "ls_ugg_honk_01",
    "ls_ugg_honk_02",
    "ls_ugg_honk_03",
    "ls_ugg_honk_04",
    "ls_ugg_honk_05",
    "ls_ugg_honk_glass_01",
    "ls_ugg_honk_glass_02",
    "ls_ugg_honk_glass_03",
    "ls_ugg_honk_glass_04",
    "ls_ugg_honk_harmonica_01",
    "ls_ugg_honk_harmonica_02",
    "ls_ugg_honk_harmonica_03",
    "ls_ugg_honk_harmonica_04",
    "ls_ugg_honk_harmonica_05",
    "ls_ugg_honk_harmonica_06",
    "ls_ugg_honk_pylon_01",
    "ls_ugg_honk_pylon_02",
    "ls_ugg_honk_pylon_03",
    "ls_ugg_honk_pylon_04",
    "ls_ugg_honk_pylon_05",
    "ls_ugg_honk_pylon_06",
    "ls_ugg_honk_pylon_07",
    "ls_ugg_honk_soap_01",
    "ls_ugg_honk_soap_02",
    "ls_ugg_honk_soap_03",
    "ls_ugg_honk_soap_04",
    "ls_ugg_honk_trashlid_01",
    "ls_ugg_honk_trashlid_02",
    "ls_ugg_honk_trashlid_03",
    "ls_ugg_honk_trashlid_04",
    "ls_ugg_honk_trashlid_05",
    "ls_ugg_honk_walkie_talkie_01",
    "ls_ugg_honk_walkie_talkie_02",
    "ls_ugg_honk_walkie_talkie_03"
]);
