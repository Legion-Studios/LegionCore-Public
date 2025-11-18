class ls_explosive_demoCharge_magazine: ls_explosive_magazine_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Demolition Charge";
    descriptionShort = "High-yield explosive";

    model = QPATHTOF(demoCharge\ls_explosive_demoCharge.p3d);
    picture = QPATHTOF(data\ui\demoCharge_ui_ca.paa);

    ammo = "ls_explosive_demoCharge_ammo";
};

DEPRECATED(ls_mag_demo_remoteCharge,ls_explosive_demoCharge_magazine);
