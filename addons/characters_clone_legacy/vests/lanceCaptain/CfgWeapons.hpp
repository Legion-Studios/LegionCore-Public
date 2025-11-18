class ls_gar_lanceCaptain_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Lance Captain Vest";

    model = QPATHTOF(vests\lanceCaptain\ls_gar_lanceCaptain_vest.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\lanceCaptain\data\kenrobi_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\lanceCaptain\ls_gar_lanceCaptain_vest);
        containerClass = "Supply50";
        hiddenSelections[] = {"camo1", "camo2"};
        mass = 5;

        class HitpointsProtectionInfo {
            class Legs {
                hitpointName = "HitLegs";
                armor = 6;
                passThrough = 0.3;
            };
        };
    };
};

class ls_gar_lanceCommander_vest: ls_gar_lanceCaptain_vest {
    author = AUTHOR;
    displayName = "Republic Lance Commander Vest";
    model = QPATHTOF(vests\lanceCaptain\ls_gar_lanceCommander_vest.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\lanceCaptain\ls_gar_lanceCommander_vest);
    };
};
