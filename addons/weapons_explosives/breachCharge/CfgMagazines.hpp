class ls_explosive_breachCharge_magazine: ls_explosive_magazine_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Breaching Charge";
    descriptionShort = "Type: Low-yield breaching charge. Can breach locked doors and walls.<br/>Rounds: 1<br/>Used on: Ground, Walls";

    model = QPATHTOF(breachCharge\ls_explosive_breachCharge.p3d);
    picture = QPATHTOF(data\ui\breachCharge_ui_ca.paa);

    ammo = "ls_explosive_breachCharge_ammo";
};

DEPRECATED(ls_mag_breach_remoteCharge,ls_explosive_breachCharge_magazine);
