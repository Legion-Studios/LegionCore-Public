#include "\ls\core\addons\common\data\hpp\defineDIKCodes.hpp"

[
    _category, QGVAR(key_toggleCamo),
    ["Toggle Active Camo", "Toggle active camo on/off."], {
        private _unitOrVehicle = vehicle ls_player;
        if (_unitOrVehicle getVariable [QGVAR(active), false]) then {
            _unitOrVehicle call FUNC(deactivate);
        } else {
            _unitOrVehicle call FUNC(activate);
        };
    }
] call CBA_fnc_addKeybind;
