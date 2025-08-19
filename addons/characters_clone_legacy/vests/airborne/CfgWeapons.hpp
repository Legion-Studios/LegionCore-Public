class ls_gar_airborne_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Airborne Vest";

    model = QPATHTOF(vests\airborne\ls_gar_airborne_vest.p3d);
    hiddenSelections[] = {"ammo", "camo1", "camo2", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\airborne_vest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\airborne\ls_gar_airborne_vest.p3d);
        hiddenSelections[] = {"ammo", "camo1", "camo2", "pauldron"};
        mass = 80;
        containerClass = "Supply100";

        class HitpointsProtectionInfo {
            class Legs {
                hitpointName = "HitLegs";
                armor = 6;
                passThrough = 0.3;
            };
        };
    };
};

class ls_gar_airborneNCO_vest: ls_gar_airborne_vest {
    author = AUTHOR;
    displayName = "Clone Airborne NCO Vest";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\airborne_nco_vest_ui_ca.paa);
};

class ls_gar_airborneCFR_vest: ls_gar_airborneNCO_vest {
    author = AUTHOR;
    displayName = "Clone Airborne CFR Vest";

    model = QPATHTOF(vests\airborne\ls_gar_airborneCFR_vest.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\airborne\ls_gar_airborneCFR_vest.p3d);
    };
};

class ls_gar_airborneLight_vest: ls_gar_airborneNCO_vest {
    author = AUTHOR;
    displayName = "Clone Airborne Light Vest";

    model = QPATHTOF(vests\airborne\ls_gar_airborneLight_vest.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\airborne\ls_gar_airborneLight_vest.p3d);
    };
};

class ls_gar_airborneOfficer_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Airborne Officer vest";

    model = QPATHTOF(vests\airborne\ls_gar_airborneOfficer_vest.p3d);
    hiddenSelections[] = {
        "ammo",
        "camo1",
        "camo2",
        "camo3"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\heavy\heavy_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_officer_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\airborne\ls_gar_airborneOfficer_vest.p3d);
        hiddenSelections[] = {
            "ammo",
            "camo1",
            "camo2",
            "camo3"
        };
        mass = 80;
        containerClass = "Supply100";
    };
};
