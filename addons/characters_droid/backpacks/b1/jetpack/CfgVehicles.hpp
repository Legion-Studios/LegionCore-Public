class ls_droidBackpack_b1_jetpack: ls_droidBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_jetpack_backpack);

    model = QPATHTOF(backpacks\b1\jetpack\ls_backpack_droid_b1_jetpack.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\jetpack\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Jetpack_ui_ca.paa);

    maximumLoad = 180;

    jen_jetpacks_core_isJetpack = 1;
    jen_jetpacks_core_acceleration = 2;
    jen_jetpacks_core_drag = 8;
    jen_jetpacks_core_fuelCoef = 4;
    jen_jetpacks_core_heatCoef = 1;
    jen_jetpacks_core_ascensionCoef = 1.8;
    jen_jetpacks_core_hoverCoef = 1;
    jen_jetpacks_core_coolCoef = 2;
    jen_jetpacks_core_fuelCapacity = 100;
    jen_jetpacks_core_strafeCoef = 1;
};
class ls_droidBackpack_b1_jetpack_geonosis: ls_droidBackpack_b1_jetpack {
    author = AUTHOR;
    displayName = CSTRING(b1_jetpack_geonosis_backpack);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\jetpack\data\geonosis_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1Jetpack_geonosis_ui_ca.paa);
};
class ls_droidBackpack_b1_jetpack_saboteur: ls_droidBackpack_b1_jetpack {
    author = AUTHOR;
    displayName = CSTRING(b1_jetpack_saboteur_backpack);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\b1\jetpack\data\saboteur\camo1_co.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOF(backpacks\b1\jetpack\data\saboteur\camo1.rvmat)};
    picture = QPATHTOF(data\ui\b1Jetpack_saboteur_ui_ca.paa);
};
