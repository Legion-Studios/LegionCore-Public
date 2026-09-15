class ls_explosive_demoCharge_ammo: ls_explosive_ammo_base {
    model = QPATHTOF(demoCharge\ls_explosive_demoCharge.p3d);
    mineModelDisabled = QPATHTOF(demoCharge\ls_explosive_demoCharge_defused.p3d);

    hit = 7200; // Able to destroy 3AS FOB walls
    indirectHit = 7200;
    indirectHitRange = 5;
    whistleDist = 10;
    mineInconspicuousness = 3;
    explosionEffects = "HeavyBombExplosion";
    craterEffects = "HeavyBombCrater";

    defaultMagazine = "ls_explosive_demoCharge_magazine";
};
