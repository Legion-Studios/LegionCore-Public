class ls_staticShip_diamondClassCruiser: ls_staticShip_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Diamond Class Cruiser";

    EGVAR(map,icon) = QPATHTOF(data\ui\map\diamondClass_ui_ca.paa);
    EGVAR(map,name) = "Diamond Class Cruiser";

    model = QPATHTOF(diamondClassCruiser\ls_diamondClassCruiser.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(diamondClassCruiser\data\standard\camo1_co.paa)
    };

    mapsize = 1326;
};

class ls_staticShip_diamondClassCruiser_cis: ls_staticShip_diamondClassCruiser {
    displayName = "Diamond Class Cruiser (CIS)";

    EGVAR(map,icon) = QPATHTOF(data\ui\map\diamondClass_cis_ui_ca.paa);

    hiddenSelectionsTextures[] = {
        QPATHTOF(diamondClassCruiser\data\cis\camo1_co.paa)
    };
};
