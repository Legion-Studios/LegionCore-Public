class ls_cloneVest_recon: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Recon Vest";

    model = QPATHTOF(vests\recon\ls_vest_clone_recon.p3d);
    hiddenSelections[] = {
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\recon\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\recon\ls_vest_clone_recon.p3d);
        hiddenSelections[] = {
            "camo1"
        };

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
