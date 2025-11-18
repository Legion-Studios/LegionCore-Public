class ls_newRepublicVest_naval: ls_vest_base {
    scope = 2;
    author = AUTHOR;

    displayName="New Republic Naval Armor";
    model = QPATHTOF(vests\naval\ls_vest_newRepublic_naval.p3d);

    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\naval\data\camo_co.paa),
        QPATHTOF(vests\naval\data\pouches_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\naval\ls_vest_newRepublic_naval.p3d);
        hiddenSelections[] = {"camo", "camo1"};
        class HitpointsProtectionInfo {
            class Abdomen {
                hitpointName = "HitAbdomen";
                armor = 12;
                passThrough = 0.3;
            };

            class Chest {
                hitpointName = "HitChest";
                armor = 12;
                passThrough = 0.3;
            };
        };
    };
};

class ls_newRepublicVest_naval_light: ls_newRepublicVest_naval {
    scope = 2;
    author = AUTHOR;

    displayName="New Republic Naval Light Armor";

    model = QPATHTOF(vests\naval\ls_vest_newRepublic_naval_light.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\naval\data\camo_co.paa),
        QPATHTOF(vests\naval\data\pouches_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\naval\ls_vest_newRepublic_naval_light.p3d);
    };
};

class ls_newRepublicVest_naval_medium: ls_newRepublicVest_naval {
    scope = 2;
    author = AUTHOR;

    displayName="New Republic Naval Medium Armor";
    model = QPATHTOF(vests\naval\ls_vest_newRepublic_naval_medium.p3d);

    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\naval\data\camo_co.paa),
        QPATHTOF(vests\naval\data\pouches_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\naval\ls_vest_newRepublic_naval_medium.p3d);
    };
};

class ls_newRepublicVest_naval_heavy: ls_newRepublicVest_naval {
    scope = 2;
    author = AUTHOR;

    displayName="New Republic Naval Heavy Armor";
    model = QPATHTOF(vests\naval\ls_vest_newRepublic_naval_heavy.p3d);

    hiddenSelections[] = {"camo", "camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\naval\data\camo_co.paa),
        QPATHTOF(vests\naval\data\pouches_co.paa),
        QPATHTOF(vests\naval\data\extras_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\naval\ls_vest_newRepublic_naval_heavy.p3d);
        hiddenSelections[] = {"camo", "camo1", "camo2"};
    };
};
