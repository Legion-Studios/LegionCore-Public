class ls_staticShip_diamondClassCruiser: ls_staticShip_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    model = QPATHTOF(DiamondClassCruiser\ls_staticShip_diamondClassCruiser.p3d);
    displayName = "Diamond Class Cruiser";

    mapsize = 1326;
};

class ls_staticShip_diamondClassCruiser_cis: ls_staticShip_diamondClassCruiser {
    displayName = "Diamond Class Cruiser (CIS)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(DiamondClassCruiser\data\cis\camo1_co.paa)
    };
};
