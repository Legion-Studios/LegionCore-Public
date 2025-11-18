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
 * The displayed message <STRING>
 *
 * Example:
 * [] call ls_meme_fnc_magicEightBall;
 *
 * Public: Yes
 */

TRACE_0("fnc_magicEightBall");

private _responses = [
    "I find your lack of faith disturbing.",
    "Do or do not. There is no try.",
    "Your eyes can deceive you, don’t trust them.",
    "Great, kid. Don't get cocky.",
    "It's a trap!",
    "Yes.",
    "No.",
    "Maybe.",
    "Difficult to see; always in motion is the future.",
    "Many of the truths that we cling to depend on our viewpoint.",
    "Be careful not to choke on your aspirations",
    "I got a bad feeling about this.",
    "This is the way."
];
private _response = selectRandom _responses;

hintSilent "Thinking...";
[{ hintSilent _this }, _response, 5] call CBA_fnc_waitAndExecute;

_response;
