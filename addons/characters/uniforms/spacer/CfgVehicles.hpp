class ls_character_spacer_base: ls_indfor_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Spacer";
    model = QPATHTOF(uniforms\spacer\ls_uniform_spacer.p3d);
    hiddenSelections[] = {
        "camo",
        "camo1",
    };

    uniformClass = "ls_uniform_spacer";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\spacer\data\pants_co.paa),
        QPATHTOF(uniforms\spacer\data\top_co.paa),
    };
};

class ls_character_spacer_alt_base: ls_character_spacer_base {
    displayName = "Spacer (Alt)";

    uniformClass = "ls_uniform_spacer_brown";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\spacer\data\pants_brown_co.paa),
        QPATHTOF(uniforms\spacer\data\top_co.paa),
    };
};

class ls_character_spacer_brown_base: ls_character_spacer_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Spacer (Brown)";

    uniformClass = "ls_uniform_spacer_brown";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\spacer\data\pants_co.paa),
        QPATHTOF(uniforms\spacer\data\top_brown_co.paa),
    };
};

class ls_character_spacer_brown_alt_base: ls_character_spacer_base {
    displayName = "Spacer (Brown alt)";

    uniformClass = "ls_uniform_spacer_brown_alt";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\spacer\data\pants_brown_co.paa),
        QPATHTOF(uniforms\spacer\data\top_brown_co.paa),
    };
};
