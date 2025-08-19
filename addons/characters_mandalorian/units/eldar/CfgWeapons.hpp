class ls_mandalorianHelmet_eldarGrunt: ls_mandalorianHelmet_traditional {
    author = AUTHOR;
    displayName = "Clan Eldar Grunt Helmet";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\eldar\data\grunt_helmet_co.paa),
        QPATHTOF(helmets\traditional\data\visor_co.paa),
        QPATHTOF(helmets\traditional\data\neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\eldarGruntHelmet_ui_ca.paa);
};

class ls_mandalorianHelmet_eldarSergeant: ls_mandalorianHelmet_traditional {
    author = AUTHOR;
    displayName = "Clan Eldar Sergeant Helmet";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\eldar\data\sergeant_helmet_co.paa),
        QPATHTOF(helmets\traditional\data\visor_co.paa),
        QPATHTOF(helmets\traditional\data\neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\eldarSergeantHelmet_ui_ca.paa);
};


class ls_mandalorianVest_eldarGrunt: ls_mandalorianVest_standard {
    author = AUTHOR;
    displayName = "Clan Eldar Grunt Armor";

    hiddenSelectionsTextures[] = {
        QPATHTOF(units\eldar\data\grunt_vest_co.paa)
    };
};

class ls_mandalorianVest_eldarSergeant: ls_mandalorianVest_standard {
    author = AUTHOR;
    displayName = "Clan Eldar Sergeant Armor";

    hiddenSelectionsTextures[] = {
        QPATHTOF(units\eldar\data\sergeant_vest_co.paa)
    };
};
