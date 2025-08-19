class ls_cloneBackpack_standard: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Backpack";
    model = QPATHTOF(backpacks\standard\ls_backpack_clone_standard.p3d);

    hiddenSelections[] = {
        "backpack",
        "cloth",
        "radio",
        "rockets",
        "medic",
        "bacta",
        "ammo",
        "heavy",
        "supplies",
        "lower_supplies",
        "canister",
        "grenade"
    };

    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // backpack
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // cloth
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };

    maximumload = 150;
};

class ls_cloneBackpack_radio: ls_cloneBackpack_standard {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Radio Backpack";

    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // backpack
        "", // cloth
        QPATHTOF(backpacks\standard\data\radio_co.paa) // radio
    };
};

class ls_cloneBackpack_rocket: ls_cloneBackpack_standard {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Rocket Backpack";

    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // backpack
        "", // cloth
        "", // radio
        QPATHTOF(backpacks\standard\data\rockets_co.paa), // rockets
    };

    maximumload = 200;
};

class ls_cloneBackpack_medic: ls_cloneBackpack_standard {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Medic Backpack";

    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // backpack
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // cloth
        "", // radio
        "", // rockets
        QPATHTOF(backpacks\standard\data\medic_CO.paa), // medic
        QPATHTOF(backpacks\standard\data\bacta_CO.paa) // bacta
    };

    maximumload = 200;
};

class ls_cloneBackpack_ammo: ls_cloneBackpack_standard {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Ammobearer Backpack";

    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // backpack
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // cloth
        "", // radio
        "", // rockets
        "", // medic
        "", // bacta
        QPATHTOF(backpacks\standard\data\ammo_co.paa) // ammo
    };

    maximumload = 200;
};

class ls_cloneBackpack_heavy: ls_cloneBackpack_standard {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Heavy Backpack";

    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // backpack
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // cloth
        "", // radio
        "", // rockets
        "", // medic
        "", // bacta
        "", // ammo
        QPATHTOF(backpacks\standard\data\heavy_CO.paa) // heavy
    };

    maximumload = 200;
};
