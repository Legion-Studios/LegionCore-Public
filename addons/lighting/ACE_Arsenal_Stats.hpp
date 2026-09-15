class ACE_Arsenal_Stats {
    class statBase {};
    class GVAR(lightModes): statBase {
        scope = 2;
        displayName = "Flashlight Modes";
        showText = 1;
        textStatement = QUOTE(call FUNC(statTextStatement_lightModes));
        condition = QUOTE(getNumber (_this#1 >> QQUOTE(ADDON) >> 'enabled') >= 1);
        tabs[] = {
            {ARSENAL_TAB_UNIFORMS, ARSENAL_TAB_VESTS, ARSENAL_TAB_HEADGEAR, ARSENAL_TAB_NVGS, ARSENAL_TAB_GOGGLES},
            {}
        };
    };
};
