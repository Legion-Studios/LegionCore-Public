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

class Extended_Reloaded_EventHandlers {
    class CAManBase {
        GVAR(onReload) = QUOTE(call FUNC(onReload));
    };
};

class Extended_HitPart_EventHandlers {
    class All {
        ADDON = QUOTE((_this select 0) call FUNC(onHit));
    };
};

class Extended_FiredBIS_EventHandlers {
    class CAManBase {
        ADDON = QUOTE(call FUNC(onFired));
    };
};
