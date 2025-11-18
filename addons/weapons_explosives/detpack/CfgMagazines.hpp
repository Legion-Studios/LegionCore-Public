class ls_explosive_detpack_magazine: ls_explosive_magazine_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Detonation Pack";
    descriptionShort = "Medium-yield explosive";

    model = QPATHTOF(detpack\ls_explosive_detpack.p3d);
    picture = QPATHTOF(data\ui\detpack_ui_ca.paa);

    ammo = "ls_explosive_detpack_ammo";
};

DEPRECATED(ls_mag_detPack_remoteCharge,ls_explosive_detpack_magazine);
