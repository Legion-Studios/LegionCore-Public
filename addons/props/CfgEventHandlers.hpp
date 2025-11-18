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
    class ls_reinsertTerminal {
        class GVAR(reinsertTerminal) {
            clientInit = QUOTE(call FUNC(reinsertTerminal_init));
        };
    };
};
