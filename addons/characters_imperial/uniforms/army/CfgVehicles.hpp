class ls_imperial_army_trooper: ls_imperial_unit_base {
    scope = 2;
    displayName = "Imperial Army Uniform";

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army.p3d);
    picture = QPATHTOF(_ui\army_uniform_ui_ca.paa);
    uniformClass = "ls_imperialUniform_army_trooper";
    hiddenSelections[] = {
        "camo",
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_co.paa),
        QPATHTOF(uniforms\army\data\camo1_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army",
        "ls_imperialVest_army",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army",
        "ls_imperialVest_army",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_black: ls_imperial_army_trooper {
    scope = 2;
    displayName = "Imperial Army Uniform (Black)";

    uniformClass = "ls_imperialUniform_army_black";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_black",
        "ls_imperialVest_army_black",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_black",
        "ls_imperialVest_army_black",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_mudtrooper: ls_imperial_army_trooper {
    scope = 2;
    displayName = "Imperial Army Mudtrooper Uniform";

    uniformClass = "ls_imperialUniform_army_mudtrooper";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_mudtrooper",
        "ls_imperialVest_army_mudtrooper",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_mudtrooper",
        "ls_imperialVest_army_mudtrooper",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_r: ls_imperial_army_trooper {
    scope = 2;
    displayName = "Imperial Army Uniform (Rolled)";

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army_r.p3d);
    uniformClass = "ls_imperialUniform_army_r";
    hiddenSelections[] = {
        "camo",
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_co.paa),
        QPATHTOF(uniforms\army\data\camo1_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army",
        "ls_imperialVest_army",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army",
        "ls_imperialVest_army",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_r_black: ls_imperial_army_r {
    scope = 2;
    displayName = "Imperial Army Uniform (Rolled, Black)";

    uniformClass = "ls_imperialUniform_army_r_black";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_black",
        "ls_imperialVest_army_black",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_black",
        "ls_imperialVest_army_black",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_r_mudtrooper: ls_imperial_army_r {
    scope = 2;
    displayName = "Imperial Army Mudtrooper Uniform (Rolled)";

    uniformClass = "ls_imperialUniform_army_r_mudtrooper";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_mudtrooper",
        "ls_imperialVest_army_mudtrooper",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_mudtrooper",
        "ls_imperialVest_army_mudtrooper",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_armored: ls_imperial_unit_base {
    scope = 2;
    displayName = "Armored Imperial Army Uniform";

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army_armored.p3d);
    uniformClass = "ls_imperialUniform_army_armored";
    hiddenSelections[] = {
        "camo",
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_co.paa),
        QPATHTOF(uniforms\army\data\camo1_co.paa),
        QPATHTOF(uniforms\army\data\extras_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army",
        "ls_imperialVest_army",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army",
        "ls_imperialVest_army",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_armored_black: ls_imperial_army_armored {
    scope = 2;
    displayName = "Armored Imperial Army Uniform (Black)";

    uniformClass = "ls_imperialUniform_army_armored_black";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_black",
        "ls_imperialVest_army_black",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_black",
        "ls_imperialVest_army_black",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_armored_mudtrooper: ls_imperial_army_armored {
    scope = 2;
    displayName = "Armored Imperial Army Uniform (Mudtrooper)";

    uniformClass = "ls_imperialUniform_army_armored_mudtrooper";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_mudtrooper",
        "ls_imperialVest_army_mudtrooper",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_mudtrooper",
        "ls_imperialVest_army_mudtrooper",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_armored_isb: ls_imperial_army_armored {
    scope = 2;
    displayName = "Armored Imperial Army Uniform (ISB)";

    uniformClass = "ls_imperialUniform_army_armored_isb";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_isb",
        "ls_imperialVest_army_ISB",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_isb",
        "ls_imperialVest_army_ISB",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_armored_r: ls_imperial_army_armored {
    scope = 2;
    displayName = "Armored Imperial Army Uniform (Rolled)";

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army_armored_r.p3d);
    uniformClass = "ls_imperialUniform_army_armored_r";
    hiddenSelections[] = {
        "camo",
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_co.paa),
        QPATHTOF(uniforms\army\data\camo1_co.paa),
        QPATHTOF(uniforms\army\data\extras_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army",
        "ls_imperialVest_army_h",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army",
        "ls_imperialVest_army_h",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_armored_r_black: ls_imperial_army_armored_r {
    scope = 2;
    displayName = "Armored Imperial Army Uniform (Rolled, Black)";

    uniformClass = "ls_imperialUniform_army_armored_r_black";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_black",
        "ls_imperialVest_army_black_h",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_black",
        "ls_imperialVest_army_black_h",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_armored_r_mudtrooper: ls_imperial_army_armored_r {
    scope = 2;
    displayName = "Armored Imperial Army Uniform (Rolled, Mudtrooper)";

    uniformClass = "ls_imperialUniform_army_armored_r_mudtrooper";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_mudtrooper",
        "ls_imperialVest_army_mudtrooper_h",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_mudtrooper",
        "ls_imperialVest_army_mudtrooper_h",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};

class ls_imperial_army_armored_r_isb: ls_imperial_army_armored_r {
    scope = 2;
    displayName = "Armored Imperial Army Uniform (Rolled, ISB)";

    uniformClass = "ls_imperialUniform_army_armored_r_isb";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_isb",
        "ls_imperialVest_army_ISB_h",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_isb",
        "ls_imperialVest_army_ISB_h",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
