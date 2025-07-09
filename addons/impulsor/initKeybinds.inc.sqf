#include "\ls\core\addons\common\data\hpp\defineDIKCodes.hpp"

[
    _category, QGVAR(key_impulse),
    ["Activate Impulsor", "Increases the ship's impulsor level."], {
        private _vehicle = objectParent ls_player;
        if (ls_player == currentPilot _vehicle) then {
            _vehicle call FUNC(impulse);
        };
    }, {},
    [DIK_MOUSEUP, [false, true, false]] // Ctrl + Mouse Wheel Up
] call CBA_fnc_addKeybind;

[
    _category, QGVAR(key_impulseDown),
    ["Activate Repulsor", "Decreases the ship's impulsor level, or activates the repulsor if impulsor is disabled."], {
        private _vehicle = objectParent ls_player;
        if (ls_player == currentPilot _vehicle) then {
            _vehicle call FUNC(repulse);
        };
    }, {},
    [DIK_MOUSEDOWN, [false, true, false]] // Ctrl + Mouse Wheel Down
] call CBA_fnc_addKeybind;

[
    _category, QGVAR(key_repulse),
    ["Emergency Stop", "Immediately activates the repulsor."], {
        private _vehicle = objectParent ls_player;
        if (ls_player == currentPilot _vehicle) then {
            [_vehicle, -300] call FUNC(repulse); // Arbitrarily big number to always set it to repulse
        };
    }
] call CBA_fnc_addKeybind;
