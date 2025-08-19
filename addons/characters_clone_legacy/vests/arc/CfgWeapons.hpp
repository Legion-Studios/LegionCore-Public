class ls_gar_arc_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone ARC Vest";

    model = QPATHTOF(vests\arc\ls_gar_arc_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\arc\data\arc_accessories_co.paa),
        QPATHTOF(vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVest_commander_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\arc\ls_gar_arc_vest.p3d);
        containerClass = "Supply100";
        hiddenSelections[] = {"camo1", "camo2"};
        mass = 100;
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName = "HitChest";
                armor = 10;
                PassThrough = 0.3;
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

class ls_gar_arcHologram_vest: ls_gar_arc_vest {
    author = AUTHOR;
    displayName = "Clone ARC Vest (Hologram)";
    model = QPATHTOF(vests\arc\ls_gar_arc_hologram_vest.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\arc\ls_gar_arc_hologram_vest.p3d);
    };
};
