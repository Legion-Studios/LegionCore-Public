class ls_cloneVest_gunner: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(gunner_vest);
    descriptionShort = "$STR_A3_SP_AL_II";

    model = QPATHTOF(vests\gunner\ls_cloneVest_gunner.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\gunner\data\camo1_co.paa),
        QPATHTOF(vests\gunner\data\camo2_co.paa),
    };
    picture = QPATHTOF(data\ui\gunnerVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\gunner\ls_cloneVest_gunner.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2",
        };
        mass = 100;

        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Head {
                armor = 2;
                passThrough = 0.5;
                hitpointName = "HitHead";
            };
            class Chest: Head {
                passThrough = 0.2;
                hitpointName = "HitChest";
            };
            class Diaphragm: Chest {
                hitpointName = "HitDiaphragm";
            };
            class Abdomen: Chest {
                hitpointName = "HitAbdomen";
            };
        };
    };
};
