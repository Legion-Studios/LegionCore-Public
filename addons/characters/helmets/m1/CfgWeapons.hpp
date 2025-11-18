class ls_helmet_m1: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "M1";

    model = QPATHTOF(helmets\m1\ls_helmet_m1.p3d);
    hiddenSelections[] = {
        "camo",
        "camo1",    // Goggle
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\m1\data\m1_co.paa),
        QPATHTOF(helmets\m1\data\m1_co.paa),
    };
    // picture = QPATHTOF(data\ui\gunslingerHat_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 5;
        uniformModel = QPATHTOF(helmets\m1\ls_helmet_m1.p3d);
        hiddenSelections[] = {
            "camo",
            "camo1",
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 14;
                passThrough = 0.1;
            };
        };
    };
};

class ls_helmet_m1_light: ls_helmet_m1 {
    scope = 2;
    author = AUTHOR;
    displayName = "M1 (Light)";

    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\m1\data\m1_co.paa)
    };

    class ItemInfo: ItemInfo {
        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Head: Head {
                armor = 10;
            };
        };
    };
};
