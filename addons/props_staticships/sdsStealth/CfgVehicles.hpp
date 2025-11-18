class ls_staticShip_sdsStealthShip: ls_staticShip_base {
    scope = 2;
    scopecurator=2;
    author = AUTHOR;
    displayName = "SDS-Stealth Ship";

    model = QPATHTOF(sdsStealth\ls_sdsStealth.p3d);
    hiddenSelections[] = {
        "body1",
        "body2",
        "body3",
        "body4",
        "engine"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(sdsStealth\data\body1_co.paa),
        QPATHTOF(sdsStealth\data\body2_co.paa),
        QPATHTOF(sdsStealth\data\body3_co.paa),
        QPATHTOF(sdsStealth\data\body4_co.paa),
        QPATHTOF(sdsStealth\data\engine_co.paa)
    };
};

DEPRECATED(ls_sds_stealth_ship,ls_staticShip_sdsStealthShip);
