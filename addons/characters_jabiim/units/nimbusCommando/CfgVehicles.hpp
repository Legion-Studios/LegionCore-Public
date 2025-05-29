class ls_jabiim_nimbusCommando_grenadier: ls_jabiim_nimbusCommando {
    author = AUTHOR;
    displayName = "Grenadier";

    weapons[] = {"ls_weapon_rd4", "ls_weapon_rg4d", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_rd4", "ls_weapon_rg4d", THROW_PUT};
    magazines[] = {ITEM_3("ls_3Rnd_40mw_IM41_mag"), ITEM_3("ls_magazine_rg4d")};
    respawnMagazines[] = {ITEM_3("ls_3Rnd_40mw_IM41_mag"), ITEM_3("ls_magazine_rg4d")};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_jabiim_nimbusCommando_grenadier.jpg);

    linkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    respawnLinkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
};