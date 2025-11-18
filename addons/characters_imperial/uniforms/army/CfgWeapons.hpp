class ls_imperialUniform_army_trooper: ls_imperialUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Army Uniform";

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army.p3d);
    picture = QPATHTOF(data\ui\uniform_army_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_trooper";
    };
};

class ls_imperialUniform_army_black: ls_imperialUniform_army_trooper {
    author = AUTHOR;
    displayName = "Imperial Army Uniform (Riot)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_black";
    };
};

class ls_imperialUniform_army_mudtrooper: ls_imperialUniform_army_trooper {
    author = AUTHOR;
    displayName = "Imperial Army Uniform (Mudtrooper)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_mudtrooper";
    };
};

class ls_imperialUniform_army_r: ls_imperialUniform_army_trooper {
    author = AUTHOR;
    displayName = "Imperial Army Uniform (Rolled)";

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army_r.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_r";
    };
};

class ls_imperialUniform_army_r_black: ls_imperialUniform_army_r {
    author = AUTHOR;
    displayName = "Imperial Army Uniform (Rolled, Riot)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_r_black";
    };
};

class ls_imperialUniform_army_r_mudtrooper: ls_imperialUniform_army_r {
    author = AUTHOR;
    displayName = "Imperial Army Uniform (Rolled, Mudtrooper)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_r_mudtrooper";
    };
};

class ls_imperialUniform_army_armored: ls_imperialUniform_army_trooper {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform";

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army_armored.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored";
    };
};

class ls_imperialUniform_army_armored_black: ls_imperialUniform_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (Riot)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_black";
    };
};

class ls_imperialUniform_army_armored_mudtrooper: ls_imperialUniform_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (Mudtrooper)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_mudtrooper";
    };
};

class ls_imperialUniform_army_armored_isb: ls_imperialUniform_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (ISB)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_isb";
    };
};

class ls_imperialUniform_army_armored_r: ls_imperialUniform_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (Rolled)";

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army_armored_r.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_r";
    };
};

class ls_imperialUniform_army_armored_r_black: ls_imperialUniform_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (Rolled, Riot)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_r_black";
    };
};

class ls_imperialUniform_army_armored_r_mudtrooper: ls_imperialUniform_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (Rolled, Mudtrooper)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_r_mudtrooper";
    };
};

class ls_imperialUniform_army_armored_r_isb: ls_imperialUniform_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (Rolled, ISB)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_r_isb";
    };
};
