class ls_helmet_cqcm;
class ls_helmet_cqcm_visor;
class ls_helmet_cqcm_full;
class ls_helmet_cqcm_alt;
class ls_newRepublicHelmet_cqcm: ls_helmet_cqcm {
    author = AUTHOR;
    displayName = CSTRING(cqcm_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        "",
        ""
    };
    picture = QPATHTOF(data\ui\cqcHelmet_ui_ca.paa);
};

class ls_newRepublicHelmet_cqcm_visor: ls_helmet_cqcm_visor {
    author = AUTHOR;
    displayName = CSTRING(cqcm_visor_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        "",
        QPATHTOF(helmets\cqcm\data\camo_ca.paa)
    };
    picture = QPATHTOF(data\ui\cqcHelmet_visor_ui_ca.paa);
};

class ls_newRepublicHelmet_cqcm_full: ls_helmet_cqcm_full {
    author = AUTHOR;
    displayName = CSTRING(cqcm_mask_visor_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        QPATHTOF(helmets\cqcm\data\camo_ca.paa)
    };
    picture = QPATHTOF(data\ui\cqcHelmet_full_ui_ca.paa);
};

class ls_newRepublicHelmet_cqcm_alt: ls_helmet_cqcm_alt {
    author = AUTHOR;
    displayName = CSTRING(cqcm_mask_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        QPATHTOF(helmets\cqcm\data\camo_co.paa),
        ""
    };
    picture = QPATHTOF(data\ui\cqcHelmet_mask_ui_ca.paa);
};

DEPRECATED(ls_helmet_cqcm_newRepublic,ls_newRepublicHelmet_cqcm);
DEPRECATED(ls_helmet_cqcm_visor_newRepublic,ls_newRepublicHelmet_cqcm_visor);
DEPRECATED(ls_helmet_cqcm_full_newRepublic,ls_newRepublicHelmet_cqcm_full);
DEPRECATED(ls_helmet_cqcm_alt_newRepublic,ls_newRepublicHelmet_cqcm_alt);
