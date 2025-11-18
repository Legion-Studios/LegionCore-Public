class ls_explosive_breachCharge_ammo: ls_explosive_ammo_base {
    scope = 2;
    author = AUTHOR;

    model = QPATHTOF(breachCharge\ls_explosive_breachCharge.p3d);
    mineModelDisabled = QPATHTOF(breachCharge\ls_explosive_breachCharge_defused.p3d);

    hit = 150;
    indirectHit = 50;
    indirectHitRange = 3;

    defaultMagazine = "ls_explosive_breachCharge_magazine";
};
