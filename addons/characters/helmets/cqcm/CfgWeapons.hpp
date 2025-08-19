class ls_helmet_cqcm: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Close Quarters Combat Helmet";

    model = QPATHTOF(helmets\cqcm\ls_helmet_cqcm.p3d);
    hiddenSelections[] = {
        "camo",
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        "",
        ""
    };

    class ItemInfo: ItemInfo {
        mass = 5;
        uniformModel = QPATHTOF(helmets\cqcm\ls_helmet_cqcm.p3d);
        hiddenSelections[] = {"camo","camo1","camo2"};

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 16;
                passThrough = 0.1;
            };
        };
    };
};

class ls_helmet_cqcm_visor: ls_helmet_cqcm {
    displayName = "Close Quarters Combat Helmet (w/ Visor)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        "",
        QPATHTOF(helmets\cqcm\data\camo_ca.paa)
    };
};

class ls_helmet_cqcm_full: ls_helmet_cqcm {
    displayName = "Close Quarters Combat Mask";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        QPATHTOF(helmets\cqcm\data\camo_ca.paa)
    };

    class ItemInfo: ItemInfo {
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Face {
                hitpointName = "HitFace";
                armor = 16;
                passThrough = 0.1;
            };
        };
    };
};

class ls_helmet_cqcm_alt: ls_helmet_cqcm_full {
    displayName = "Close Quarters Combat Mask (Alt)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        ""
    };
};

// New Republic
class ls_helmet_cqcm_newRepublic: ls_helmet_cqcm {
    displayName = "Close Quarters Combat Helmet (New Republic)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_white_co.paa),
        "",
        ""
    };
};

class ls_helmet_cqcm_visor_newRepublic: ls_helmet_cqcm_visor {
    displayName = "Close Quarters Combat Helmet (w/ Visor)(New Republic)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_white_co.paa),
        "",
        QPATHTOF(helmets\cqcm\data\camo_white_ca.paa)
    };
};

class ls_helmet_cqcm_full_newRepublic: ls_helmet_cqcm_full {
    displayName = "Close Quarters Combat Mask (New Republic)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_white_co.paa),
        QPATHTOF(helmets\cqcm\data\camo_white_co.paa),
        QPATHTOF(helmets\cqcm\data\camo_white_ca.paa)
    };
};

class ls_helmet_cqcm_alt_newRepublic: ls_helmet_cqcm_alt {
    displayName = "Close Quarters Combat Mask (Alt)(New Republic)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_white_co.paa),
        QPATHTOF(helmets\cqcm\data\camo_white_co.paa),
        ""
    };
};
