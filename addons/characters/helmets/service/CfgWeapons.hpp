class ls_helmet_serviceComlink: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Service Helmet (Comlink)";

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

    class ItemInfo: ItemInfo {
        mass = 5;
        uniformModel = QPATHTOF(helmets\service\ls_helmet_service.p3d);
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 11;
                passThrough = 0.1;
            };
        };
    };
};

class ls_helmet_service: ls_helmet_serviceComlink {
    displayName = "Service Helmet";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_co.paa),
        "",
        QPATHTOF(helmets\service\data\camo_co.paa)
    };
};

class ls_helmet_technicianComlink: ls_helmet_serviceComlink {
    displayName = "Technician [Comlink]";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_co.paa),
        QPATHTOF(helmets\service\data\camo_co.paa),
        ""
    };
};

class ls_helmet_technician: ls_helmet_serviceComlink {
    displayName = "Technician";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_co.paa),
        "",
        ""
    };
};
// Brown
class ls_helmet_serviceComlink_brown: ls_helmet_serviceComlink {
    displayName = "Service Helmet [Comlink][Brown]";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_brown_co.paa),
        QPATHTOF(helmets\service\data\camo_brown_co.paa),
        QPATHTOF(helmets\service\data\camo_brown_co.paa)
    };
};

class ls_helmet_service_brown: ls_helmet_serviceComlink {
    displayName = "Service Helmet [Brown]";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_brown_co.paa),
        "",
        QPATHTOF(helmets\service\data\camo_brown_co.paa)
    };
};

class ls_helmet_technicianOfficer_brown: ls_helmet_serviceComlink {
    displayName = "Technician [Comlink][Brown]";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_brown_co.paa),
        QPATHTOF(helmets\service\data\camo_brown_co.paa),
        ""
    };
};

class ls_helmet_technician_brown: ls_helmet_serviceComlink {
    displayName = "Technician [Brown]";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\service\data\camo_brown_co.paa),
        "",
        ""
    };
};
