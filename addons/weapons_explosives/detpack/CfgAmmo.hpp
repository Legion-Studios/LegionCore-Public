class ls_explosive_detpack_ammo: ls_explosive_ammo_base {
    model = QPATHTOF(detpack\ls_explosive_detpack.p3d);
    mineModelDisabled = QPATHTOF(detpack\ls_explosive_detpack_defused.p3d);

    hit = 1000;
    indirectHit = 1000;
    indirectHitRange = 3;

    defaultMagazine = "ls_explosive_detpack";
};
