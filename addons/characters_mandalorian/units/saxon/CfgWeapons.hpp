class ls_mandalorianHelmet_saxonGrunt: ls_mandalorianHelmet_traditional {
    author = AUTHOR;
    displayName = "Clan Saxon Grunt Helmet";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\saxon\data\grunt_helmet_co.paa),
        QPATHTOF(helmets\traditional\data\visor_co.paa),
        QPATHTOF(helmets\traditional\data\neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\saxonGruntHelmet_ui_ca.paa);
};

class ls_mandalorianHelmet_saxonSergeant: ls_mandalorianHelmet_traditional {
    author = AUTHOR;
    displayName = "Clan Saxon Sergeant Helmet";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\saxon\data\sergeant_helmet_co.paa),
        QPATHTOF(helmets\traditional\data\visor_co.paa),
        QPATHTOF(helmets\traditional\data\neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\saxonSergeantHelmet_ui_ca.paa);
};


class ls_mandalorianVest_saxonGrunt: ls_mandalorianVest_standard {
    author = AUTHOR;
    displayName = "Clan Saxon Grunt Armor";

    hiddenSelectionsTextures[] = {
        QPATHTOF(units\saxon\data\grunt_vest_co.paa)
    };
};

class ls_mandalorianVest_saxonSergeant: ls_mandalorianVest_standard {
    author = AUTHOR;
    displayName = "Clan Saxon Sergeant Armor";

    hiddenSelectionsTextures[] = {
        QPATHTOF(units\saxon\data\sergeant_vest_co.paa)
    };
};
