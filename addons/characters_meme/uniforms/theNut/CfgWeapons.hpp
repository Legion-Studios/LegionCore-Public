class ls_memeUniform_theNut: ls_uniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "The Pleased Nut";

    model = QPATHTOF(uniforms\theNut\ls_uniform_theNut.p3d);
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    picture = QPATHTOF(data\ui\theNutUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_meme_theNut";
        containerClass = "Supply150";
        mass = 40;
    };
};

class ls_memeUniform_theNut_nutgotiator: ls_memeUniform_theNut {
    author = AUTHOR;
    displayName = "The Nutgotiator";
    picture = QPATHTOF(data\ui\theNutUniform_nutgotiator_ui_ca.paa);

    EGVAR(activeCamo,camoItem) = "ls_memeUniform_theNut_activeCamo";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_meme_theNut_nutgotiator";
    };
};

class ls_memeUniform_theNut_activeCamo: ls_memeUniform_theNut {
    scope = 1;
    model = QPATHTOF(uniforms\theNut\ls_uniform_theNut_activeCamo.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_meme_theNut_activeCamo";
    };
};

class ls_memeUniform_theNutArmed: ls_memeUniform_theNut {
    author = AUTHOR;
    displayName = "The Pleased Nut (Armed)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_meme_theNutArmed";
    };
};

class ls_memeUniform_theNutArmed_activeCamo: ls_memeUniform_theNutArmed {
    scope = 1;
    model = QPATHTOF(uniforms\theNut\ls_uniform_theNut_activeCamo.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_meme_theNutArmed_activeCamo";
    };
};

class ls_memeUniform_theNutArmed_nutgotiator: ls_memeUniform_theNutArmed {
    author = AUTHOR;
    displayName = "The Nutgotiator (Armed)";
    picture = QPATHTOF(data\ui\theNutUniform_nutgotiator_ui_ca.paa);

    EGVAR(activeCamo,camoItem) = "ls_memeUniform_theNutArmed_activeCamo";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_meme_theNutArmed_nutgotiator";
    };
};
