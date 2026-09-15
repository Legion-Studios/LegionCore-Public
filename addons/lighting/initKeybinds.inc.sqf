#include "\ls\core\addons\common\data\hpp\defineDIKCodes.hpp"

[
    _category, QGVAR(key_toggleLights),
    ["Toggle Light", "Toggle lights on/off."], {
        private _player = cameraOn;
        private _isLightOn = _player getVariable [QGVAR(isLightOn), false];
        if (_isLightOn) then {
            private _equipment = _player getVariable [QGVAR(lightEquipment), ""];
            [_player, _equipment] call FUNC(disable);
        } else {
            _player call FUNC(enable);
        };
    }, {}, [DIK_L, false, true, false] // Ctrl + L
] call CBA_fnc_addKeybind;

[
    _category, QGVAR(key_cycleMode),
    ["Cycle Mode", "Changes the current light mode."], {
        cameraOn call FUNC(cycleMode);
    }, {}, [DIK_L, true, true, false] // Shift + Ctrl + L
] call CBA_fnc_addKeybind;
