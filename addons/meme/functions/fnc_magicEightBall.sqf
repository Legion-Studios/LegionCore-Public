#include "..\script_component.hpp"
/*
 * Author: Crimzonkat, DartRuffian
 * Displays a magic eight ball like message.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ls_meme_fnc_magicEightBall;
 *
 * Public: No
 */

TRACE_0("fnc_magicEightBall");

private _response = (floor random 13) + 1;

hintSilent LLSTRING(8ball_thinking);
[{ hintSilent localize (format [LSTRING(8ball_%1), _this]) }, _response, 5] call CBA_fnc_waitAndExecute;
