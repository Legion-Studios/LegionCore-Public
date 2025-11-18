class ls_grenade_n20_magazine: ls_magazine_grenades_base {
    scope = 2;
    author = AUTHOR;

    displayName = "N-20 Baradium Core Detonator";
    displayNameShort = "N-20 (CTBI)";
    descriptionShort = "Type: Offensive Grenade<br />Rounds: 1<br />Used in: Hand";

    model = QPATHTOF(n20\ls_grenade_n20.p3d);
    picture = QPATHTOF(data\ui\n20_ui_ca.paa);

    ammo = "ls_grenade_n20_ammo";
    mass = 2;
};

DEPRECATED(ls_mag_n20_thermalDet,ls_grenade_n20_magazine);
