class ls_supplies_emptyResupply: Reammobox_F {
    scope = 2;
    author = AUTHOR;
    displayName = "Empty Resupply Box";

    editorCategory = "ls_edcat_statics";
    editorSubcategory = "ls_edsubcat_resupply";

    model = QPATHTOF(resupply\ls_prop_ammobox.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(resupply\data\camo1_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_supplies_emptyResupply.jpg);

    ace_dragging_canCarry = 1;
    ace_dragging_canDrag = 1;
    ace_dragging_dragPosition[] = {0, 1.36, -0.1};

    class TransportItems {};
    class TransportWeapons {};
    class TransportMagazines {};
    class TransportBackpacks {};
};

class ls_supplies_dc15aResupply: ls_supplies_emptyResupply {
    author = AUTHOR;
    displayName = "Republic DC-15A Resupply";
    class TransportMagazines {
        MAG_XX(ls_magazine_dc15a,20);
    };
};

class ls_supplies_dc15sResupply: ls_supplies_dc15aResupply {
    author = AUTHOR;
    displayName = "Republic DC-15S Resupply";
    class TransportMagazines {
        MAG_XX(ls_magazine_dc15s,25);
    };
};

class ls_supplies_z6Resupply: ls_supplies_dc15aResupply {
    displayName = "Republic Z-6 Resupply";
    class TransportMagazines {
        MAG_XX(ls_magazine_z6,10);
    };
};

class ls_supplies_generalResupply: ls_supplies_emptyResupply {
    author = AUTHOR;
    displayName = "Republic Resupply";
    class TransportMagazines {
        MAG_XX(ls_magazine_dc15a,30);
        MAG_XX(ls_magazine_dc15s,30);
        MAG_XX(ls_magazine_dc15br,20);
        MAG_XX(ls_magazine_dc15x,20);
        MAG_XX(ls_magazine_z6,15);
    };
};

class ls_supplies_rocketResupply: ls_supplies_generalResupply {
    author = AUTHOR;
    displayName = "Republic Rocket Resupply";
    class TransportMagazines {
        MAG_XX(ls_magazine_rps6_heat,10);
        MAG_XX(ls_magazine_plx1_at,5);
        MAG_XX(ls_magazine_plx1_ap,5);
        MAG_XX(ls_magazine_plx1_aa,5);
    };
};

class ls_supplies_grenadeResupply: ls_supplies_generalResupply {
    author = AUTHOR;
    displayName = "Republic Grenade Resupply";
    class TransportMagazines {
        MAG_XX(ls_grenade_n20_magazine,25);
        // MAG_XX(SWLW_DC15A_UGL_smoke_red_Mag,10);
        // MAG_XX(SWLW_DC15A_UGL_smoke_white_Mag,10);
        // MAG_XX(SWLW_DC15A_UGL_smoke_green_Mag,10);
        // MAG_XX(SWLW_DC15A_UGL_smoke_blue_Mag,10);
        // MAG_XX(SWLW_DC15A_UGL_huntIR_Mag,10);
        // MAG_XX(SmokeShellBlue,10);
        // MAG_XX(SmokeShellGreen,10);
        // MAG_XX(SmokeShellOrange,10);
        // MAG_XX(SmokeShellPurple,10);
        // MAG_XX(SmokeShellRed,10);
        // MAG_XX(SmokeShellYellow,10);
        // MAG_XX(SmokeShell,10);
    };
};

class ls_supplies_rpsResupply: ls_supplies_emptyResupply {
    author = AUTHOR;
    displayName = "Republic RPS-6 Resupply";
    class TransportWeapons {
        WEAP_XX(ls_weapon_rps6,2);
        WEAP_XX(ls_weapon_rps6_disposable,5);
    };
    class TransportMagazines {
        MAG_XX(ls_magazine_rps6_heat,10);
    };
};

class ls_supplies_plxResupply: ls_supplies_emptyResupply {
    author = AUTHOR;
    displayName = "Republic PLX-1 Resupply";
    class TransportWeapons {
        WEAP_XX(ls_weapon_plx1_at,10);
        WEAP_XX(ls_weapon_plx1_aa,10);
    };

    class TransportMagazines {
        MAG_XX(ls_magazine_plx1_at,20);
        MAG_XX(ls_magazine_plx1_ap,20);
        MAG_XX(ls_magazine_plx1_aa,20);
    };
};

class ls_supplies_e60rResupply: ls_supplies_emptyResupply {
    author = AUTHOR;
    displayName = "CIS E60-R Resupply";
    class TransportWeapons {
        WEAP_XX(ls_weapon_e60r_at,10);
        WEAP_XX(ls_weapon_e60r_aa,10);
    };

    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_at,20);
        MAG_XX(ls_magazine_e60r_ap,20);
        MAG_XX(ls_magazine_e60r_aa,20);
    };
};

class ls_supplies_commandoResupply: ls_supplies_emptyResupply {
    author = AUTHOR;
    displayName = "Republic Commando Resupply";
    class TransportWeapons {
        WEAP_XX(ls_weapon_dc17m,2);
        WEAP_XX(ls_weapon_dc17m_antiArmor,1);
        WEAP_XX(ls_weapon_dc17m_sniper,1);
        WEAP_XX(ls_weapon_dc15sa,4);
    };
    class TransportMagazines {
        MAG_XX(ls_magazine_dc17m,20);
        MAG_XX(ls_magazine_dc17m_antiArmor,10);
        MAG_XX(ls_magazine_dc17m_sniper,10);
        MAG_XX(ls_magazine_dc15sa,20);
    };
};

class ls_supplies_republicAssaultResupply: ls_supplies_emptyResupply {
    author = AUTHOR;
    displayName = "Republic Assault Resupply";
    class TransportWeapons {
        WEAP_XX(ls_weapon_dc15a,20);
        WEAP_XX(ls_weapon_dc15s,20);
        WEAP_XX(ls_weapon_z6,10);
        WEAP_XX(ls_weapon_rd4,5);
        WEAP_XX(ls_weapon_dc17s,20);
    };
    class TransportMagazines {
        MAG_XX(ls_magazine_dc15a,20);
        MAG_XX(ls_magazine_dc15s,20);
        MAG_XX(ls_magazine_z6,20);
        MAG_XX(ls_magazine_3Rnd_40mw_IM41,20);
        MAG_XX(ls_magazine_dc17s,20);
    };
};

class ls_supplies_droidAssaultResupply: ls_supplies_emptyResupply {
    author = AUTHOR;
    displayName = "CIS Droid Resupply";
    class TransportWeapons {
        WEAP_XX(ls_weapon_e5,20);
        WEAP_XX(ls_weapon_e5c,20);
        WEAP_XX(ls_weapon_rg4d,10);
    };
    class TransportMagazines {
        MAG_XX(ls_magazine_e5,100);
        MAG_XX(ls_magazine_e5c,100);
        MAG_XX(ls_magazine_rg4d,20);
    };
};

class ls_supplies_republicSpecOpsResupply: ls_supplies_emptyResupply {
    author = AUTHOR;
    displayName = "Republic Special Operations Resupply";
    class TransportWeapons {
        WEAP_XX(ls_weapon_dc15x,5);
        WEAP_XX(ls_weapon_westarM5,5);
        WEAP_XX(ls_weapon_westarM5_ugl,5);
    };
    class TransportMagazines {
        MAG_XX(ls_magazine_dc15x,20);
        MAG_XX(ls_magazine_westarM5,20);
        MAG_XX(ls_magazine_3Rnd_40mw_G76_HEF,20);
    };
    class TransportItems {
       ITEM_XX(ls_cows_westarM5_scope,5);
    };
};

class ls_supplies_eodResupply: ls_supplies_emptyResupply {
    author = AUTHOR;
    displayName = "EOD Resupply";

    class TransportMagazines {
        MAG_XX(ls_explosive_detpack_magazine,20);
    };

    class TransportItem {
        ITEM_XX(MineDetector,3);
    };
};
