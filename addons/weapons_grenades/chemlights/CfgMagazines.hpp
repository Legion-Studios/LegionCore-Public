class ls_grenade_chemlightBlue_magazine: Chemlight_green {
    scope = 2;
    author = AUTHOR;

    displayName = "Chemlight (Blue)";
    displayNameShort = "Blue Light";
    descriptionShort = "Type: Light - Blue<br />Rounds: 1<br />Used in: Hand";

    model = QPATHTOF(chemlights\ls_grenade_chemlightBlue.p3d);
    picture = QPATHTOF(data\ui\chemlightBlue_ui_ca.paa);

    ammo = "ls_grenade_chemlightBlue_ammo";
    ace_attachable = "ls_grenade_chemlightBlue_ammo";
    ace_chemlight_shield = "ls_chemlightBlue_shield";
};

class ls_grenade_chemlightGreen_magazine: ls_grenade_chemlightBlue_magazine {
    author = AUTHOR;

    displayName = "Chemlight (Green)";
    displayNameShort = "Green Light";
    descriptionShort = "Type: Light - Green<br />Rounds: 1<br />Used in: Hand";

    model = QPATHTOF(chemlights\ls_grenade_chemlightGreen.p3d);
    picture = QPATHTOF(data\ui\chemlightGreen_ui_ca.paa);

    ammo = "ls_grenade_chemlightGreen_ammo";
    ace_attachable = "ls_grenade_chemlightGreen_ammo";
    ace_chemlight_shield = "ls_chemlightGreen_shield";
};

class ls_grenade_chemlightOrange_magazine: ls_grenade_chemlightBlue_magazine {
    author = AUTHOR;

    displayName = "Chemlight (Orange)";
    displayNameShort = "Orange Light";
    descriptionShort = "Type: Light - Orange<br />Rounds: 1<br />Used in: Hand";

    model = QPATHTOF(chemlights\ls_grenade_chemlightOrange.p3d);
    picture = QPATHTOF(data\ui\chemlightOrange_ui_ca.paa);

    ammo = "ls_grenade_chemlightOrange_ammo";
    ace_attachable = "ls_grenade_chemlightOrange_ammo";
    ace_chemlight_shield = "ls_chemlightOrange_shield";
};

class ls_grenade_chemlightRed_magazine: ls_grenade_chemlightBlue_magazine {
    author = AUTHOR;

    displayName = "Chemlight (Red)";
    displayNameShort = "Red Light";
    descriptionShort = "Type: Light - Red<br />Rounds: 1<br />Used in: Hand";

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
