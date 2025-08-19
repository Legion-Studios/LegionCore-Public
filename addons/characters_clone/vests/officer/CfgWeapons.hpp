class ls_cloneVest_officer: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Officer Vest";

    model = QPATHTOF(vests\officer\ls_vest_clone_officer.p3d);
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\officer\ls_vest_clone_officer.p3d);
        hiddenSelections[] = {};

        mass = 100;

        class HitpointsProtectionInfo {
            class Chest {
                hitpointName = "HitChest";
                armor = 10;
                passThrough = 0.3;
            };
            class Legs {
                hitpointName = "HitLegs";
                armor = 10;
                passThrough = 0.3;
            };
            class Arms {
                hitpointName = "HitArms";
                armor = 4;
                passThrough = 0.3;
            };
        };
    };
};
