class ls_glasses_goggles: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayname = CSTRING(goggles);

    model = QPATHTOF(equipment\goggles\ls_nvg_goggles.p3d);
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_ca.paa)
    };
    picture = QPATHTOF(data\ui\goggles_ui_ca.paa);
    mass = 2;

    ACE_Overlay = "";
    ACE_Color[] = {0, 0, 0};
    ACE_TintAmount = 8;
};

class ls_glasses_goggles_blue: ls_glasses_goggles {
    displayName = CSTRING(goggles_blue);
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_blue_ca.paa)
    };
    picture = QPATHTOF(data\ui\goggles_blue_ui_ca.paa);

    ACE_Color[] = {0, 0, 1};
};

class ls_glasses_goggles_green: ls_glasses_goggles {
    displayName = CSTRING(goggles_green);
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_green_ca.paa)
    };
    picture = QPATHTOF(data\ui\goggles_green_ui_ca.paa);

    ACE_Color[] = {0, 1, 0};
};

class ls_glasses_goggles_orange: ls_glasses_goggles {
    displayName = CSTRING(goggles_orange);
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_orange_ca.paa)
    };
    picture = QPATHTOF(data\ui\goggles_orange_ui_ca.paa);

    ACE_Color[] = {1, 1, 0};
};

class ls_glasses_goggles_white: ls_glasses_goggles {
    displayName = CSTRING(goggles_white);
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_white_ca.paa)
    };

    ACE_Color[] = {1, 1, 1};
};
