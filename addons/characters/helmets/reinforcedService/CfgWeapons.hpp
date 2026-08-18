class ls_helmet_reinforcedServiceCoif: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(reinforcedService_coif_helmet);
    descriptionShort = "$STR_A3_SP_AL_III";

    model = QPATHTOF(helmets\reinforcedService\ls_helmet_reinforcedService.p3d);
    hiddenSelections[] = {
        "camo",  // Shell
        "camo1", // Strap
        "camo2"  // Coif
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\reinforcedService\data\camo_co.paa),
        "",
        QPATHTOF(helmets\reinforcedService\data\camo_co.paa)
    };
    picture = QPATHTOF(data\ui\reinforcedServiceHelmet_coif_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 35;
        uniformModel = QPATHTOF(helmets\reinforcedService\ls_helmet_reinforcedService.p3d);
        hiddenSelections[] = {"camo", "camo1", "camo2"};

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 8;
                passThrough = 0.5;
            };
        };
    };
};

class ls_helmet_reinforcedService: ls_helmet_reinforcedServiceCoif {
    displayName = CSTRING(reinforcedService_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\reinforcedService\data\camo_co.paa),
        QPATHTOF(helmets\reinforcedService\data\camo_co.paa),
        ""
    };
    picture = QPATHTOF(data\ui\reinforcedServiceHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 30;
    };
};
