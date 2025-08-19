class ls_glasses_scarf: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Scarf";

    model = QPATHTOF(equipment\scarf\ls_glasses_scarf.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\scarf\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\scarf_ui_ca.paa);

    GOGGLES_OVERLAY_NONE;
};

class ls_glasses_scarf_blue: ls_glasses_scarf {
    author = AUTHOR;
    displayName = "Scarf (Blue)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\scarf\data\camo1_blue_co.paa)
    };
    picture = QPATHTOF(data\ui\scarf_blue_ui_ca.paa);
};

class ls_glasses_scarf_green: ls_glasses_scarf {
    author = AUTHOR;
    displayName = "Scarf (Green)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\scarf\data\camo1_green_co.paa)
    };
    picture = QPATHTOF(data\ui\scarf_green_ui_ca.paa);
};

class ls_glasses_scarf_orange: ls_glasses_scarf {
    author = AUTHOR;
    displayName = "Scarf (Orange)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\scarf\data\camo1_orange_co.paa)
    };
    picture = QPATHTOF(data\ui\scarf_orange_ui_ca.paa);
};

class ls_glasses_scarf_red: ls_glasses_scarf {
    author = AUTHOR;
    displayName = "Scarf (Red)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\scarf\data\camo1_red_co.paa)
    };
    picture = QPATHTOF(data\ui\scarf_red_ui_ca.paa);
};

class ls_glasses_scarf_stewart: ls_glasses_scarf {
    author = AUTHOR;
    displayName = "Scarf (Stewart)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\scarf\data\camo1_stewart_co.paa)
    };
    picture = QPATHTOF(data\ui\scarf_stewart_ui_ca.paa);
};

class ls_glasses_scarf_white: ls_glasses_scarf {
    author = AUTHOR;
    displayName = "Scarf (White)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\scarf\data\camo1_white_co.paa)
    };
    picture = QPATHTOF(data\ui\scarf_white_ui_ca.paa);
};
