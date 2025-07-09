class ls_csf_senateCommando: ls_blufor_unit_base {
    scope = 1;

    faction = "ls_csf";
    editorSubcategory = "ls_edsubcat_csf_senateCommando";

    uniformClass = "ls_csfUniform_senateCommando";
    model = QPATHTOF(uniforms\senateCommando\ls_uniform_csf_senateCommando.p3d);
    hiddenSelections[] = {"camo1", "camo2", "undersuit", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\camo1_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\camo2_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };
    nakedUniform = "lsd_bodyGlove_base";

    weapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s", THROW_PUT};
    magazines[] = {ITEM_8("ls_magazine_dc15a"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};
    respawnMagazines[] = {ITEM_8("ls_magazine_dc15a"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};
};

class ls_csf_senateCommando_guardsman: ls_csf_senateCommando {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Senate Commando";

    uniformClass = "ls_csfUniform_senateCommando_guardsman";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\senateCommando\data\guardsman_upper_co.paa),
        QPATHTOF(uniforms\senateCommando\data\guardsman_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_csf_senateCommando_guardsman.jpg);

    linkedItems[] = {"ls_csfHelmet_senateCommando_guardsman", LINKED_ITEMS_CLONE};
    respawnLinkedItems[] = {"ls_csfHelmet_senateCommando_guardsman", LINKED_ITEMS_CLONE};
};

class ls_csf_senateCommando_lieutenant: ls_csf_senateCommando {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Senate Commando Lieutenant";

    uniformClass = "ls_csfUniform_senateCommando_lieutenant";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\senateCommando\data\lieutenant_upper_co.paa),
        QPATHTOF(uniforms\senateCommando\data\lieutenant_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_csf_senateCommando_lieutenant.jpg);

    ROLE_LEADER;

    linkedItems[] = {"ls_csfHelmet_senateCommando_lieutenant", LINKED_ITEMS_CLONE};
    respawnLinkedItems[] = {"ls_csfHelmet_senateCommando_lieutenant", LINKED_ITEMS_CLONE};
};

class ls_csf_senateCommando_captain: ls_csf_senateCommando {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Senate Commando Captain";

    uniformClass = "ls_csfUniform_senateCommando_captain";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\senateCommando\data\captain_upper_co.paa),
        QPATHTOF(uniforms\senateCommando\data\captain_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_csf_senateCommando_captain.jpg);

    ROLE_OFFICER;

    linkedItems[] = {"ls_csfHelmet_senateCommando_captain", LINKED_ITEMS_CLONE};
    respawnLinkedItems[] = {"ls_csfHelmet_senateCommando_captain", LINKED_ITEMS_CLONE};
};

class ls_csf_senateCommando_hologram: ls_csf_senateCommando {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Senate Commando (Hologram)";

    uniformClass = "ls_csfUniform_senateCommando_hologram";
    model = QPATHTOF(uniforms\senateCommando\ls_uniform_csf_senateCommando_hologram.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_csf_senateCommando_hologram.jpg);

    identityTypes[] = {"LanguageENG_F", "ls_head_hide", "NoGlasses"};
    weapons[] = {THROW_PUT};
    respawnWeapons[] = {THROW_PUT};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ls_csfHelmet_senateCommando_hologram", LINKED_ITEMS_CLONE};
    respawnLinkedItems[] = {"ls_csfHelmet_senateCommando_hologram", LINKED_ITEMS_CLONE};
};
