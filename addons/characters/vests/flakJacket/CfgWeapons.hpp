class ls_vest_flakJacket: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Flak Jacket";

    model = QPATHTOF(vests\flakJacket\ls_vest_flakJacket.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\closed_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\flakJacket\ls_vest_flakJacket.p3d);
        hiddenSelections[] = {"camo"};

        class HitPointsProtectionInfo {
            class Chest {
                hitpointName = "HitChest";
                armor = 16;
                passThrough = 0.1;
            };
            class Diaphragm {
                hitpointName = "HitDiaphragm";
                armor = 16;
                passThrough = 0.1;
            };
            class Abdomen {
                hitpointName = "HitAbdomen";
                armor = 16;
                passThrough = 0.1;
            };
        };
    };
};

class ls_vest_flakJacket_brown: ls_vest_flakJacket {
    author = AUTHOR;
    displayName = "Flak Jacket [Brown]";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\closed_brown_co.paa)
    };
};

class ls_vest_flakJacket_pouches: ls_vest_flakJacket {
    author = AUTHOR;
    displayName = "Flak Jacket w/ pouches";

    model = QPATHTOF(vests\flakJacket\ls_vest_flakJacket_pouches.p3d);
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\closed_co.paa),
        QPATHTOF(vests\flakJacket\data\pouches_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\flakJacket\ls_vest_flakJacket_pouches.p3d);
        hiddenSelections[] = {"camo", "camo1"};
    };
};

class ls_vest_flakJacket_pouches_brown: ls_vest_flakJacket_pouches {
    author = AUTHOR;
    displayName = "Flak Jacket w/ pouches [Brown]";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\closed_brown_co.paa),
        QPATHTOF(vests\flakJacket\data\pouches_co.paa)
    };
};

class ls_vest_flakJacket_pouchesAlt: ls_vest_flakJacket_pouches {
    author = AUTHOR;
    displayName = "Flak Jacket w/ pouches [Alt]";

    model = QPATHTOF(vests\flakJacket\ls_vest_flakJacket_pouchesAlt.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\closed_co.paa),
        QPATHTOF(vests\flakJacket\data\pouches_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\flakJacket\ls_vest_flakJacket_pouchesAlt.p3d);
    };
};

class ls_vest_flakJacket_pouchesAlt_brown: ls_vest_flakJacket_pouchesAlt {
    author = AUTHOR;
    displayName = "Flak Jacket w/ pouches [Brown][Alt]";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\closed_brown_co.paa),
        QPATHTOF(vests\flakJacket\data\pouches_co.paa)
    };
};

class ls_vest_flakJacket_open: ls_vest_flakJacket {
    author = AUTHOR;
    displayName = "Flak Jacket [Open]";

    model = QPATHTOF(vests\flakJacket\ls_vest_flakJacket_open.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\open_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\flakJacket\ls_vest_flakJacket_open.p3d);
    };
};
