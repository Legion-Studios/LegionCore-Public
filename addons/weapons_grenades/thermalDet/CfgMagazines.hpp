class ls_grenade_thermalDetClassA_magazine: ls_magazine_grenades_base {
    scope = 2;
    author = AUTHOR;

    displayName = ECSTRING(grenades,thermalDetClassA_displayName);
    displayNameShort = ECSTRING(grenades,thermalDetClassA_displayNameShort);
    descriptionShort = ECSTRING(grenades,thermalDetClassA_descriptionShort);
    picture = QPATHTOF(data\ui\thermalDet_ui_ca.paa);

    initSpeed = 26;
    maxLeadSpeed = 6.94444;

    model = QPATHTOF(thermalDet\ls_grenade_thermalDet.p3d);
    ammo = "ls_grenade_thermalDetClassA_ammo";
    mass = 15;
};

class ls_grenade_thermalDetClassB_magazine: ls_grenade_thermalDetClassA_magazine {
    author = AUTHOR;

    displayName = ECSTRING(grenades,thermalDetClassB_displayName);
    displayNameShort = ECSTRING(grenades,thermalDetClassB_displayNameShort);
    descriptionShort = ECSTRING(grenades,thermalDetClassB_descriptionShort);

    ammo = "ls_grenade_thermalDetClassB_ammo";
    mass = 10;
};

class ls_grenade_thermalDetClassC_magazine: ls_grenade_thermalDetClassA_magazine {
    author = AUTHOR;

    displayName = ECSTRING(grenades,thermalDetClassC_displayName);
    displayNameShort = ECSTRING(grenades,thermalDetClassC_displayNameShort);
    descriptionShort = ECSTRING(grenades,thermalDetClassC_descriptionShort);

    ammo = "ls_grenade_thermalDetClassC_ammo";
    mass = 6;
};

DEPRECATED(ls_mag_classA_thermalDet,ls_grenade_thermalDetClassA_magazine);
DEPRECATED(ls_mag_classB_thermalDet,ls_grenade_thermalDetClassB_magazine);
DEPRECATED(ls_mag_classC_thermalDet,ls_grenade_thermalDetClassC_magazine);
