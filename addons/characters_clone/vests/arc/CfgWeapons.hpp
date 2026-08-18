class ls_cloneVest_arc: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(arc_vest);
    descriptionShort = "$STR_A3_SP_AL_II";

    model = QPATHTOF(vests\arc\ls_vest_clone_arc.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "camo3"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\arc\data\camo1_co.paa),
        QPATHTOF(vests\arc\data\camo2_co.paa),
        QPATHTOF(vests\arc\data\camo3_co.paa)
    };
    picture = QPATHTOF(data\ui\arcVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\arc\ls_vest_clone_arc.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3"
        };
        mass = 100;

        ARMOR_VEST_ARC;
    };
};

class ls_cloneVest_arc_cadet: ls_cloneVest_arc {
    author = AUTHOR;
    displayName = CSTRING(arc_cadet_vest);

    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\arc\data\camo1_co.paa),
        QPATHTOF(vests\arc\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\arcVest_cadet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        class HitpointsProtectionInfo {
            class Chest {
                hitpointName = "HitChest";
                armor = 8;
                passThrough = 0.3;
            };
            class Legs {
                hitpointName = "HitLegs";
                armor = 8;
                passThrough = 0.3;
            };
        };
    };
};
