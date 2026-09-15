class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
    };
};

class Extended_DisplayLoad_EventHandlers {
    class Display3DEN {
        // Needs a small delay to let CBA settings initialize, scheduled was the only way I found that'd work
        ADDON = QUOTE(_this spawn { sleep 0.5; _this call COMPILE_FILE(XEH_init3DEN) });
    };
};
