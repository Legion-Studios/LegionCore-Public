class ls_explosive_demoCharge_magazine: ls_explosive_magazine_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Demolition Charge";
    descriptionShort = "Type: High-yield explosive<br/>Rounds: 1<br/>Used on: Ground, Walls";

    model = QPATHTOF(demoCharge\ls_explosive_demoCharge.p3d);
    picture = QPATHTOF(data\ui\demoCharge_ui_ca.paa);

    ammo = "ls_explosive_demoCharge_ammo";
};

DEPRECATED(ls_mag_demo_remoteCharge,ls_explosive_demoCharge_magazine);
