// We need to edit the scope of these classes because the deprecated classes are scope 1'd
class CfgVehicles {
    class lsd_cis_oomOfficer_standard;
    class WBK_B1_Officer: lsd_cis_oomOfficer_standard {
        scope = 2;
        scopeCurator = 2;
        editorPreview = QPATHTOEF(characters_droid,data\ui\editorPreviews\ls_droid_b1_officer.jpg);
    };
    class lsd_cis_b1SquadLead_standard;
    class WBK_B1_SquadLead: lsd_cis_b1SquadLead_standard {
        scope = 2;
        scopeCurator = 2;
        editorPreview = QPATHTOEF(characters_droid,data\ui\editorPreviews\ls_droid_b1_squadLeader.jpg);
    };

    class lsd_cis_b1Heavy_standard;
    class WBK_B1_Heavy: lsd_cis_b1Heavy_standard {
        scope = 2;
        scopeCurator = 2;
        editorPreview = QPATHTOEF(characters_droid,data\ui\editorPreviews\ls_droid_b1_heavy.jpg);
    };

    class lsd_cis_b1Shotgun_standard;
    class WBK_B1_Shotgun: lsd_cis_b1Shotgun_standard {
        scope = 2;
        scopeCurator = 2;
        editorPreview = QPATHTOEF(characters_droid,data\ui\editorPreviews\ls_droid_b1_shotgun.jpg);
    };

    class lsd_cis_b1_standard;
    class WBK_B1_standart: lsd_cis_b1_standard {
        scope = 2;
        scopeCurator = 2;
        editorPreview = QPATHTOEF(characters_droid,data\ui\editorPreviews\ls_droid_b1.jpg);
    };

    class lsd_cis_b2_standard;
    class WBK_B2_Mod_Standart: lsd_cis_b2_standard {
        scope = 2;
        scopeCurator = 2;
        uniformClass = "ls_droidUniform_b2";
        magazines[] = {ITEM_12(ls_magazine_zh73)};
        respawnMagazines[] = {ITEM_12(ls_magazine_zh73)};
        linkedItems[] = {"ls_nvg_invisible", "ls_droidVest_bx", LINKED_ITEMS_DROID};
        respawnLinkedItems[] = {"ls_nvg_invisible", "ls_droidVest_bx", LINKED_ITEMS_DROID};
    };

    class WBK_B2_Mod_GL: WBK_B2_Mod_Standart {
        uniformClass = "ls_droidUniform_b2";
        magazines[] = {"ls_magazine_rd4_6Rnd", ITEM_22(ls_magazine_rd4)};
        respawnMagazines[] = {"ls_magazine_rd4_6Rnd", ITEM_22(ls_magazine_rd4)};
        linkedItems[] = {"ls_nvg_invisible", "ls_droidVest_bx", LINKED_ITEMS_DROID};
        respawnLinkedItems[] = {"ls_nvg_invisible", "ls_droidVest_bx", LINKED_ITEMS_DROID};
    };
    class WBK_B2_Mod_Shotgun: WBK_B2_Mod_Standart {
        uniformClass = "ls_droidUniform_b2";
        magazines[] = {ITEM_9(ls_magazine_dp20)};
        respawnMagazines[] = {ITEM_9(ls_magazine_dp20)};
        linkedItems[] = {"ls_nvg_invisible", "ls_droidVest_bx", LINKED_ITEMS_DROID};
        respawnLinkedItems[] = {"ls_nvg_invisible", "ls_droidVest_bx", LINKED_ITEMS_DROID};
    };

    class lsd_cis_bxdroid_specops;
    class WBK_BX_Assasin_1: lsd_cis_bxdroid_specops {
        scope = 2;
        scopeCurator = 2;
        uniformClass = "ls_droidUniform_bx";
        weapons[] = {"ls_weapon_e5", "WBK_Dutch_Vibro", THROW_PUT};
        respawnWeapons[] = {"ls_weapon_e5", "WBK_Dutch_Vibro", THROW_PUT};
        magazines[] = {ITEM_11(ls_magazine_e5), "WBK_Cybercrystal"};
        respawnMagazines[] = {ITEM_11(ls_magazine_e5), "WBK_Cybercrystal"};

        linkedItems[] = {"ls_nvg_invisible", "ls_droidVest_bx", LINKED_ITEMS_DROID};
        respawnLinkedItems[] = {"ls_nvg_invisible", "ls_droidVest_bx", LINKED_ITEMS_DROID};
    };

    class WBK_BX_Assasin_Commander: WBK_BX_Assasin_1 {
        uniformClass = "ls_droidUniform_bx_captain";
    };
};
