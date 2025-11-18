#include "\ls\core\addons\common\data\hpp\defineDIKCodes.hpp"

[
    _category, QGVAR(key_toggleLights),
    ["Toggle Light", "Toggle lights on/off."], {
        private _isLightOn = ls_player getVariable [QGVAR(isLightOn), false];
        if (_isLightOn) then {
            private _equipment = ls_player getVariable [QGVAR(lightEquipment), ""];
            [ls_player, _equipment] call FUNC(disable);
        } else {
            ls_player call FUNC(enable);
        };
    }, {}, [DIK_L, false, true, false] // Ctrl + L
] call CBA_fnc_addKeybind;

[
    _category, QGVAR(key_cycleMode),
    ["Cycle Mode", "Changes the current light mode."], {
        ls_player call FUNC(cycleMode);
    }, {}, [DIK_L, true, true, false] // Shift + Ctrl + L
] call CBA_fnc_addKeybind;
