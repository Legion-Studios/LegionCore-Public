class ls_explosive_demoCharge_ammo: ls_explosive_ammo_base {
    scope = 2;
    author = AUTHOR;

    model = QPATHTOF(demoCharge\ls_explosive_demoCharge.p3d);
    mineModelDisabled = QPATHTOF(demoCharge\ls_explosive_demoCharge_defused.p3d);

    hit = 500;
    indirectHit = 250;
    indirectHitRange = 3;

    defaultMagazine = "ls_explosive_demoCharge_magazine";
};
