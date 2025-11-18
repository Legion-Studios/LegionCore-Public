class ls_cloneVest_gunner: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Gunner Vest";

    model = QPATHTOF(vests\gunner\ls_cloneVest_gunner.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\gunner\data\camo1_co.paa),
        QPATHTOF(vests\gunner\data\camo2_co.paa),
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\gunner\ls_cloneVest_gunner.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2",
        };

        mass = 100;

        class HitpointsProtectionInfo {
            class Head {
                HitpointName = "HitHead";
                armor = 8;
                passThrough = 0.5;
            };
        };
    };
};
