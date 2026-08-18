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

class Extended_InitPost_EventHandlers {
    class ls_droid_droideka_base {
        class ADDON {
            init = QUOTE(call FUNC(droidekaInit));
        };
    };
    class ls_droid_bx_impostor {
        class ADDON {
            init = QUOTE(call FUNC(impostorInit));
        };
    };
};

class Extended_Hit_Eventhandlers {
    class ls_droid_droideka_base {
        class ace_hitreactions {
            hit = "";
        };
    };
};

class Extended_Killed_Eventhandlers {
    class ls_droid_droideka_base {
        ADDON = QUOTE(call FUNC(deactivateShield));
    };
};

class Extended_Deleted_Eventhandlers {
    class ls_droid_droideka_base {
        ADDON = QUOTE(call FUNC(droidekaDeleted));
    };
};
