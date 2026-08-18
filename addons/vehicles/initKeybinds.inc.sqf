#include "\ls\core\addons\common\data\hpp\defineDIKCodes.hpp"

[
    _category, QGVAR(key_animAllDoor),
    ["Toggle All Doors", "Opens/closes all doors"], {
        private _vehicle = objectParent ls_player;
        if ([_vehicle, ls_player] call EFUNC(common,isPilot)) then {
            [_vehicle, "allDoor"] call FUNC(keybindAnimation);
        };
        nil;
    }, {},
    [DIK_Z, [false, true, false]] // Ctrl-Z
] call CBA_fnc_addKeybind;

[
    _category, QGVAR(key_animLeftDoor),
    ["Toggle Left Doors", "Opens/closes left doors"], {
        private _vehicle = objectParent ls_player;
        if ([_vehicle, ls_player] call EFUNC(common,isPilot)) then {
            [_vehicle, "leftDoor"] call FUNC(keybindAnimation);
        };
        nil;
    }
] call CBA_fnc_addKeybind;

[
    _category, QGVAR(key_animRightDoor),
    ["Toggle Right Doors", "Opens/closes right doors"], {
        private _vehicle = objectParent ls_player;
        if ([_vehicle, ls_player] call EFUNC(common,isPilot)) then {
            [_vehicle, "rightDoor"] call FUNC(keybindAnimation);
        };
        nil;
    }
] call CBA_fnc_addKeybind;

[
    _category, QGVAR(key_animRamp),
    ["Toggle Ramp", "Opens/closes vehicle ramp(s)"], {
        private _vehicle = objectParent ls_player;
        if ([_vehicle, ls_player] call EFUNC(common,isPilot)) then {
            [_vehicle, "ramp"] call FUNC(keybindAnimation);
        };
        nil;
    }, {},
    [DIK_C, [false, true, false]] // Ctrl-C
] call CBA_fnc_addKeybind;

[
    _category, QGVAR(key_animAllAnims),
    ["Toggle All Animations", "Toggles all configured animations"], {
        private _vehicle = objectParent ls_player;
        if ([_vehicle, ls_player] call EFUNC(common,isPilot)) then {
            [_vehicle, "allAnims"] call FUNC(keybindAnimation);
        };
    }
] call CBA_fnc_addKeybind;

[
    _category, QGVAR(key_vivLoad),
    ["Load Vehicle", "Loads the closest compatible vehicle"], {
        private _vehicle = objectParent ls_player;
        if ([_vehicle, ls_player] call EFUNC(common,isPilot) and { _vehicle call FUNC(vivCanLoad) }) then {
            _vehicle call FUNC(vivLoad);
        };
    }
] call CBA_fnc_addKeybind;

[
    _category, QGVAR(key_vivUnload),
    ["Unload All Vehicles", "Unloads all currently loaded vehicles"], {
        private _vehicle = objectParent ls_player;
        if ([_vehicle, ls_player] call EFUNC(common,isPilot)) then {
            _vehicle call FUNC(vivUnload);
        };
    }
] call CBA_fnc_addKeybind;
