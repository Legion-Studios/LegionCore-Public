class ls_mandalorianHelmet_ordoGrunt: ls_mandalorianHelmet_traditional {
    author = AUTHOR;
    displayName = "Clan Ordo Grunt Helmet";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\ordo\data\grunt_helmet_co.paa),
        QPATHTOF(helmets\traditional\data\visor_co.paa),
        QPATHTOF(helmets\traditional\data\neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\ordoGruntHelmet_ui_ca.paa);
};

class ls_mandalorianHelmet_ordoSergeant: ls_mandalorianHelmet_traditional {
    author = AUTHOR;
    displayName = "Clan Ordo Sergeant Helmet";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\ordo\data\sergeant_helmet_co.paa),
        QPATHTOF(helmets\traditional\data\visor_co.paa),
        QPATHTOF(helmets\traditional\data\neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\ordoSergeantHelmet_ui_ca.paa);
};


class ls_mandalorianVest_ordoGrunt: ls_mandalorianVest_standard {
    author = AUTHOR;
    displayName = "Clan Ordo Grunt Armor";

    hiddenSelectionsTextures[] = {
        QPATHTOF(units\ordo\data\grunt_vest_co.paa)
    };
};

class ls_mandalorianVest_ordoSergeant: ls_mandalorianVest_standard {
    author = AUTHOR;
    displayName = "Clan Ordo Sergeant Armor";

    hiddenSelectionsTextures[] = {
        QPATHTOF(units\ordo\data\sergeant_vest_co.paa)
    };
};
