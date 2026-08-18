class ls_vest_flakJacket: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(flakJacket_vest);
    descriptionShort = "$STR_A3_SP_AL_III";

    model = QPATHTOF(vests\flakJacket\ls_vest_flakJacket.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\closed_co.paa)
    };
    picture = QPATHTOF(data\ui\flakVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\flakJacket\ls_vest_flakJacket.p3d);
        hiddenSelections[] = {"camo"};

        mass = 60;
        class HitPointsProtectionInfo {
            class Chest {
                hitpointName = "HitChest";
                armor = 16;
                passThrough = 0.4;
            };
            class Diaphragm {
                hitpointName = "HitDiaphragm";
                armor = 16;
                passThrough = 0.4;
            };
            class Abdomen {
                hitpointName = "HitAbdomen";
                armor = 16;
                passThrough = 0.4;
            };
            class Body {
                hitpointName = "HitBody";
                passThrough = 0.4;
            };
        };
    };
};

class ls_vest_flakJacket_brown: ls_vest_flakJacket {
    author = AUTHOR;
    displayName = CSTRING(flakJacket_brown_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\closed_brown_co.paa)
    };
    picture = QPATHTOF(data\ui\flakVest_brown_ui_ca.paa);
};

class ls_vest_flakJacket_pouches: ls_vest_flakJacket {
    author = AUTHOR;
    displayName = CSTRING(flakJacket_pouches_vest);

    model = QPATHTOF(vests\flakJacket\ls_vest_flakJacket_pouches.p3d);
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\closed_co.paa),
        QPATHTOF(vests\flakJacket\data\pouches_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\flakJacket\ls_vest_flakJacket_pouches.p3d);
        hiddenSelections[] = {"camo", "camo1"};
        mass = 70;
    };
};

class ls_vest_flakJacket_pouches_brown: ls_vest_flakJacket_pouches {
    author = AUTHOR;
    displayName = CSTRING(flakJacket_pouches_brown_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\closed_brown_co.paa),
        QPATHTOF(vests\flakJacket\data\pouches_co.paa)
    };
    picture = QPATHTOF(data\ui\flakVest_brown_ui_ca.paa);
};

class ls_vest_flakJacket_pouchesAlt: ls_vest_flakJacket_pouches {
    author = AUTHOR;
    displayName = CSTRING(flakJacket_pouchesAlt_vest);

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
    displayName = CSTRING(flakJacket_pouchesAlt_brown_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\closed_brown_co.paa),
        QPATHTOF(vests\flakJacket\data\pouches_co.paa)
    };
    picture = QPATHTOF(data\ui\flakVest_brown_ui_ca.paa);
};

class ls_vest_flakJacket_open: ls_vest_flakJacket {
    author = AUTHOR;
    displayName = CSTRING(flakJacket_open_vest);

    model = QPATHTOF(vests\flakJacket\ls_vest_flakJacket_open.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\flakJacket\data\open_co.paa)
    };
    picture = QPATHTOF(data\ui\flakVest_open_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\flakJacket\ls_vest_flakJacket_open.p3d);
    };
};
