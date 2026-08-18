class ls_explosive_detpack_magazine: ls_explosive_magazine_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Detonation Pack";
    descriptionShort = "Type: Medium-yield explosive<br/>Rounds: 1<br/>Used on: Ground, Walls";

    model = QPATHTOF(detpack\ls_explosive_detpack.p3d);
    picture = QPATHTOF(data\ui\detpack_ui_ca.paa);

    ammo = "ls_explosive_detpack_ammo";
};

DEPRECATED(ls_mag_detPack_remoteCharge,ls_explosive_detpack_magazine);
