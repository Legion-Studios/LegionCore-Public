class ls_jabiim_nimbusCommando_grenadier: ls_jabiim_nimbusCommando {
    author = AUTHOR;
    displayName = "Commando (Grenadier)";

    weapons[] = {"ls_weapon_rd4", "ls_weapon_rg4d", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_rd4", "ls_weapon_rg4d", THROW_PUT};
    magazines[] = {ITEM_3("ls_magazine_3Rnd_40mw_IM41"), ITEM_3("ls_magazine_rg4d")};
    respawnMagazines[] = {ITEM_3("ls_magazine_3Rnd_40mw_IM41"), ITEM_3("ls_magazine_rg4d")};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_jabiim_nimbusCommando_grenadier.jpg);

    linkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    respawnLinkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
};
class ls_jabiim_nimbusCommando_Heavy: ls_jabiim_nimbusCommando {
    author = AUTHOR;
    displayName = "Commando (Machine Gunner)";

    weapons[] = {"ls_weapon_e5c", "ls_weapon_rg4d", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5c", "ls_weapon_rg4d", THROW_PUT};
    magazines[] = {ITEM_3("ls_magazine_e5c"), ITEM_3("ls_magazine_rg4d")};
    respawnMagazines[] = {ITEM_3("ls_magazine_e5c"), ITEM_3("ls_magazine_rg4d")};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_jabiim_nimbusCommando_Heavy.jpg);

    linkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    respawnLinkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
};
class ls_jabiim_nimbusCommando_Sniper: ls_jabiim_nimbusCommando {
    author = AUTHOR;
    displayName = "Commando (Marksman)";

    weapons[] = {"ls_weapon_mercenarySniper_scoped", "ls_weapon_rg4d", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_mercenarySniper_scoped", "ls_weapon_rg4d", THROW_PUT};
    magazines[] = {ITEM_3("ls_magazine_mercenarySniper"), ITEM_3("ls_magazine_rg4d")};
    respawnMagazines[] = {ITEM_3("ls_magazine_mercenarySniper"), ITEM_3("ls_magazine_rg4d")};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_jabiim_nimbusCommando_Sniper.jpg);

    linkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    respawnLinkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
};
class ls_jabiim_nimbusCommando_Demo: ls_jabiim_nimbusCommando {
    author = AUTHOR;
    displayName = "Commando (Demo)";

    weapons[] = {"ls_weapon_e5", "ls_weapon_rg4d", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5", "ls_weapon_rg4d", THROW_PUT};
    magazines[] = {ITEM_3("ls_magazine_e5"), ITEM_3("ls_magazine_rg4d")};
    respawnMagazines[] = {ITEM_3("ls_magazine_e5"), ITEM_3("ls_magazine_rg4d")};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_jabiim_nimbusCommando_Demo.jpg);

    linkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    respawnLinkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    Backpack = "ls_jabiimBackpack_nimbusCommando_predef_demo";
};
class ls_jabiim_nimbusCommando_AT: ls_jabiim_nimbusCommando {
    author = AUTHOR;
    displayName = "Commando (AT)";

    weapons[] = {"ls_weapon_e5", "ls_weapon_rg4d", "ls_weapon_rps6", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5", "ls_weapon_rg4d", "ls_weapon_rps6", THROW_PUT};
    magazines[] = {ITEM_3("ls_magazine_e5"), ITEM_3("ls_magazine_rg4d"), "ls_magazine_rps6_heat_ai"};
    respawnMagazines[] = {ITEM_3("ls_magazine_e5"), ITEM_3("ls_magazine_rg4d"), "ls_magazine_rps6_heat_ai"};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_jabiim_nimbusCommando_AT.jpg);

    linkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    respawnLinkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    Backpack = "ls_jabiimBackpack_nimbusCommando_predef_at";
};
class ls_jabiim_nimbusCommando_heavyAT: ls_jabiim_nimbusCommando {
    author = AUTHOR;
    displayName = "Commando (Missle AT)";

    weapons[] = {"ls_weapon_e5", "ls_weapon_rg4d", "ls_weapon_e60r_at", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5", "ls_weapon_rg4d", "ls_weapon_e60r_at", THROW_PUT};
    magazines[] = {ITEM_3("ls_magazine_e5"), ITEM_3("ls_magazine_rg4d"), "ls_magazine_e60r_at_ai"};
    respawnMagazines[] = {ITEM_3("ls_magazine_e5"), ITEM_3("ls_magazine_rg4d"), "ls_magazine_e60r_at_ai"};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_jabiim_nimbusCommando_heavyAT.jpg);

    linkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    respawnLinkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    Backpack = "ls_jabiimBackpack_nimbusCommando_predef_heavyAT";
};
class ls_jabiim_nimbusCommando_heavyAA: ls_jabiim_nimbusCommando {
    author = AUTHOR;
    displayName = "Commando (Missle AA)";

    weapons[] = {"ls_weapon_e5", "ls_weapon_rg4d", "ls_weapon_e60r_aa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5", "ls_weapon_rg4d", "ls_weapon_e60r_aa", THROW_PUT};
    magazines[] = {ITEM_3("ls_magazine_e5"), ITEM_3("ls_magazine_rg4d"), "ls_magazine_e60r_aa_ai"};
    respawnMagazines[] = {ITEM_3("ls_magazine_e5"), ITEM_3("ls_magazine_rg4d"), "ls_magazine_e60r_aa_ai"};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_jabiim_nimbusCommando_heavyAA.jpg);

    linkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    respawnLinkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    backpack = "ls_jabiimBackpack_nimbusCommando_predef_heavyAA";
};
class ls_jabiim_nimbusCommando_Shotgun: ls_jabiim_nimbusCommando {
    author = AUTHOR;
    displayName = "Commando (Shotgun)";

    weapons[] = {"ls_weapon_acpa", "ls_weapon_rg4d", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_acpa", "ls_weapon_rg4d", THROW_PUT};
    magazines[] = {ITEM_3("ls_magazine_acpa"), ITEM_3("ls_magazine_rg4d")};
    respawnMagazines[] = {ITEM_3("ls_magazine_acpa"), ITEM_3("ls_magazine_rg4d")};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_jabiim_nimbusCommando_Shotgun.jpg);

    linkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    respawnLinkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
};
