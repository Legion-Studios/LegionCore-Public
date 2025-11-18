class ls_glasses_hood: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Hood";

    model = QPATHTOF(equipment\hood\ls_glasses_hood.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\scarf\data\camo1_co.paa),
        QPATHTOF(equipment\hood\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\scarf_ui_ca.paa);

    GOGGLES_OVERLAY_NONE;
};

class ls_glasses_hood_activeCamo: ls_glasses_hood {
    scope = 1;
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa),
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat),
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};
