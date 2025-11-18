class ls_gar_airborne_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Airborne Helmet";

    model = QPATHTOF(helmets\airborne\ls_gar_airborne_helmet.p3d);
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[]= {
        QPATHTOF(helmets\airborne\data\camo1_co.paa),
        QPATHTOF(helmets\airborne\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        mass=10;
        uniformModel = QPATHTOF(helmets\airborne\ls_gar_airborne_helmet.p3d);
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
