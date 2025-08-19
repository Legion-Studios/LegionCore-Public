class ls_sob_commando_sl_unit: ls_sob_commando_unit {
    author = AUTHOR;
    displayName = "Clone Commando Squad Leader";

    editorPreview = QPATHTOF(_ui\editorPreviews\ls_sob_commando_sl_unit.jpg);
    linkedItems[] = {"ls_sob_commando_helmet", "ls_sob_commando_sl_vest", LINKED_ITEMS_CLONE};
    respawnLinkedItems[] = {"ls_sob_commando_helmet", "ls_sob_commando_sl_vest", LINKED_ITEMS_CLONE};
    backpack = "ls_sob_commando_rto_backpack";

    ROLE_OFFICER;
};

class ls_sob_commando_tech_unit: ls_sob_commando_unit {
    author = AUTHOR;
    displayName = "Clone Commando Tech Specialist";

    editorPreview = QPATHTOF(_ui\editorPreviews\ls_sob_commando_tech_unit.jpg);
    linkedItems[] = {"ls_sob_commando_helmet", "ls_sob_commando_tech_vest", "ls_sob_commando_antenna_nvg", LINKED_ITEMS_CLONE};
    respawnLinkedItems[] = {"ls_sob_commando_helmet", "ls_sob_commando_tech_vest", "ls_sob_commando_antenna_nvg", LINKED_ITEMS_CLONE};
    backpack = "ls_sob_commando_tech_backpack";

    ROLE_TECH;
};

class ls_sob_commando_eod_unit: ls_sob_commando_unit {
    author = AUTHOR;
    displayName = "Clone Commando EOD Specialist";

    editorPreview = QPATHTOF(_ui\editorPreviews\ls_sob_commando_eod_unit.jpg);

    weapons[] = {"ls_weapon_dc17m_antiArmor", "ls_weapon_dc15sa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc17m_antiArmor", "ls_weapon_dc15sa", THROW_PUT};
    magazines[] = {ITEM_7("ls_magazine_dc17m"), ITEM_5("ls_magazine_dc17m_antiArmor"), ITEM_3("ls_magazine_dc15sa"), "ls_grenade_n20_magazine"};
    respawnMagazines[] = {ITEM_7("ls_magazine_dc17m"), ITEM_5("ls_magazine_dc17m_antiArmor"), ITEM_3("ls_magazine_dc15sa"), "ls_grenade_n20_magazine"};
    linkedItems[] = {"ls_sob_commando_helmet", "ls_sob_commando_eod_vest", LINKED_ITEMS_CLONE};
    respawnLinkedItems[] = {"ls_sob_commando_helmet", "ls_sob_commando_eod_vest", LINKED_ITEMS_CLONE};
    backpack = "ls_sob_commando_eod_backpack";

    ROLE_ENGINEER;
};

class ls_sob_commando_sniper_unit: ls_sob_commando_unit {
    author = AUTHOR;
    displayName = "Clone Commando Sniper";

    editorPreview = QPATHTOF(_ui\editorPreviews\ls_sob_commando_sniper_unit.jpg);
    weapons[] = {"ls_weapon_dc17m_sniper", "ls_weapon_dc15sa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc17m_sniper", "ls_weapon_dc15sa", THROW_PUT};
    magazines[] = {ITEM_7("ls_magazine_dc17m"), ITEM_5("ls_magazine_dc17m_sniper"), ITEM_3("ls_magazine_dc15sa"), "ls_grenade_n20_magazine"};
    respawnMagazines[] = {ITEM_7("ls_magazine_dc17m"), ITEM_5("ls_magazine_dc17m_sniper"), ITEM_3("ls_magazine_dc15sa"), "ls_grenade_n20_magazine"};
    linkedItems[] = {"ls_sob_commando_helmet", "ls_sob_commando_sniper_vest", "ls_sob_commando_visor_nvg", LINKED_ITEMS_CLONE};
    respawnLinkedItems[] = {"ls_sob_commando_helmet", "ls_sob_commando_sniper_vest", "ls_sob_commando_visor_nvg", LINKED_ITEMS_CLONE};
    backpack = "ls_sob_commando_backpack";

    ROLE_SNIPER;
};
