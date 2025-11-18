class ls_jabiimGlasses_goggles: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Jabiimi Nationalist Goggles";

    model = QPATHTOF(equipment\goggles\ls_glasses_jabiimGoggles_on.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\goggles\data\camo1_co.paa),
        QPATHTOF(equipment\goggles\data\camo1_co.paa)
    };

    hoa_sling_slingWithHelmet = 1;
};

class ls_jabiimGlasses_goggles_raised: ls_jabiimGlasses_goggles {
    author = AUTHOR;
    displayName = "Jabiimi Nationalist Goggles (Raised)";
    model = QPATHTOF(equipment\goggles\ls_glasses_jabiimGoggles_off.p3d);

    GOGGLES_OVERLAY_NONE;
};
