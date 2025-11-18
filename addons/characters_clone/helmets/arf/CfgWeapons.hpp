class ls_cloneHelmet_arf: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone ARF Helmet";

    model = QPATHTOF(helmets\arf\ls_helmet_clone_arf.p3d);
    hiddenSelections[] = {
        "helmet",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\arf\data\helmet_co.paa),
        QPATHTOF(helmets\arf\data\helmet_co.paa)
    };
    picture = QPATHTOF(data\ui\arf_phase1_helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\arf\ls_helmet_clone_arf.p3d);
        hiddenSelections[] = {
            "helmet",
            "visor"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 8;
                passThrough = 0.5;
            };
            class Face {
                hitpointName = "HitFace";
                armor = 8;
                passThrough = 0.5;
            };
        };
    };
};
