class lsd_gar_alphaArc_vest_blue: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Alpha ARC Vest (Blue)";

    model = QPATHTOF(vests\alphaArc\lsd_gar_alphaArc_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\alphaArc\data\Alpha_pauldron_Blue_co.paa),
        QPATHTOF(vests\alphaArc\data\Alpha_kama_Blue_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\alphaArc\lsd_gar_alphaArc_vest.p3d);
        containerClass = "Supply100";
        hiddenSelections[] = {"camo1", "camo2"};
        mass = 100;
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName = "HitChest";
                armor = 10;
                PassThrough = 0.3;
            };
            class Legs {
                hitpointName = "HitLegs";
                armor = 10;
                passThrough = 0.3;
            };
            class Arms {
                hitpointName = "HitArms";
                armor = 4;
                passThrough = 0.3;
            };
        };
    };
};

class lsd_gar_alphaArc_vest_red: lsd_gar_alphaArc_vest_blue {
    author = AUTHOR;
    displayName = "Clone Alpha ARC Vest (Red)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\alphaArc\data\Alpha_pauldron_Red_co.paa),
        QPATHTOF(vests\alphaArc\data\Alpha_kama_Red_co.paa)
    };
};

class lsd_gar_alphaArc_vest_yellow: lsd_gar_alphaArc_vest_blue {
    author = AUTHOR;
    displayName = "Clone Alpha ARC Vest (Yellow)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\alphaArc\data\Alpha_pauldron_Yellow_co.paa),
        QPATHTOF(vests\alphaArc\data\Alpha_Kama_Yellow_co.paa)
    };
};
