class ls_gar_heavy_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Heavy Vest";

    model = QPATHTOF(vests\heavy\ls_gar_heavy_vest.p3d);
    hiddenSelections[] = {
        "ammo",
        "camo1",
        "camo2",
        "camo3",
        "pauldron"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\airborne_nco_vest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\heavy\ls_gar_heavy_vest.p3d);
        containerClass = "Supply100";
        hiddenSelections[] = {
            "ammo",
            "camo1",
            "camo2",
            "camo3",
            "pauldron"
        };
        mass = 80;
        class HitpointsProtectionInfo {
            class Legs {
                hitpointName = "HitLegs";
                armor = 6;
                passThrough = 0.3;
            };
        };
    };
};

class ls_gar_heavyAlt_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Heavy Alternate Vest";

    model = QPATHTOF(vests\heavy\ls_gar_heavyAlt_vest.p3d);
    hiddenSelections[] = {
        "ammo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "pauldron"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\bag\bag_co.paa),
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_reconNCO_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\heavy\ls_gar_heavyAlt_vest.p3d);
        containerClass = "Supply100";
        hiddenSelections[] = {
            "ammo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "pauldron"
        };
        mass = 80;
        class HitpointsProtectionInfo {
            class Legs {
                hitpointName = "HitLegs";
                armor = 6;
                passThrough = 0.3;
            };
        };
    };
};
