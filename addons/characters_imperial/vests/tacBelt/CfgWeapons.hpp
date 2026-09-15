class ls_imperialVest_army_tacbelt: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(army_tacbelt);
    descriptionShort = "$STR_A3_SP_NOARMOR";

    model = QPATHTOF(vests\TacBelt\ls_vest_imperial_army_tacbelt.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\tacbelt\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\tacbelt_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\TacBelt\ls_vest_imperial_army_tacbelt.p3d);
        hiddenSelections[] = {"camo1"};

        ARMOR_HELMET_NONE;
    };
};

class ls_imperialVest_army_tacbelt_black: ls_imperialVest_army_tacbelt {
    author = AUTHOR;
    displayName = CSTRING(army_black_tacbelt);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\tacbelt\data\camo1_black_co.paa)
    };
    picture = QPATHTOF(data\ui\tacbelt_black_ui_ca.paa);
};

class ls_imperialVest_army_tacbelt_mudtrooper: ls_imperialVest_army_tacbelt {
    author = AUTHOR;
    displayName = CSTRING(army_isb_tacbelt);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\tacbelt\data\camo1_mudtrooper_co.paa)
    };
    picture = QPATHTOF(data\ui\tacbelt_mudtrooper_ui_ca.paa);
};

class ls_imperialVest_army_tacbelt_isb: ls_imperialVest_army_tacbelt {
    author = AUTHOR;
    displayName = CSTRING(army_mudtrooper_tacbelt);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\tacbelt\data\camo1_isb_co.paa)
    };
    picture = QPATHTOF(data\ui\tacbelt_isb_ui_ca.paa);
};
