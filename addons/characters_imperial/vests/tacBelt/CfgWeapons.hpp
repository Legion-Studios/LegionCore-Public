class ls_imperialVest_army_tacbelt: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Army Combat Belt";

    model = QPATHTOF(vests\TacBelt\ls_vest_imperial_army_tacbelt.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\tacbelt\data\camo1_co.paa)
    };

    picture = QPATHTOF(data\ui\tacbelt_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\TacBelt\ls_vest_imperial_army_tacbelt.p3d);
        hiddenSelections[] = {"camo1"};
    };
};

class ls_imperialVest_army_tacbelt_black: ls_imperialVest_army_tacbelt {
    author = AUTHOR;
    displayName = "Imperial Army Combat Belt (Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\tacbelt\data\camo1_black_co.paa)
    };
};

class ls_imperialVest_army_tacbelt_mudtrooper: ls_imperialVest_army_tacbelt {
    author = AUTHOR;
    displayName = "Imperial Army Combat Belt (Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\tacbelt\data\camo1_mudtrooper_co.paa)
    };
};

class ls_imperialVest_army_tacbelt_isb: ls_imperialVest_army_tacbelt {
    author = AUTHOR;
    displayName = "Imperial Army Combat Belt (ISB)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\tacbelt\data\camo1_isb_co.paa)
    };
};
