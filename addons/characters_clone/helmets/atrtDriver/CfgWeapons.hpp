class ls_cloneHelmet_atrtDriver: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone AT-RT Driver Helmet";

    model = QPATHTOF(helmets\atrtDriver\ls_helmet_clone_atrtDriver.p3d);
    hiddenSelections[] = {
        "helmet",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\atrtDriver\data\helmet_CO.paa),
        QPATHTOF(helmets\atrtDriver\data\helmet_CO.paa)
    };
    // picture = QPATHTOF(data\ui\atrtDriver_phase1_helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\atrtDriver\ls_helmet_clone_atrtDriver.p3d);
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
