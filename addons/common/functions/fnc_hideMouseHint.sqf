
#include "..\script_component.hpp"
/*
 * Author: Garth de Wet (LH)
 * Hides the interaction hint for mouse buttons.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ls_common_fnc_hideMouseHint
 *
 * Public: No
 */

(QGVAR(RscMouseHint) call BIS_fnc_RscLayer) cutFadeOut 0.2;

// Re-enable action menu
inGameUISetEventHandler ["PrevAction", "false"];
inGameUISetEventHandler ["NextAction", "false"];
inGameUISetEventHandler ["Action", "false"];
