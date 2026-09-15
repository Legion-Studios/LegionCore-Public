class ls_explosive_detpack_magazine: ls_explosive_magazine_base {
    scope = 2;
    author = AUTHOR;
    displayName = ECSTRING(explosives,detpack_displayName);
    descriptionShort = ECSTRING(explosives,detpack_descriptionShort);

    model = QPATHTOF(detpack\ls_explosive_detpack.p3d);
    picture = QPATHTOF(data\ui\detpack_ui_ca.paa);

    ammo = "ls_explosive_detpack_ammo";
};

DEPRECATED(ls_mag_detPack_remoteCharge,ls_explosive_detpack_magazine);
