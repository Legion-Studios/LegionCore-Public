class ls_imperialHelmet_kepi: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Army Kepi";

    model = QPATHTOF(helmets\kepi\ls_helmet_imperial_army_kepi.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\kepi\data\camo1_co.paa)
    };
    picture = QPATHTOF(_ui\kepi_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\kepi\ls_helmet_imperial_army_kepi.p3d);
        hiddenSelections[] = {"camo"};
    };
};

class ls_imperialHelmet_kepi_black: ls_imperialHelmet_kepi {
    displayName = "Imperial Army Kepi (Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\kepi\data\camo1_black_co.paa)
    };
};

class ls_imperialHelmet_kepi_isb: ls_imperialHelmet_kepi {
    displayName = "Imperial Army Kepi (ISB)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\kepi\data\camo1_isb_co.paa)
    };
};

class ls_imperialHelmet_kepi_mudtrooper: ls_imperialHelmet_kepi {
    displayName = "Imperial Army Kepi (Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\kepi\data\camo1_mudtrooper_co.paa)
    };
};

class ls_imperialHelmet_kepi_g: ls_imperialHelmet_kepi {
    scope = 2;
    displayName = "Imperial Army Kepi (Goggles)";

    model = QPATHTOF(helmets\kepi\ls_helmet_imperial_army_kepi_g.p3d);
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\kepi\data\camo1_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa)
    };
    picture = QPATHTOF(_ui\kepi_g_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\kepi\ls_helmet_imperial_army_kepi_g.p3d);
        hiddenSelections[] = {"camo", "camo1"};
    };
};

class ls_imperialHelmet_kepi_g_black: ls_imperialHelmet_kepi_g {
    displayName = "Imperial Army Kepi (Goggles, Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\kepi\data\camo1_black_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa)
    };
};

class ls_imperialHelmet_kepi_g_mudtrooper: ls_imperialHelmet_kepi_g {
    displayName = "Imperial Army Kepi (Goggles, Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\kepi\data\camo1_mudtrooper_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa)
    };
};

class ls_imperialHelmet_kepi_g_isb: ls_imperialHelmet_kepi_g {
    displayName = "Imperial Army Kepi (Goggles, ISB)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\kepi\data\camo1_isb_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa)
    };
};
