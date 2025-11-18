class ls_explosive_detpack_ammo: ls_explosive_ammo_base {
    scope = 2;
    author = AUTHOR;

    model = QPATHTOF(detpack\ls_explosive_detpack.p3d);
    mineModelDisabled = QPATHTOF(detpack\ls_explosive_detpack_defused.p3d);

    hit = 500;
    indirectHit = 250;
    indirectHitRange = 3;

    defaultMagazine = "ls_explosive_detpack";
};
