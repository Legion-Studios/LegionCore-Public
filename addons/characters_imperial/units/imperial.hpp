class ls_imperial_army_heavy: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Heavy)";

    ROLE_MG;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavy.jpg);

    weapons[] = {"ls_weapon_e5c", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5c", THROW_PUT};
    magazines[] = {
        ITEM_6("ls_magazine_e5c"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_e5c"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };

    linkedItems[] = {
        "ls_imperialHelmet_army_gu",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };
    respawnlinkedItems[] = {
        "ls_imperialHelmet_army_gu",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };
    backpack = "ls_imperialBackpack_chestRig";
};

class ls_imperial_army_heavy_r: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Rolled, Heavy)";

    ROLE_MG;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavy_r.jpg);

    weapons[] = {"ls_weapon_e5c", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5c", THROW_PUT};
    magazines[] = {
        ITEM_6("ls_magazine_e5c"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_e5c"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    linkedItems[] = {
        "ls_imperialHelmet_army_gu",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };
    respawnlinkedItems[] = {
        "ls_imperialHelmet_army_gu",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };
    backpack = "ls_imperialBackpack_chestRig";
};


class ls_imperial_army_heavy_mudtrooper: ls_imperial_army_heavy {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavy_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavy_mudtrooper_r: ls_imperial_army_heavy_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavy_mudtrooper_r.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavy_black: ls_imperial_army_heavy {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavy_black.jpg);

    uniformclass = "ls_imperialUniform_army_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavy_black_r: ls_imperial_army_heavy_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavy_black_r.jpg);

    uniformclass = "ls_imperialUniform_army_r_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_army_black",  LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavy_isb: ls_imperial_army_heavy {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavy_isb.jpg);

    uniformclass = "ls_imperialUniform_army_armored_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb",  LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavy_isb_r: ls_imperial_army_heavy {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavy_isb_r.jpg);

    uniformclass = "ls_imperialUniform_army_armored_r_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_shotgun: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Shotgun)";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_shotgun.jpg);

    weapons[] = {"ls_weapon_acpa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_acpa", THROW_PUT};
    magazines[] = {
        ITEM_6("ls_magazine_acpa"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_acpa"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    backpack = "ls_imperialBackpack_chestRig";
};

class ls_imperial_army_shotgun_r: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Rolled, Shotgun)";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_shotgun_r.jpg);

    weapons[] = {"ls_weapon_acpa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_acpa", THROW_PUT};
    magazines[] = {
        ITEM_6("ls_magazine_acpa"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_acpa"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    backpack = "ls_imperialBackpack_chestRig";
};

class ls_imperial_army_shotgun_mudtrooper: ls_imperial_army_shotgun {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_shotgun_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
         QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_shotgun_mudtrooper_r: ls_imperial_army_shotgun_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_shotgun_mudtrooper_r.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_shotgun_black: ls_imperial_army_shotgun {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_shotgun_black.jpg);

    uniformclass = "ls_imperialUniform_army_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_army_black",  LINKED_ITEMS_RADIO};
};
class ls_imperial_army_shotgun_black_r: ls_imperial_army_shotgun_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_shotgun_black_r.jpg);

    uniformclass = "ls_imperialUniform_army_r_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};


class ls_imperial_army_shotgun_isb: ls_imperial_army_shotgun {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_shotgun_isb.jpg);

    uniformclass = "ls_imperialUniform_army_armored_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_shotgun_isb_r: ls_imperial_army_shotgun_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_shotgun_isb_r.jpg);

    uniformclass = "ls_imperialUniform_army_armored_r_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_marksman: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Marksman)";

    ROLE_SNIPER;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_marksman.jpg);

    weapons[] = {"ls_weapon_mercenarySniper_scoped", THROW_PUT};
    respawnweapons[] = {"ls_weapon_mercenarySniper_scoped", THROW_PUT};
    magazines[] = {
        ITEM_6("ls_magazine_mercenarySniper"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_mercenarySniper"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_marksman_r: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Rolled, Marksman)";

    ROLE_SNIPER;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_marksman_r.jpg);

    weapons[] = {"ls_weapon_mercenarySniper_scoped", THROW_PUT};
    respawnweapons[] = {"ls_weapon_mercenarySniper_scoped", THROW_PUT};
    magazines[] = {
        ITEM_6("ls_magazine_mercenarySniper"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_mercenarySniper"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_marksman_black: ls_imperial_army_marksman {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_marksman_black.jpg);

    uniformclass = "ls_imperialUniform_army_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_marksman_black_r: ls_imperial_army_marksman_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_marksman_black_r.jpg);

    uniformclass = "ls_imperialUniform_army_r_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_marksman_mudtrooper: ls_imperial_army_marksman {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_marksman_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
         QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_marksman_mudtrooper_r: ls_imperial_army_marksman_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_marksman_mudtrooper_r.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_marksman_isb: ls_imperial_army_marksman {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_marksman_isb.jpg);

    uniformclass = "ls_imperialUniform_army_armored_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_marksman_isb_r: ls_imperial_army_marksman_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_marksman_isb_r.jpg);

    uniformclass = "ls_imperialUniform_army_armored_r_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_grenadier: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Grenadier)";

    ROLE_GRENADIER;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_grenadier.jpg);

    weapons[] = {"ls_weapon_rd4", THROW_PUT};
    respawnweapons[] = {"ls_weapon_rd4", THROW_PUT};
    magazines[] = {
        ITEM_5("ls_magazine_3Rnd_40mw_IM41"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_5("ls_magazine_3Rnd_40mw_IM41"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };

    backpack = "ls_imperialBackpack_chestRig";
};

class ls_imperial_army_grenadier_r: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Rolled, Grenadier)";

    ROLE_GRENADIER;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_grenadier_r.jpg);

    weapons[] = {"ls_weapon_rd4", THROW_PUT};
    respawnweapons[] = {"ls_weapon_rd4", THROW_PUT};
    magazines[] = {
        ITEM_5("ls_magazine_3Rnd_40mw_IM41"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_5("ls_magazine_3Rnd_40mw_IM41"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    backpack = "ls_imperialBackpack_chestRig";
};

class ls_imperial_army_grenadier_black: ls_imperial_army_grenadier {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_grenadier_black.jpg);

    uniformclass = "ls_imperialUniform_army_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_grenadier_black_r: ls_imperial_army_grenadier_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_grenadier_black_r.jpg);

    uniformclass = "ls_imperialUniform_army_r_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_grenadier_mudtrooper: ls_imperial_army_grenadier {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_grenadier_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
         QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_grenadier_mudtrooper_r: ls_imperial_army_grenadier_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_grenadier_mudtrooper_r.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_grenadier_isb: ls_imperial_army_grenadier {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_grenadier_isb.jpg);

    uniformclass = "ls_imperialUniform_army_armored_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_grenadier_isb_r: ls_imperial_army_grenadier_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_grenadier_isb_r.jpg);

    uniformclass = "ls_imperialUniform_army_armored_r_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_squadleader: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Squad Lead)";

    ROLE_LEADER;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_squadleader.jpg);

    linkedItems[] = {
        "ls_imperialHelmet_army_gdr",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };
    respawnlinkedItems[] = {
        "ls_imperialHelmet_army_gdr",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };

    weapons[] = {"ls_weapon_e11_scopedThermal", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e11_scopedThermal", THROW_PUT};
    magazines[] = {
        ITEM_4("ls_magazine_e11"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_4("ls_magazine_e11"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
};

class ls_imperial_army_squadleader_r: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Rolled, Squad Lead)";

    ROLE_LEADER;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_squadleader_r.jpg);

    linkedItems[] = {
        "ls_imperialHelmet_army_gdr",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };
    respawnlinkedItems[] = {
        "ls_imperialHelmet_army_gdr",
        "ls_imperialVest_army",
        LINKED_ITEMS_RADIO
    };

    weapons[] = {"ls_weapon_e11_scopedThermal", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e11_scopedThermal", THROW_PUT};
    magazines[] = {
        ITEM_4("ls_magazine_e11"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_4("ls_magazine_e11"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
};

class ls_imperial_army_squadleader_black: ls_imperial_army_squadleader {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_squadleader_black.jpg);

    uniformclass = "ls_imperialUniform_army_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gdr_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gdr_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_squadleader_black_r: ls_imperial_army_squadleader_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_squadleader_black_r.jpg);

    uniformclass = "ls_imperialUniform_army_r_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gdr_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gdr_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_squadleader_mudtrooper: ls_imperial_army_squadleader {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_squadleader_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
         QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gdr_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gdr_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_squadleader_mudtrooper_r: ls_imperial_army_squadleader_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_squadleader_mudtrooper_r.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gdr_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gdr_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_squadleader_isb: ls_imperial_army_squadleader {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_squadleader_isb.jpg);

    uniformclass = "ls_imperialUniform_army_armored_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_squadleader_isb_r: ls_imperial_army_squadleader_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_squadleader_isb_r.jpg);

    uniformclass = "ls_imperialUniform_army_armored_r_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_at: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army (AT)";

    ROLE_AT;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_at.jpg);

    weapons[] = {"ls_weapon_e11_scoped", "ls_weapon_rps6", THROW_PUT};
    respawnweapons[] = {"ls_weapon_e11_scoped", "ls_weapon_rps6", THROW_PUT};
    magazines[] = {
        ITEM_3("ls_magazine_e11"),
        "ls_magazine_rps6_heat_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {"ls_magazine_rps6_heat_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};

    backpack = "ls_imperialBackpack_predef_at";
    linkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_at_r: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Rolled, AT)";

    ROLE_AT;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_at_r.jpg);

    weapons[] = {"ls_weapon_e11_scoped", "ls_weapon_rps6", THROW_PUT};
    respawnweapons[] = {"ls_weapon_e11_scoped", "ls_weapon_rps6", THROW_PUT};
    magazines[] = {
        ITEM_3("ls_magazine_e11"),
        "ls_magazine_rps6_heat_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {"ls_magazine_e11", "ls_magazine_rps6_heat_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};

    backpack = "ls_imperialBackpack_predef_at";
    linkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_at_black: ls_imperial_army_at {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_at_black.jpg);

    uniformclass = "ls_imperialUniform_army_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_at";
    linkedItems[] = {"ls_imperialHelmet_army_gd_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_at_black_r: ls_imperial_army_at_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_at_black_r.jpg);

    uniformclass = "ls_imperialUniform_army_r_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_at";
    linkedItems[] = {"ls_imperialHelmet_army_gd_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd_black", "ls_imperialVest_army_black",  LINKED_ITEMS_RADIO};
};

class ls_imperial_army_at_mudtrooper: ls_imperial_army_at {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_at_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
         QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_at_mudtrooper_r: ls_imperial_army_at_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_at_mudtrooper_r.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_at";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_at_isb: ls_imperial_army_at {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_at_isb.jpg);

    uniformclass = "ls_imperialUniform_army_armored_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_at";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_at_isb_r: ls_imperial_army_at_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_at_isb_r.jpg);

    uniformclass = "ls_imperialUniform_army_armored_r_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_at";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavyAT: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Missile AT)";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAT.jpg);

    weapons[] = {"ls_weapon_e11_scoped", "ls_weapon_e60r_at", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e11_scoped", "ls_weapon_e60r_at", THROW_PUT};
    magazines[] = {
        ITEM_3("ls_magazine_e11"),
        "ls_magazine_e60r_at_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {"ls_magazine_e11", "ls_magazine_e60r_at_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};
    backpack = "ls_imperialBackpack_predef_HeavyAT";
};

class ls_imperial_army_heavyAT_r: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Rolled, Missile AT)";

    ROLE_AT;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAT_r.jpg);

    weapons[] = {"ls_weapon_e11_scoped", "ls_weapon_e60r_at", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e11_scoped", "ls_weapon_e60r_at", THROW_PUT};
    magazines[] = {
        ITEM_3("ls_magazine_e11"),
        "ls_magazine_e60r_at_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {"ls_magazine_e11", "ls_magazine_e60r_at_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};
    backpack = "ls_imperialBackpack_predef_at";
};

class ls_imperial_army_heavyAT_black: ls_imperial_army_heavyAT {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAT_black.jpg);

    uniformclass = "ls_imperialUniform_army_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_at";
    linkedItems[] = {"ls_imperialHelmet_army_gd_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_heavyAT_black_r: ls_imperial_army_heavyAT_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAT_black_r.jpg);

    uniformclass = "ls_imperialUniform_army_r_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_at";
    linkedItems[] = {"ls_imperialHelmet_army_gd_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavyAT_mudtrooper: ls_imperial_army_heavyAT {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAT_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
         QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavyAT_mudtrooper_r: ls_imperial_army_heavyAT_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAT_mudtrooper_r.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_at";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavyAT_isb: ls_imperial_army_heavyAT {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAT_isb.jpg);

    uniformclass = "ls_imperialUniform_army_armored_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_at";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavyAT_isb_r: ls_imperial_army_heavyAT_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAT_isb_r.jpg);

    uniformclass = "ls_imperialUniform_army_armored_r_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_at";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavyAA: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Heavy AA)";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAA.jpg);

    weapons[] = {"ls_weapon_e5c", "ls_weapon_e60r_aa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5c", "ls_weapon_e60r_aa", THROW_PUT};
    magazines[] = {"ls_magazine_e5c", "ls_magazine_e60r_aa_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};
    respawnMagazines[] = {"ls_magazine_e5c", "ls_magazine_e60r_aa_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};

    backpack = "ls_imperialBackpack_predef_HeavyAA";
    linkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavyAA_r: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Rolled, Heavy AA)";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAA_r.jpg);

    weapons[] = {"ls_weapon_e5c", "ls_weapon_e60r_aa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5c", "ls_weapon_e60r_aa", THROW_PUT};
    magazines[] = {"ls_magazine_e5c", "ls_magazine_e60r_aa_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};
    respawnMagazines[] = {"ls_magazine_e5c", "ls_magazine_e60r_aa_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};

    backpack = "ls_imperialBackpack_predef_HeavyAA";
    linkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd", "ls_imperialVest_army", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavyAA_black: ls_imperial_army_heavyAA {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAA_black.jpg);

    uniformclass = "ls_imperialUniform_army_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_HeavyAA";
    linkedItems[] = {"ls_imperialHelmet_army_gd_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_heavyAA_black_r: ls_imperial_army_heavyAA_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAA_black_r.jpg);

    uniformclass = "ls_imperialUniform_army_r_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_HeavyAA";
    linkedItems[] = {"ls_imperialHelmet_army_gd_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gd_black", "ls_imperialVest_army_black", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavyAA_mudtrooper: ls_imperial_army_heavyAA {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAA_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
         QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_HeavyAA";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavyAA_mudtrooper_r: ls_imperial_army_heavyAA_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAA_mudtrooper_r.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_army_mudtrooper", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavyAA_isb: ls_imperial_army_heavyAA {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAA_isb.jpg);

    uniformclass = "ls_imperialUniform_army_armored_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_HeavyAA";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};

class ls_imperial_army_heavyAA_isb_r: ls_imperial_army_heavyAA_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_isb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_heavyAA_isb_r.jpg);

    uniformclass = "ls_imperialUniform_army_armored_r_isb";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_isb_co.paa)
    };

    backpack = "ls_imperialBackpack_predef_HeavyAA";
    linkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_isb", "ls_imperialVest_army_isb", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_officer: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Officer)";

    ROLE_OFFICER;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_officer.jpg);

    linkedItems[] = {
        "ls_imperialHelmet_army_gu",
        "ls_imperialVest_officer",
        LINKED_ITEMS_RADIO
    };
    respawnlinkedItems[] = {
        "ls_imperialHelmet_army_gu",
        "ls_imperialVest_officer",
        LINKED_ITEMS_RADIO
    };

    weapons[] = {"ls_weapon_e11_scopedThermal", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e11_scopedThermal", THROW_PUT};
    magazines[] = {
        ITEM_4("ls_magazine_e11"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_4("ls_magazine_e11"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
};
class ls_imperial_army_officer_black: ls_imperial_army_officer {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_officer_black.jpg);

    uniformclass = "ls_imperialUniform_army_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_officer_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_officer_black", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_officer_mudtrooper: ls_imperial_army_officer {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_officer_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_mudtrooper", "ls_imperialVest_officer_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_mudtrooper", "ls_imperialVest_officer_mudtrooper", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_officer_r: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Rolled, Officer)";

    ROLE_LEADER;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_officer_r.jpg);

    linkedItems[] = {
        "ls_imperialHelmet_army_gdr",
        "ls_imperialVest_officer",
        LINKED_ITEMS_RADIO
    };
    respawnlinkedItems[] = {
        "ls_imperialHelmet_army_gdr",
        "ls_imperialVest_officer",
        LINKED_ITEMS_RADIO
    };

    weapons[] = {"ls_weapon_e11_scopedThermal", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e11_scopedThermal", THROW_PUT};
    magazines[] = {
        ITEM_4("ls_magazine_e11"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_4("ls_magazine_e11"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
};
class ls_imperial_army_officer_black_r: ls_imperial_army_officer_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_officer_black_r.jpg);

    uniformclass = "ls_imperialUniform_army_r_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_officer_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_black", "ls_imperialVest_officer_black", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_officer_mudtrooper_r: ls_imperial_army_officer_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_officer_mudtrooper_r.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_chestRig";
    linkedItems[] = {"ls_imperialHelmet_army_gu_mudtrooper", "ls_imperialVest_officer_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gu_mudtrooper", "ls_imperialVest_officer_mudtrooper", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_medic: ls_imperial_army_armored {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Medic)";

    ROLE_MEDIC;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_medic.jpg);

    linkedItems[] = {
        "ls_imperialHelmet_army_gur",
        "ls_imperialVest_medic",
        LINKED_ITEMS_RADIO
    };
    respawnlinkedItems[] = {
        "ls_imperialHelmet_army_gur",
        "ls_imperialVest_medic",
        LINKED_ITEMS_RADIO
    };

    weapons[] = {"ls_weapon_e11", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e11", THROW_PUT};
    magazines[] = {
        ITEM_4("ls_magazine_e11"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_4("ls_magazine_e11"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
};
class ls_imperial_army_medic_black: ls_imperial_army_medic {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_medic_black.jpg);

    uniformclass = "ls_imperialUniform_army_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_satchel";
    linkedItems[] = {"ls_imperialHelmet_army_gur_black", "ls_imperialVest_medic_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_black", "ls_imperialVest_medic_black", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_medic_mudtrooper: ls_imperial_army_medic {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_medic_mudtrooper.jpg);

    uniformClass = "ls_imperialUniform_army_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_satchel";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_medic_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_medic_mudtrooper", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_medic_r: ls_imperial_army_armored_r {
    author = AUTHOR;
    displayName = "Armored Imperial Army (Rolled, Medic)";

    ROLE_MEDIC;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_medic_r.jpg);

    linkedItems[] = {
        "ls_imperialHelmet_army_gur",
        "ls_imperialVest_medic",
        LINKED_ITEMS_RADIO
    };
    respawnlinkedItems[] = {
        "ls_imperialHelmet_army_gur",
        "ls_imperialVest_medic",
        LINKED_ITEMS_RADIO
    };

    weapons[] = {"ls_weapon_e11", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e11", THROW_PUT};
    magazines[] = {
        ITEM_4("ls_magazine_e11"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_4("ls_magazine_e11"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
};
class ls_imperial_army_medic_black_r: ls_imperial_army_medic_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_riot";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_medic_black_r.jpg);

    uniformclass = "ls_imperialUniform_army_armored_r_black";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_black_co.paa),
        QPATHTOF(uniforms\army\data\camo1_black_co.paa),
        QPATHTOF(uniforms\army\data\extras_black_co.paa)
    };

    backpack = "ls_imperialBackpack_satchel";
    linkedItems[] = {"ls_imperialHelmet_army_gur_black", "ls_imperialVest_medic_black", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_black", "ls_imperialVest_medic_black", LINKED_ITEMS_RADIO};
};
class ls_imperial_army_medic_mudtrooper_r: ls_imperial_army_medic_r {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_imperial_army_mudtroopers";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_imperial_army_medic_mudtrooper_r.jpg);

    uniformClass = "ls_imperialUniform_army_armored_r_mudtrooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\camo1_mudtrooper_co.paa),
        QPATHTOF(uniforms\army\data\extras_mudtrooper_co.paa)
    };

    backpack = "ls_imperialBackpack_satchel";
    linkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_medic_mudtrooper", LINKED_ITEMS_RADIO};
    respawnlinkedItems[] = {"ls_imperialHelmet_army_gur_mudtrooper", "ls_imperialVest_medic_mudtrooper", LINKED_ITEMS_RADIO};
};
