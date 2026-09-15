class ls_imperial_rebreather: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(rebreather);

    model = QPATHTOF(helmets\army\ls_helmet_imperial_rebreather.p3d);
    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_co.paa),
        QPATHTOF(helmets\army\data\rebreather_co.paa)
    };
    picture = QPATHTOF(data\ui\rebreather_ui_ca.paa);
};
class ls_imperial_rebreather_black: ls_imperial_rebreather {
    author = AUTHOR;
    displayName = CSTRING(rebreather_black);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_black_co.paa),
        QPATHTOF(helmets\army\data\rebreather_black_co.paa)
    };
    picture = QPATHTOF(data\ui\rebreather_black_ui_ca.paa);
};
class ls_imperial_rebreather_isb: ls_imperial_rebreather {
    author = AUTHOR;
    displayName = CSTRING(rebreather_isb);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_isb_co.paa),
        QPATHTOF(helmets\army\data\rebreather_isb_co.paa)
    };
    picture = QPATHTOF(data\ui\rebreather_isb_ui_ca.paa);
};
class ls_imperial_rebreather_mudtrooper: ls_imperial_rebreather {
    author = AUTHOR;
    displayName = CSTRING(rebreather_mudtrooper);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(helmets\army\data\rebreather_mudtrooper_co.paa)
    };
    picture = QPATHTOF(data\ui\rebreather_mudtrooper_ui_ca.paa);
};
