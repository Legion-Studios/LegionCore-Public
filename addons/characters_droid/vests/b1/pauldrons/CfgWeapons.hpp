class ls_droidVest_b1_pauldrons: ls_droidVest {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_pauldrons_vest);
    descriptionShort = "$STR_A3_SP_AL_I";

    model = QPATHTOF(vests\b1\pauldrons\ls_vest_b1_pauldrons.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\b1\pauldrons\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\b1PauldronsVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\b1\pauldrons\ls_vest_b1_pauldrons.p3d);
        hiddenSelections[] = {"camo1"};

        class HitpointsProtectionInfo {
            class Arms {
                hitpointName = "HitArms";
                armor = 2;
                passThrough = 0.5;
            };
        };
    };
};

class ls_droidVest_b1_pauldrons_electrostaff: ls_droidVest_b1_pauldrons {
    author = AUTHOR;
    displayName = CSTRING(b1_pauldrons_electrostaff_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\b1\pauldrons\data\electrostaff_camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\b1PauldronsVest_electrostaff_ui_ca.paa);
};
