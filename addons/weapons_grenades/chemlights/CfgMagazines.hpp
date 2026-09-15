class ls_grenade_chemlightBlue_magazine: Chemlight_green {
    scope = 2;
    author = AUTHOR;

    displayName = "$STR_A3_CfgMagazines_Chemlight_blue0";
    displayNameShort = "$STR_A3_CfgMagazines_Chemlightt_blue_dns";
    descriptionShort = "$STR_A3_CfgMagazines_Chemlight_blue1";

    model = QPATHTOF(chemlights\ls_grenade_chemlightBlue.p3d);
    picture = QPATHTOF(data\ui\chemlightBlue_ui_ca.paa);

    ammo = "ls_grenade_chemlightBlue_ammo";
    ace_attachable = "ls_grenade_chemlightBlue_ammo";
    ace_chemlight_shield = "ls_chemlightBlue_shield";
};

class ls_grenade_chemlightGreen_magazine: ls_grenade_chemlightBlue_magazine {
    author = AUTHOR;

    displayName = "$STR_A3_CfgMagazines_Chemlight0";
    displayNameShort = "$STR_A3_CfgMagazines_Chemlight_dns";
    descriptionShort = "$STR_A3_CfgMagazines_Chemlight1";

    model = QPATHTOF(chemlights\ls_grenade_chemlightGreen.p3d);
    picture = QPATHTOF(data\ui\chemlightGreen_ui_ca.paa);

    ammo = "ls_grenade_chemlightGreen_ammo";
    ace_attachable = "ls_grenade_chemlightGreen_ammo";
    ace_chemlight_shield = "ls_chemlightGreen_shield";
};

class ls_grenade_chemlightOrange_magazine: ls_grenade_chemlightBlue_magazine {
    author = AUTHOR;

    displayName = ECSTRING(grenades,chemlightOrange_displayName);
    displayNameShort = ECSTRING(grenades,chemlightOrange_displayNameShort);
    descriptionShort = ECSTRING(grenades,chemlightOrange_descriptionShort);

    model = QPATHTOF(chemlights\ls_grenade_chemlightOrange.p3d);
    picture = QPATHTOF(data\ui\chemlightOrange_ui_ca.paa);

    ammo = "ls_grenade_chemlightOrange_ammo";
    ace_attachable = "ls_grenade_chemlightOrange_ammo";
    ace_chemlight_shield = "ls_chemlightOrange_shield";
};

class ls_grenade_chemlightRed_magazine: ls_grenade_chemlightBlue_magazine {
    author = AUTHOR;

    displayName = "$STR_A3_CfgMagazines_Chemlight_red0";
    displayNameShort = "$STR_A3_CfgMagazines_Chemlightt_red_dns";
    descriptionShort = "$STR_A3_CfgMagazines_Chemlight_red1";

    model = QPATHTOF(chemlights\ls_grenade_chemlightRed.p3d);
    picture = QPATHTOF(data\ui\chemlightRed_ui_ca.paa);

    ammo = "ls_grenade_chemlightRed_ammo";
    ace_attachable = "ls_grenade_chemlightRed_ammo";
    ace_chemlight_shield = "ls_chemlightRed_shield";
};

// Model was never made, so just use the chemlights
DEPRECATED(ls_mag_glowrod_hiBlue,ls_grenade_chemlightBlue_magazine);
DEPRECATED(ls_mag_glowrod_hiGreen,ls_grenade_chemlightGreen_magazine);
DEPRECATED(ls_mag_glowrod_hiRed,ls_grenade_chemlightRed_magazine);
DEPRECATED(ls_mag_glowrod_hiWhite,ls_grenade_chemlightBlue_magazine);
DEPRECATED(ls_mag_glowrod_hiYellow,ls_grenade_chemlightBlue_magazine);
DEPRECATED(ls_mag_glowrod_hiOrange,ls_grenade_chemlightOrange_magazine);
