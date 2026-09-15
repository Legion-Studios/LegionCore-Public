class ls_mandalorianVest_standard: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(vest);
    descriptionShort = "$STR_A3_SP_AL_IV";

    model = QPATHTOF(vests\standard\ls_vest_mandalorian.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\standard\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\traditionalVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\standard\ls_vest_mandalorian.p3d);
        hiddenSelections[] = {"camo1"};
        mass = 120;

        // Quite high numbers, but still weaker than vanilla EOD vests
        class HitpointsProtectionInfo {
            class Chest {
                hitpointName = "HitChest";
                armor = 18;
                passThrough = 0.1;
            };
            class Diaphragm {
                hitpointName = "HitDiaphragm";
                armor = 18;
                passThrough = 0.1;
            };
            class Abdomen {
                hitpointName = "HitAbdomen";
                armor = 18;
                passThrough = 0.1;
            };
            class Arms {
                hitpointName = "HitArms";
                armor = 10;
                passThrough = 0.3;
            };
            class LeftArm: Arms {
                hitpointName = "HitLeftArm";
            };
            class RightArm: Arms {
                hitpointName = "HitRightArm";
            };
            class Body {
                hitpointName = "HitBody";
                passThrough = 0.1;
            };
        };
    };
};
