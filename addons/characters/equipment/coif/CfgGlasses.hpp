class ls_glasses_coif: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Coif";

    model = QPATHTOF(equipment\coif\ls_equipment_coif.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\coif\data\camo_co.paa)};
    // picture = QPATHTOF(data\ui\coif_ui_ca.paa);

    GOGGLES_OVERLAY_NONE;
};
