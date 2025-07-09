class ls_grenade_thermalDetClassA_magazine: ls_magazine_grenades_base {
    scope = 2;
    author = AUTHOR;

    displayName = "Thermal Detonator [Class A]";
    displayNameShort = "Class A";
    descriptionShort = "Type: High Yield Offensive Grenade<br />Rounds: 1<br />Used in: Hand";
    picture = QPATHTOF(data\ui\thermalDet_ui_ca.paa);

    model = QPATHTOF(thermalDet\ls_grenade_thermalDet.p3d);
    ammo = "ls_grenade_thermalDetClassA_ammo";
};

class ls_grenade_thermalDetClassB_magazine: ls_grenade_thermalDetClassA_magazine {
    scope = 2;
    author = AUTHOR;

    displayName = "Thermal Detonator [Class B]";
    displayNameShort = "Class B";
    descriptionShort = "Type: Medium Yield Offensive Grenade<br />Rounds: 1<br />Used in: Hand";

    ammo = "ls_grenade_thermalDetClassB_ammo";
    mass = 5;
};

class ls_grenade_thermalDetClassC_magazine: ls_grenade_thermalDetClassA_magazine {
    scope = 2;
    author = AUTHOR;

    displayName = "Thermal Detonator [Class C]";
    displayNameShort = "Class C";
    descriptionShort = "Type: Offensive Grenade<br />Rounds: 1<br />Used in: Hand";

    ammo = "ls_grenade_thermalDetClassC_ammo";
    mass = 2;
};

DEPRECATED(ls_mag_classA_thermalDet,ls_grenade_thermalDetClassA_magazine);
DEPRECATED(ls_mag_classB_thermalDet,ls_grenade_thermalDetClassB_magazine);
DEPRECATED(ls_mag_classC_thermalDet,ls_grenade_thermalDetClassC_magazine);
