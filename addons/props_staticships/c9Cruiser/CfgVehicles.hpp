class ls_staticShip_c9LightCruiser: ls_staticShip_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "CEC C9 Light Cruiser";

    model = QPATHTOF(c9Cruiser\ls_c9Cruiser.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(c9Cruiser\data\camo1_co.paa)
    };
};

class ls_staticShip_c9LightCruiser_republic: ls_staticShip_c9LightCruiser {
    author = AUTHOR;
    displayName = "CEC C9 Light Cruiser (Republic Diplomat)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(c9Cruiser\data\republic\camo1_CO.paa)
    };
};

class ls_staticShip_c9LightCruiser_newRepublic: ls_staticShip_c9LightCruiser {
    author = AUTHOR;
    displayName = "CEC C9 Light Cruiser (New Republic)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(c9Cruiser\data\newRepublic\camo1_CO.paa)
    };
};
