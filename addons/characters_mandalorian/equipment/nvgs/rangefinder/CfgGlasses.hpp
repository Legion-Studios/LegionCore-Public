class ls_mandalorian_rangefinder_hud: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Mandalorian Rangefinder";

    model = QPATHTOF(equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_off.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\original\data\original_co.paa)
    };
    picture = QPATHTOF(data\ui\rangefinder_ui_ca.paa);

    hoa_sling_slingWithHelmet = 1;
};
