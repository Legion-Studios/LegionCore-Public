class ls_staticShip_acclamator: ls_staticShip_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Acclamator";

    model = QPATHTOF(acclamator\ls_acclamator.p3d);
    hiddenselections[] = {
        "body_1", "body_2",
        "body_3", "body_4",
        "body_5", "body_6",
        "engine", "glass",
        "interior_1", "interior_2",
        "interior_3", "interior_4",
        "landing_feet", "landing_legs",
        "ramp"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(acclamator\data\body_co.paa),
        QPATHTOF(acclamator\data\body_2_co.paa),
        QPATHTOF(acclamator\data\body_3_co.paa),
        QPATHTOF(acclamator\data\body_4_co.paa),
        QPATHTOF(acclamator\data\body_5_co.paa),
        QPATHTOF(acclamator\data\body_6_co.paa),
        QPATHTOF(acclamator\data\engine_co.paa),
        QPATHTOF(acclamator\data\glass_co.paa),
        QPATHTOF(acclamator\data\interior_1_co.paa),
        QPATHTOF(acclamator\data\interior_2_co.paa),
        QPATHTOF(acclamator\data\interior_3_co.paa),
        QPATHTOF(acclamator\data\interior_4_co.paa)
    };
};

class ls_staticShip_acclamator_hollow: ls_staticShip_acclamator {
    author = AUTHOR;
    displayName = "Acclamator (Hollow)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(acclamator\data\body_co.paa),
        QPATHTOF(acclamator\data\body_2_co.paa),
        QPATHTOF(acclamator\data\body_3_co.paa),
        QPATHTOF(acclamator\data\body_4_co.paa),
        QPATHTOF(acclamator\data\body_5_co.paa),
        QPATHTOF(acclamator\data\body_6_co.paa),
        QPATHTOF(acclamator\data\engine_co.paa)
    };
};

class ls_staticShip_acclamator_landed: ls_staticShip_acclamator {
    author = AUTHOR;
    displayName = "Acclamator Landed";
    hiddenSelectionsTextures[] = {
        QPATHTOF(acclamator\data\body_co.paa),
        QPATHTOF(acclamator\data\body_2_co.paa),
        QPATHTOF(acclamator\data\body_3_co.paa),
        QPATHTOF(acclamator\data\body_4_co.paa),
        QPATHTOF(acclamator\data\body_5_co.paa),
        QPATHTOF(acclamator\data\body_6_co.paa),
        QPATHTOF(acclamator\data\engine_co.paa),
        QPATHTOF(acclamator\data\glass_co.paa),
        QPATHTOF(acclamator\data\interior_1_co.paa),
        QPATHTOF(acclamator\data\interior_2_co.paa),
        QPATHTOF(acclamator\data\interior_3_co.paa),
        QPATHTOF(acclamator\data\interior_4_co.paa),
        QPATHTOF(acclamator\data\landing_feet_co.paa),
        QPATHTOF(acclamator\data\landing_legs_co.paa),
        QPATHTOF(acclamator\data\ramp_co.paa)
    };
};

class ls_staticShip_acclamator_landed_hollow: ls_staticShip_acclamator {
    author = AUTHOR;
    displayName = "Acclamator Landed (Hollow)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(acclamator\data\body_co.paa),
        QPATHTOF(acclamator\data\body_2_co.paa),
        QPATHTOF(acclamator\data\body_3_co.paa),
        QPATHTOF(acclamator\data\body_4_co.paa),
        QPATHTOF(acclamator\data\body_5_co.paa),
        QPATHTOF(acclamator\data\body_6_co.paa),
        QPATHTOF(acclamator\data\engine_co.paa),
        "",
        "",
        "",
        "",
        "",
        QPATHTOF(acclamator\data\landing_feet_co.paa),
        QPATHTOF(acclamator\data\landing_legs_co.paa),
        QPATHTOF(acclamator\data\ramp_co.paa)
    };
};

class ls_staticShip_acclamator_landed_noRamp: ls_staticShip_acclamator {
    author = AUTHOR;
    displayName = "Acclamator Landed (No Ramp)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(acclamator\data\body_co.paa),
        QPATHTOF(acclamator\data\body_2_co.paa),
        QPATHTOF(acclamator\data\body_3_co.paa),
        QPATHTOF(acclamator\data\body_4_co.paa),
        QPATHTOF(acclamator\data\body_5_co.paa),
        QPATHTOF(acclamator\data\body_6_co.paa),
        QPATHTOF(acclamator\data\engine_co.paa),
        QPATHTOF(acclamator\data\glass_co.paa),
        QPATHTOF(acclamator\data\interior_1_co.paa),
        QPATHTOF(acclamator\data\interior_2_co.paa),
        QPATHTOF(acclamator\data\interior_3_co.paa),
        QPATHTOF(acclamator\data\interior_4_co.paa),
        QPATHTOF(acclamator\data\landing_feet_co.paa),
        QPATHTOF(acclamator\data\landing_legs_co.paa)
    };
};

class ls_staticShip_acclamator_landed_hollow_noRamp: ls_staticShip_acclamator {
    author = AUTHOR;
    displayName = "Acclamator Landed (Hollow, No Ramp)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(acclamator\data\body_co.paa),
        QPATHTOF(acclamator\data\body_2_co.paa),
        QPATHTOF(acclamator\data\body_3_co.paa),
        QPATHTOF(acclamator\data\body_4_co.paa),
        QPATHTOF(acclamator\data\body_5_co.paa),
        QPATHTOF(acclamator\data\body_6_co.paa),
        QPATHTOF(acclamator\data\engine_co.paa),
        "",
        "",
        "",
        "",
        "",
        QPATHTOF(acclamator\data\landing_feet_co.paa),
        QPATHTOF(acclamator\data\landing_legs_co.paa)
    };
};

DEPRECATED(ls_acclamator,ls_staticShip_acclamator_landed);
DEPRECATED(ls_acclamator_2,ls_staticShip_acclamator);
DEPRECATED(ls_acclamator_3,ls_staticShip_acclamator_landed_hollow);
DEPRECATED(ls_acclamator_4,ls_staticShip_acclamator_hollow);
DEPRECATED(ls_acclamator_5,ls_staticShip_acclamator_landed_hollow_noRamp);
DEPRECATED(ls_acclamator_6,ls_staticShip_acclamator_landed_noRamp);
