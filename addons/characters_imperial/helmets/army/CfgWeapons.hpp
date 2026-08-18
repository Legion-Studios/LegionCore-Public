class ls_imperialHelmet_army: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(army_helmet);

    model = QPATHTOF(helmets\army\ls_helmet_imperial_army.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\army\ls_helmet_imperial_army.p3d);
        hiddenSelections[] = {"camo"};
    };
};

class ls_imperialHelmet_army_black: ls_imperialHelmet_army {
    author = AUTHOR;
    displayName = CSTRING(army_black_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_black_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_black_ui_ca.paa);
};

class ls_imperialHelmet_army_isb: ls_imperialHelmet_army {
    author = AUTHOR;
    displayName = CSTRING(army_isb_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_isb_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_isb_ui_ca.paa);
};

class ls_imperialHelmet_army_mudtrooper: ls_imperialHelmet_army {
    author = AUTHOR;
    displayName = CSTRING(army_mudtrooper_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_mudtrooper_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_mudtrooper_ui_ca.paa);
};

class ls_imperialHelmet_army_gd: ls_imperialHelmet_army {
    author = AUTHOR;
    displayName = CSTRING(army_gd_helmet);

    model = QPATHTOF(helmets\army\ls_helmet_imperial_army_gd.p3d);
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gd_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\army\ls_helmet_imperial_army_gd.p3d);
        hiddenSelections[] = {"camo", "camo1"};
    };
};

class ls_imperialHelmet_army_gd_black: ls_imperialHelmet_army_gd {
    author = AUTHOR;
    displayName = CSTRING(army_gd_black_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_black_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gd_black_ui_ca.paa);
};

class ls_imperialHelmet_army_gd_isb: ls_imperialHelmet_army_gd {
    author = AUTHOR;
    displayName = CSTRING(army_gd_isb_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_isb_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gd_isb_ui_ca.paa);
};

class ls_imperialHelmet_army_gd_mudtrooper: ls_imperialHelmet_army_gd {
    author = AUTHOR;
    displayName = CSTRING(army_gd_mudtrooper_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gd_mudtrooper_ui_ca.paa);
};

class ls_imperialHelmet_army_gu: ls_imperialHelmet_army_gd {
    author = AUTHOR;
    displayName = CSTRING(army_gu_helmet);

    model = QPATHTOF(helmets\army\ls_helmet_imperial_army_gu.p3d);
    picture = QPATHTOF(data\ui\helmet_army_gu_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\army\ls_helmet_imperial_army_gu.p3d);
        hiddenSelections[] = {"camo", "camo1"};
    };
};

class ls_imperialHelmet_army_gu_black: ls_imperialHelmet_army_gu {
    author = AUTHOR;
    displayName = CSTRING(army_gu_black_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_black_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gu_black_ui_ca.paa);
};

class ls_imperialHelmet_army_gu_isb: ls_imperialHelmet_army_gu {
    author = AUTHOR;
    displayName = CSTRING(army_gu_isb_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_isb_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gu_isb_ui_ca.paa);
};

class ls_imperialHelmet_army_gu_mudtrooper: ls_imperialHelmet_army_gu {
    author = AUTHOR;
    displayName = CSTRING(army_gu_mudtrooper_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gu_mudtrooper_ui_ca.paa);
};

class ls_imperialHelmet_army_gdr: ls_imperialHelmet_army {
    author = AUTHOR;
    displayName = CSTRING(army_gdr_helmet);

    model = QPATHTOF(helmets\army\ls_helmet_imperial_army_gdr.p3d);
    hiddenSelections[] = {
        "camo",
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa),
        QPATHTOF(helmets\army\data\rebreather_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gdr_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\army\ls_helmet_imperial_army_gdr.p3d);
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2"
        };
    };
};

class ls_imperialHelmet_army_gdr_black: ls_imperialHelmet_army_gdr {
    author = AUTHOR;
    displayName = CSTRING(army_gdr_black_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_black_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa),
        QPATHTOF(helmets\army\data\rebreather_black_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gdr_black_ui_ca.paa);
};

class ls_imperialHelmet_army_gdr_isb: ls_imperialHelmet_army_gdr {
    author = AUTHOR;
    displayName = CSTRING(army_gdr_isb_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_isb_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa),
        QPATHTOF(helmets\army\data\rebreather_isb_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gdr_isb_ui_ca.paa);
};

class ls_imperialHelmet_army_gdr_mudtrooper: ls_imperialHelmet_army_gdr {
    author = AUTHOR;
    displayName = CSTRING(army_gdr_mudtrooper_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa),
        QPATHTOF(helmets\army\data\rebreather_mudtrooper_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gdr_mudtrooper_ui_ca.paa);
};

class ls_imperialHelmet_army_gur: ls_imperialHelmet_army_gdr {
    author = AUTHOR;
    displayName = CSTRING(army_gur_helmet);

    model = QPATHTOF(helmets\army\ls_helmet_imperial_army_gur.p3d);
    picture = QPATHTOF(data\ui\helmet_army_gur_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\army\ls_helmet_imperial_army_gur.p3d);
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2"
        };
    };
};

class ls_imperialHelmet_army_gur_black: ls_imperialHelmet_army_gur {
    author = AUTHOR;
    displayName = CSTRING(army_gur_black_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_black_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa),
        QPATHTOF(helmets\army\data\rebreather_black_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gur_black_ui_ca.paa);
};

class ls_imperialHelmet_army_gur_isb: ls_imperialHelmet_army_gur {
    author = AUTHOR;
    displayName = CSTRING(army_gur_isb_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_isb_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa),
        QPATHTOF(helmets\army\data\rebreather_isb_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gur_isb_ui_ca.paa);
};

class ls_imperialHelmet_army_gur_mudtrooper: ls_imperialHelmet_army_gur {
    author = AUTHOR;
    displayName = CSTRING(army_gur_mudtrooper_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(helmets\army\data\goggles_co.paa),
        QPATHTOF(helmets\army\data\rebreather_mudtrooper_co.paa)
    };
    picture = QPATHTOF(data\ui\helmet_army_gur_mudtrooper_ui_ca.paa);
};
