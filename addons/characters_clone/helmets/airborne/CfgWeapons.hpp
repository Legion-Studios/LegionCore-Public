class ls_cloneHelmet_airborne: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Airborne Helmet";

    model = QPATHTOF(helmets\airborne\ls_helmet_clone_airborne.p3d);
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\airborne\data\camo1_co.paa),
        QPATHTOF(helmets\airborne\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\airborne_helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\airborne\ls_helmet_clone_airborne.p3d);
        hiddenSelections[] = {"camo1", "visor"};

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
