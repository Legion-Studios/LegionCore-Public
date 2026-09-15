class ls_newRepublicVest_naval: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(naval_vest);

    model = QPATHTOF(vests\naval\ls_vest_newRepublic_naval.p3d);
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\naval\data\camo_co.paa),
        QPATHTOF(vests\naval\data\pouches_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\naval\ls_vest_newRepublic_naval.p3d);
        hiddenSelections[] = {"camo", "camo1"};

        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Chest: Chest {};
            class Diaphragm: Diaphragm {};
            class Abdomen: Abdomen {};
            class Arms {
                hitpointName = "HitArms";
                armor = 5;
                passThrough = 0.3;
            };
            class LeftArm: Arms {
                hitpointName = "HitLeftArm";
            };
            class RightArm: Arms {
                hitpointName = "HitRightArm";
            };
        };
    };
};

class ls_newRepublicVest_naval_light: ls_newRepublicVest_naval {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(naval_light_vest);

    model = QPATHTOF(vests\naval\ls_vest_newRepublic_naval_light.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\naval\data\camo_co.paa),
        QPATHTOF(vests\naval\data\pouches_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\naval\ls_vest_newRepublic_naval_light.p3d);

        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Chest: Chest {
                armor = 12;
            };
            class Diaphragm: Diaphragm {
                armor = 12;
            };
            class Abdomen: Abdomen {
                armor = 12;
            };
            class Arms {
                hitpointName = "HitArms";
                armor = 0;
                passThrough = 1;
            };
            class LeftArm: Arms {
                hitpointName = "HitLeftArm";
            };
            class RightArm: Arms {
                hitpointName = "HitRightArm";
            };
        };
    };
};

class ls_newRepublicVest_naval_medium: ls_newRepublicVest_naval {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(naval_medium_vest);
    model = QPATHTOF(vests\naval\ls_vest_newRepublic_naval_medium.p3d);

    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\naval\data\camo_co.paa),
        QPATHTOF(vests\naval\data\pouches_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\naval\ls_vest_newRepublic_naval_medium.p3d);

        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Arms {
                hitpointName = "HitArms";
                armor = 0;
                passThrough = 1;
            };
            class LeftArm: Arms {
                hitpointName = "HitLeftArm";
            };
            class RightArm: Arms {
                hitpointName = "HitRightArm";
            };
        };
    };
};

class ls_newRepublicVest_naval_heavy: ls_newRepublicVest_naval {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(naval_heavy_vest);

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
