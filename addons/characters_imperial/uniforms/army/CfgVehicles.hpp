class ls_imperial_army_trooper: ls_imperial_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Army Trooper";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_trooper.jpg);

    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army.p3d);
    uniformClass = "ls_imperialUniform_army_trooper";
    hiddenSelections[] = {
        "camo",
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_co.paa),
        QPATHTOF(uniforms\army\data\camo1_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";

    magazines[] = {
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine"),
        ITEM_3("ls_magazine_e11")
    };
    respawnMagazines[] = {
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine"),
        ITEM_3("ls_magazine_e11")
    };

    linkedItems[] = {
        "ls_imperialHelmet_army",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };

    class HitPoints: HitPoints {
        class HitAbdomen: HitAbdomen {
            armor = 1;
            passThrough = 0.8;
        };
        class HitArms: HitArms {
            armor = 3;
            explosionShielding = 1;
            passThrough = 1;
        };
        class HitBody: HitBody {
            explosionShielding = 6;
        };
        class HitChest: HitChest {
            armor = 1;
            explosionShielding = 6;
            passThrough = 0.8;
        };
        class HitDiaphragm: HitDiaphragm {
            armor = 1;
            explosionShielding = 6;
            passThrough = 0.8;
        };
        class HitHands: HitHands {
            armor = 3;
            explosionShielding = 1;
            passThrough = 1;
        };
        class HitLeftArm: HitLeftArm {
            armor = 3;
            explosionShielding = 1;
            passThrough = 1;
        };
        class HitLeftLeg: HitLeftLeg {
            armor = 3;
            explosionShielding = 1;
            passThrough = 1;
        };
        class HitLegs: HitLegs {
            armor = 3;
            explosionShielding = 1;
            passThrough = 1;
        };
        class HitNeck: HitNeck {
            armor = 1;
        };
        class HitPelvis: HitPelvis {
            passThrough = 0.8;
        };
        class HitRightArm: HitRightArm {
            armor = 3;
            explosionShielding = 1;
            passThrough = 1;
        };
        class HitRightLeg: HitRightLeg {
            armor = 3;
            explosionShielding = 1;
            passThrough = 1;
        };
    };
};

class ls_imperial_army_black: ls_imperial_army_trooper {
    author = AUTHOR;
    displayName = "Imperial Army Uniform (Riot)";

    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_black.jpg);

    uniformClass = "ls_imperialUniform_army_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_black",
        "ls_imperialVest_army_black",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_black",
        "ls_imperialVest_army_black",
        LINKED_ITEMS_RADIO
    };
};

class ls_imperial_army_mudtrooper: ls_imperial_army_trooper {
    author = AUTHOR;
    displayName = "Imperial Army Mudtrooper Uniform";

    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_mudtrooper",
        "ls_imperialVest_army_mudtrooper",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_mudtrooper",
        "ls_imperialVest_army_mudtrooper",
        LINKED_ITEMS_RADIO
    };
};

class ls_imperial_army_r: ls_imperial_army_trooper {
    author = AUTHOR;
    displayName = "Imperial Army Uniform (Rolled)";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_r.jpg);

    uniformClass = "ls_imperialUniform_army_r";
    model = QPATHTOF(uniforms\army\ls_uniform_imperial_army_r.p3d);
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
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };
};

class ls_imperial_army_r_black: ls_imperial_army_r {
    author = AUTHOR;
    displayName = "Imperial Army Uniform (Rolled, Riot)";

    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_r_black.jpg);

    uniformClass = "ls_imperialUniform_army_r_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_black",
        "ls_imperialVest_army_black",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_black",
        "ls_imperialVest_army_black",
        LINKED_ITEMS_RADIO
    };
};

class ls_imperial_army_r_mudtrooper: ls_imperial_army_r {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Army Mudtrooper Uniform (Rolled)";

    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_r_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_r_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_mudtrooper",
        "ls_imperialVest_army_mudtrooper",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_mudtrooper",
        "ls_imperialVest_army_mudtrooper",
        LINKED_ITEMS_RADIO
    };
};

class ls_imperial_army_armored: ls_imperial_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_armored.jpg);

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

    backpack = "ls_imperialBackpack_chestRig";

    magazines[] = {
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine"),
        ITEM_3("ls_magazine_e11")
    };
    respawnMagazines[] = {
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine"),
        ITEM_3("ls_magazine_e11")
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_gu",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_gu",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };
};

class ls_imperial_army_armored_black: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (Riot)";

    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_armored_black.jpg);

    uniformClass = "ls_imperialUniform_army_armored_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_gu_black",
        "ls_imperialVest_army_black",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_gu_black",
        "ls_imperialVest_army_black",
        LINKED_ITEMS_RADIO
    };
};

class ls_imperial_army_armored_mudtrooper: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (Mudtrooper)";

    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_armored_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_armored_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_gur_mudtrooper",
        "ls_imperialVest_army_mudtrooper",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_gur_mudtrooper",
        "ls_imperialVest_army_mudtrooper",
        LINKED_ITEMS_RADIO
    };
};

class ls_imperial_army_armored_isb: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (ISB)";

    editorSubCategory = "ls_edsubcat_imperial_army_ISB";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_armored_isb.jpg);

    uniformClass = "ls_imperialUniform_army_armored_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_gu_isb",
        "ls_imperialVest_army_isb",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_gu_isb",
        "ls_imperialVest_army_ISB",
        LINKED_ITEMS_RADIO
    };
};

class ls_imperial_army_armored_r: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (Rolled)";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_armored_r.jpg);

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
        "ls_imperialHelmet_army_gu",
        "ls_imperialVest_army_h",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_gu",
        "ls_imperialVest_army_h",
        LINKED_ITEMS_RADIO
    };
};

class ls_imperial_army_armored_r_black: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (Rolled, Riot)";

    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_armored_r_black.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_gu_black",
        "ls_imperialVest_army_black_h",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_gu_black",
        "ls_imperialVest_army_black_h",
        LINKED_ITEMS_RADIO
    };
};

class ls_imperial_army_armored_r_mudtrooper: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (Rolled, Mudtrooper)";
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_armored_r_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_gur_mudtrooper",
        "ls_imperialVest_army_mudtrooper_h",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_gur_mudtrooper",
        "ls_imperialVest_army_mudtrooper_h",
        LINKED_ITEMS_RADIO
    };
};

class ls_imperial_army_armored_r_isb: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army Uniform (Rolled, ISB)";
    editorSubCategory = "ls_edsubcat_imperial_army_ISB";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_armored_r_isb.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_gu_isb",
        "ls_imperialVest_army_ISB_h",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_imperialHelmet_army_gu_isb",
        "ls_imperialVest_army_ISB_h",
        LINKED_ITEMS_RADIO
    };
};
