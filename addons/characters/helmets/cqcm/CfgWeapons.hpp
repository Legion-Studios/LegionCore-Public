class ls_helmet_cqcm: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(cqcm_helmet);

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
    picture = QPATHTOF(data\ui\cqcHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\cqcm\ls_helmet_cqcm.p3d);
        hiddenSelections[] = {"camo", "camo1", "camo2"};
    };
};

class ls_helmet_cqcm_visor: ls_helmet_cqcm {
    author = AUTHOR;
    displayName = CSTRING(cqcm_visor_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        "",
        QPATHTOF(helmets\cqcm\data\camo_ca.paa)
    };
    picture = QPATHTOF(data\ui\cqcHelmet_visor_ui_ca.paa);
};

class ls_helmet_cqcm_full: ls_helmet_cqcm {
    author = AUTHOR;
    displayName = CSTRING(cqcm_mask_visor_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        QPATHTOF(helmets\cqcm\data\camo_ca.paa)
    };
    picture = QPATHTOF(data\ui\cqcHelmet_full_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 35;
        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
            class Face {
                hitpointName = "HitFace";
                armor = 3;
                passThrough = 0.5;
            };
        };
    };
};

class ls_helmet_cqcm_alt: ls_helmet_cqcm_full {
    author = AUTHOR;
    displayName = CSTRING(cqcm_mask_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        ""
    };
    picture = QPATHTOF(data\ui\cqcHelmet_mask_ui_ca.paa);
};
