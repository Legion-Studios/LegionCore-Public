class ACE_Arsenal_Stats {
    class ls_statBase;
    class GVAR(camouflageCoef): ls_statBase {
        scope = 2;
        displayName = "Camoflauge Coefficient";
        tabs[] = {{ARSENAL_TAB_UNIFORMS}, {}};

        stats[] = {QGVAR(camouflageCoef)};
        condition = QUOTE(call FUNC(statCondition_hasActiveCamo));
        showText = 1;
        textStatement = QUOTE(call FUNC(statTextStatement_camouflageCoef));
        showBar = 1;
        barStatement = QUOTE(call FUNC(statBarStatement_camouflageCoef));
    };
};
