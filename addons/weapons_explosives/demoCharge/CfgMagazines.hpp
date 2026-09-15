class ls_explosive_demoCharge_magazine: ls_explosive_magazine_base {
    scope = 2;
    author = AUTHOR;
    displayName = ECSTRING(explosives,demoCharge_displayName);
    descriptionShort = ECSTRING(explosives,demoCharge_descriptionShort);

    model = QPATHTOF(demoCharge\ls_explosive_demoCharge.p3d);
    picture = QPATHTOF(data\ui\demoCharge_ui_ca.paa);

    mass = 80;
    ammo = "ls_explosive_demoCharge_ammo";
};

DEPRECATED(ls_mag_demo_remoteCharge,ls_explosive_demoCharge_magazine);
