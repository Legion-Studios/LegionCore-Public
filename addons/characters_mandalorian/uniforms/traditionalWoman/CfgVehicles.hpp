class ls_mandalorian_traditionalWoman: ls_mandalorian_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Warrior (Woman)";

    uniformClass = "ls_mandalorianUniform_traditionalWoman";
    model = QPATHTOF(uniforms\traditionalWoman\ls_uniform_mandalorian_traditionalWoman.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\traditionalWoman\data\undersuit_co.paa),
        QPATHTOF(uniforms\traditionalWoman\data\armor_co.paa)
    };

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_traditionalWoman.jpg);
    backpack = "ls_mandalorianBackpack_predef_standard";
};
