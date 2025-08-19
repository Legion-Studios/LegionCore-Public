class ls_explosive_breachCharge_magazine: ls_explosive_magazine_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Breaching Charge";
    descriptionShort = "Low-yield explosive";

    model = QPATHTOF(breachCharge\ls_explosive_breachCharge.p3d);
    picture = QPATHTOF(data\ui\breachCharge_ui_ca.paa);

    ammo = "ls_explosive_breachCharge_ammo";
};

DEPRECATED(ls_mag_breach_remoteCharge,ls_explosive_breachCharge_magazine);
