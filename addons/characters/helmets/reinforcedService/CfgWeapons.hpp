class ls_helmet_reinforcedServiceCoif: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Reinforced Service Helmet [Coif]";

    model = QPATHTOF(helmets\reinforcedService\ls_helmet_reinforcedService.p3d);
    hiddenSelections[] = {
        "camo",     // Shell
        "camo1",    // Strap
        "camo2"     // Coif
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\reinforcedService\data\camo_co.paa),
        "",
        QPATHTOF(helmets\reinforcedService\data\camo_co.paa)
    };

    class ItemInfo: ItemInfo {
        mass = 5;
        uniformModel = QPATHTOF(helmets\reinforcedService\ls_helmet_reinforcedService.p3d);
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

class ls_helmet_reinforcedService: ls_helmet_reinforcedServiceCoif {
    displayName = "Reinforced Service Helmet";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\reinforcedService\data\camo_co.paa),
        QPATHTOF(helmets\reinforcedService\data\camo_co.paa),
        ""
    };
};
