class ls_meme_theNut: ls_indfor_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "The Pleased Nut";

    uniformClass = "ls_memeUniform_theNut";
    model = QPATHTOF(uniforms\theNut\ls_uniform_theNut.p3d);
    hiddenSelections[] = {"camo", "NotNutBody"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\theNut\data\camo1_co.paa),
        ""
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_meme_theNut.jpg);

    faction = "ls_memefor";
    editorSubcategory = "ls_edsubcat_units";

    armor = 10;
    armorStructural = 0.4;
    explosionShielding = 0.04;
    minTotalDamageThreshold = 0.001;
    impactDamageMultiplier = 0.5;
};

class ls_meme_theNut_activeCamo: ls_meme_theNut {
    scope = 1;
    uniformClass = "ls_memeUniform_theNut_activeCamo";
    model = QPATHTOF(uniforms\theNut\ls_uniform_theNut_activeCamo.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};

class ls_meme_theNut_nutgotiator: ls_meme_theNut {
    author = AUTHOR;
    displayName = "The Nutgotiator";

    uniformClass = "ls_memeUniform_theNut_nutgotiator";
    nakedUniform = "ls_memeUniform_theNut";
    hiddenSelections[] = {"camo", "NotNutBody"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\theNut\data\nutgotiator\camo1_co.paa),
        ""
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\theNut\data\nutgotiator\camo1.rvmat)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_meme_theNut_nutgotiator.jpg);
};

class ls_meme_theNutArmed: ls_meme_theNut {
    author = AUTHOR;
    displayName = "The Pleased Nut (Armed)";

    uniformClass = "ls_memeUniform_theNutArmed";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\theNut\data\camo1_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_meme_theNutArmed.jpg);
};

class ls_meme_theNutArmed_activeCamo: ls_meme_theNutArmed {
    scope = 1;
    uniformClass = "ls_memeUniform_theNutArmed_activeCamo";
    model = QPATHTOF(uniforms\theNut\ls_uniform_theNut_activeCamo.p3d);
    hiddenSelections[] = {"camo", "NutBody", "NotNutBody"};
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa),
        QPATHTOEF(data,textures\blank_ca.paa),
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat),
        QPATHTOEF(data,materials\activeCamo.rvmat),
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};

class ls_meme_theNutArmed_nutgotiator: ls_meme_theNutArmed {
    author = AUTHOR;
    displayName = "The Nutgotiator (Armed)";

    uniformClass = "ls_memeUniform_theNutArmed_nutgotiator";
    nakedUniform = "ls_memeUniform_theNutArmed";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\theNut\data\nutgotiator\camo1_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\theNut\data\nutgotiator\camo1.rvmat)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_meme_theNutArmed_nutgotiator.jpg);
};
