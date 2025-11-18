[
    QGVAR(ai_enableFlashlights), "CHECKBOX",
    ["Enable Flashlights for AI", "If enabled, AI will automatically enable gear-mounted flashlights at night."],
    _category, true, 1, {
        if (isServer) then {
            params ["_enabled"];
            if (_enabled and {!GVAR(ai_flashlightThread)}) then {
                TRACE_1("Start AI flashlight loop",_this);
                GVAR(ai_flashlightThread) = true;
                [FUNC(ai_flashlightHandler), [], 1] call CBA_fnc_waitAndExecute;
            };
        };
    }
] call CBA_fnc_addSetting;
