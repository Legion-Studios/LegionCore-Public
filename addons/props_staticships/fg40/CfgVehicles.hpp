class ls_staticShip_fg40SupportFrigate: ls_staticShip_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "CEC FG-40 Support Frigate";

    model = QPATHTOF(fg40\ls_fg40Frigate.p3d);
    hiddenSelections[] = {"camo", "guns"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(fg40\data\camo_co.paa),
        QPATHTOF(fg40\data\guns_co.paa)
    };
};
