class ls_grenade_n20_magazine: ls_magazine_grenades_base {
    scope = 2;
    author = AUTHOR;

    displayName = ECSTRING(grenades,n20_displayName);
    displayNameShort = ECSTRING(grenades,n20_displayNameShort);
    descriptionShort = ECSTRING(grenades,n20_descriptionShort);

    model = QPATHTOF(n20\ls_grenade_n20.p3d);
    picture = QPATHTOF(data\ui\n20_ui_ca.paa);

    ammo = "ls_grenade_n20_ammo";
    mass = 9;
};

DEPRECATED(ls_mag_n20_thermalDet,ls_grenade_n20_magazine);
