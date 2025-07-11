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

class Extended_Killed_Eventhandlers {
    class CAManBase {
        ADDON = QUOTE(call FUNC(handleKilled));
    };
};

class Extended_FiredBIS_Eventhandlers {
    class All {
        ADDON = QUOTE(call FUNC(onFired));
    };
};

class Extended_HitPart_EventHandlers {
    class CAManBase {
        ADDON = QUOTE((_this select 0) call FUNC(onHit));
    };
};
