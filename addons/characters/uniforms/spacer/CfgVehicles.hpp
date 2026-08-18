class ls_spacer_base: ls_indfor_unit_base {
    scope = 1;
    author = AUTHOR;

    uniformClass = "ls_uniform_spacer";
    model = QPATHTOF(uniforms\spacer\ls_uniform_spacer.p3d);
    hiddenSelections[] = {
        "camo",
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\spacer\data\pants_co.paa),
        QPATHTOF(uniforms\spacer\data\top_co.paa),
    };
};

class ls_spacer_alt_base: ls_spacer_base {
    author = AUTHOR;

    uniformClass = "ls_uniform_spacer_brown";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\spacer\data\pants_brown_co.paa),
        QPATHTOF(uniforms\spacer\data\top_co.paa),
    };
};

class ls_spacer_brown_base: ls_spacer_base {
    author = AUTHOR;

    uniformClass = "ls_uniform_spacer_brown";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\spacer\data\pants_co.paa),
        QPATHTOF(uniforms\spacer\data\top_brown_co.paa),
    };
};

class ls_spacer_brown_alt_base: ls_spacer_base {
    author = AUTHOR;

    uniformClass = "ls_uniform_spacer_brown_alt";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\spacer\data\pants_brown_co.paa),
        QPATHTOF(uniforms\spacer\data\top_brown_co.paa),
    };
};
