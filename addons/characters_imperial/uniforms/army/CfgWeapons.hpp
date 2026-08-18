class ls_imperialUniform_army_trooper: ls_imperialUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(army_uniform);

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army.p3d);
    picture = QPATHTOF(data\ui\armyUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_trooper";
    };
};

class ls_imperialUniform_army_black: ls_imperialUniform_army_trooper {
    author = AUTHOR;
    displayName = CSTRING(army_black_uniform);
    picture = QPATHTOF(data\ui\armyUniform_black_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_black";
    };
};

class ls_imperialUniform_army_mudtrooper: ls_imperialUniform_army_trooper {
    author = AUTHOR;
    displayName = CSTRING(army_mudtrooper_uniform);
    picture = QPATHTOF(data\ui\armyUniform_mudtrooper_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_mudtrooper";
    };
};

class ls_imperialUniform_army_r: ls_imperialUniform_army_trooper {
    author = AUTHOR;
    displayName = CSTRING(army_rolled_uniform);

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army_r.p3d);
    picture = QPATHTOF(data\ui\armyUniform_rolled_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_r";
    };
};

class ls_imperialUniform_army_r_black: ls_imperialUniform_army_r {
    author = AUTHOR;
    displayName = CSTRING(army_rolled_black_uniform);
    picture = QPATHTOF(data\ui\armyUniform_rolled_black_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_r_black";
    };
};

class ls_imperialUniform_army_r_mudtrooper: ls_imperialUniform_army_r {
    author = AUTHOR;
    displayName = CSTRING(army_rolled_mudtrooper_uniform);
    picture = QPATHTOF(data\ui\armyUniform_rolled_mudtrooper_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_r_mudtrooper";
    };
};

class ls_imperialUniform_army_armored: ls_imperialUniform_army_trooper {
    author = AUTHOR;
    displayName = CSTRING(army_armored_uniform);

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army_armored.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored";
    };
};

class ls_imperialUniform_army_armored_black: ls_imperialUniform_army_armored {
    author = AUTHOR;
    displayName = CSTRING(army_armored_black_uniform);
    picture = QPATHTOF(data\ui\armyUniform_black_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_black";
    };
};

class ls_imperialUniform_army_armored_mudtrooper: ls_imperialUniform_army_armored {
    author = AUTHOR;
    displayName = CSTRING(army_armored_mudtrooper_uniform);
    picture = QPATHTOF(data\ui\armyUniform_mudtrooper_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_mudtrooper";
    };
};

class ls_imperialUniform_army_armored_isb: ls_imperialUniform_army_armored {
    author = AUTHOR;
    displayName = CSTRING(army_armored_isb_uniform);
    picture = QPATHTOF(data\ui\armyUniform_black_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_isb";
    };
};

class ls_imperialUniform_army_armored_r: ls_imperialUniform_army_armored {
    author = AUTHOR;
    displayName = CSTRING(army_armored_rolled_uniform);

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army_armored_r.p3d);
    picture = QPATHTOF(data\ui\armyUniform_rolled_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_r";
    };
};

class ls_imperialUniform_army_armored_r_black: ls_imperialUniform_army_armored_r {
    author = AUTHOR;
    displayName = CSTRING(army_armored_rolled_black_uniform);
    picture = QPATHTOF(data\ui\armyUniform_rolled_black_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_r_black";
    };
};

class ls_imperialUniform_army_armored_r_mudtrooper: ls_imperialUniform_army_armored_r {
    author = AUTHOR;
    displayName = CSTRING(army_armored_rolled_mudtrooper_uniform);
    picture = QPATHTOF(data\ui\armyUniform_rolled_mudtrooper_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_r_mudtrooper";
    };
};

class ls_imperialUniform_army_armored_r_isb: ls_imperialUniform_army_armored_r {
    author = AUTHOR;
    displayName = CSTRING(army_armored_rolled_isb_uniform);
    picture = QPATHTOF(data\ui\armyUniform_rolled_black_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_imperial_army_armored_r_isb";
    };
};
