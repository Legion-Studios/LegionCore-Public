class ls_gar_jediCommander: ls_blufor_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Jedi Commander";

    faction = "ls_jedi";
    editorSubcategory = "ls_edsubcat_republic_jediOrder";

    uniformClass = "ls_garUniform_jediCommander";
    model = QPATHTOF(uniforms\jediCommander\ls_uniform_jediCommander.p3d);
    hiddenSelections[] = {
        "armor_camo",
        "robes_camo",
        "belt_camo",
        "under_camo"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\jediCommander\data\armor_co.paa),
        QPATHTOF(uniforms\jediCommander\data\robes_co.paa),
        QPATHTOF(uniforms\jediCommander\data\belt_co.paa),
        QPATHTOF(uniforms\jediCommander\data\undersuit_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_gar_jediCommander.jpg);
};
