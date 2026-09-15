class ls_helmet_serviceComlink: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(service_comlink_helmet);

    model = QPATHTOF(helmets\service\ls_helmet_service.p3d);
    hiddenSelections[] = {
        "camo",
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_co.paa),
        QPATHTOF(helmets\service\data\camo_co.paa),
        QPATHTOF(helmets\service\data\camo_co.paa)
    };
    picture = QPATHTOF(data\ui\serviceHelmet_comlink_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 35;
        uniformModel = QPATHTOF(helmets\service\ls_helmet_service.p3d);
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2"
        };
    };
};

class ls_helmet_service: ls_helmet_serviceComlink {
    displayName = CSTRING(service_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_co.paa),
        "",
        QPATHTOF(helmets\service\data\camo_co.paa)
    };
    picture = QPATHTOF(data\ui\serviceHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 30;
    };
};

class ls_helmet_serviceComlink_brown: ls_helmet_serviceComlink {
    displayName = CSTRING(service_comlink_brown_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_brown_co.paa),
        QPATHTOF(helmets\service\data\camo_brown_co.paa),
        QPATHTOF(helmets\service\data\camo_brown_co.paa)
    };
    picture = QPATHTOF(data\ui\serviceHelmet_comlink_brown_ui_ca.paa);
};

class ls_helmet_service_brown: ls_helmet_service {
    displayName = CSTRING(service_brown_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_brown_co.paa),
        "",
        QPATHTOF(helmets\service\data\camo_brown_co.paa)
    };
    picture = QPATHTOF(data\ui\serviceHelmet_brown_ui_ca.paa);
};

class ls_helmet_technicianComlink: ls_helmet_serviceComlink {
    displayName = CSTRING(technician_comlink_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_co.paa),
        QPATHTOF(helmets\service\data\camo_co.paa),
        ""
    };
    picture = QPATHTOF(data\ui\technicianHelmet_comlink_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 25;
    };
};

class ls_helmet_technician: ls_helmet_serviceComlink {
    displayName = CSTRING(technician_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_co.paa),
        "",
        ""
    };picture = QPATHTOF(data\ui\technicianHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 20;
    };
};

class ls_helmet_technicianComlink_brown: ls_helmet_technicianComlink {
    displayName = CSTRING(technician_comlink_brown_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_brown_co.paa),
        QPATHTOF(helmets\service\data\camo_brown_co.paa),
        ""
    };picture = QPATHTOF(data\ui\technicianHelmet_comlink_brown_ui_ca.paa);
};

class ls_helmet_technician_brown: ls_helmet_technician {
    displayName = CSTRING(technician_brown_helmet);
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_brown_co.paa),
        "",
        ""
    };picture = QPATHTOF(data\ui\technicianHelmet_brown_ui_ca.paa);
};

DEPRECATED(ls_helmet_technicianOfficer_brown,ls_helmet_technicianComlink_brown);
