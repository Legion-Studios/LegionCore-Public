class ls_cloneBackpack_standard: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(backpack);
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
    picture = QPATHTOF(data\ui\standardBackpack_ui_ca.paa);

    maximumload = 150;
};

class ls_cloneBackpack_radio: ls_cloneBackpack_standard {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(radio_backpack);

    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // backpack
        "", // cloth
        QPATHTOF(backpacks\standard\data\radio_co.paa) // radio
    };
    picture = QPATHTOF(data\ui\radioBackpack_ui_ca.paa);
};

class ls_cloneBackpack_rocket: ls_cloneBackpack_standard {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(rocket_backpack);

    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // backpack
        "", // cloth
        "", // radio
        QPATHTOF(backpacks\standard\data\rockets_co.paa), // rockets
    };
    picture = QPATHTOF(data\ui\rocketBackpack_ui_ca.paa);

    maximumload = 200;
};

class ls_cloneBackpack_medic: ls_cloneBackpack_standard {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(medic_backpack);

    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // backpack
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // cloth
        "", // radio
        "", // rockets
        QPATHTOF(backpacks\standard\data\medic_CO.paa), // medic
        QPATHTOF(backpacks\standard\data\bacta_CO.paa) // bacta
    };
    picture = QPATHTOF(data\ui\medicBackpack_ui_ca.paa);

    maximumload = 200;
};

class ls_cloneBackpack_ammo: ls_cloneBackpack_standard {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(ammo_backpack);

    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // backpack
        QPATHTOF(backpacks\standard\data\backpack_co.paa), // cloth
        "", // radio
        "", // rockets
        "", // medic
        "", // bacta
        QPATHTOF(backpacks\standard\data\ammo_co.paa) // ammo
    };
    picture = QPATHTOF(data\ui\ammoBackpack_ui_ca.paa);

    maximumload = 200;
};

class ls_cloneBackpack_heavy: ls_cloneBackpack_standard {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(heavy_backpack);

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
    picture = QPATHTOF(data\ui\heavyBackpack_ui_ca.paa);

    maximumload = 200;
};
