class lsd_gar_arc_base: lsd_gar_phase2_base {
    author = AUTHOR;
    displayName = "ARC Trooper";

    editorPreview = QPATHTOF(data\ui\editorPreviews\lsd_gar_arc_base.jpg);

    weapons[] = {"ls_weapon_westarM5", "ls_weapon_dc17s", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_westarM5", "ls_weapon_dc17s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_westarM5"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};
    respawnMagazines[] = {ITEM_10("ls_magazine_westarM5"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};

    linkedItems[] = {"ls_gar_arc_helmet", "ls_gar_arc_vest", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_gar_arc_helmet", "ls_gar_arc_vest", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
    backpack = "ls_gar_arc_backpack";
};
