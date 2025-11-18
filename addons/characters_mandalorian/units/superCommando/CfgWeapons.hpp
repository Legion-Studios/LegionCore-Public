class ls_mandalorianHelmet_superCommandoGrunt: ls_mandalorianHelmet_traditional {
    author = AUTHOR;
    displayName = "Super Commando Grunt Helmet";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\superCommando\data\grunt_helmet_co.paa),
        QPATHTOF(helmets\traditional\data\visor_co.paa),
        QPATHTOF(units\superCommando\data\grunt_neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\superCommandoGruntHelmet_ui_ca.paa);
};

class ls_mandalorianHelmet_superCommandoSergeant: ls_mandalorianHelmet_traditional {
    author = AUTHOR;
    displayName = "Super Commando Sergeant Helmet";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\superCommando\data\sergeant_helmet_co.paa),
        QPATHTOF(helmets\traditional\data\visor_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\superCommandoGruntHelmet_ui_ca.paa);
};

class ls_mandalorianHelmet_superCommandoCaptain: ls_mandalorianHelmet_traditional {
    author = AUTHOR;
    displayName = "Super Commando Captain Helmet";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\superCommando\data\captain_helmet_co.paa),
        QPATHTOF(units\superCommando\data\captain_visor_co.paa),
        QPATHTOF(units\superCommando\data\captain_neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\superCommandoGruntHelmet_ui_ca.paa);
};

class ls_mandalorianUniform_superCommandoGrunt: ls_mandalorianUniform_protectorMale {
    author = AUTHOR;
    displayName = "Super Commando Grunt Armor";
    picture = QPATHTOF(data\ui\superCommandoGruntUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_mandalorian_superCommandoWarrior";
    };
};

class ls_mandalorianUniform_superCommandoSergeant: ls_mandalorianUniform_protectorMale {
    author = AUTHOR;
    displayName = "Super Commando Sergeant Armor";
    picture = QPATHTOF(data\ui\superCommandoSergeantUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_mandalorian_superCommandoSergeant";
    };
};

class ls_mandalorianVest_superCommandoGrunt: ls_mandalorianVest_protectorMale {
    author = AUTHOR;
    displayName = "Super Commando Grunt Vest";

    hiddenSelectionsTextures[] = {
        QPATHTOF(units\superCommando\data\grunt_vest_co.paa),
        QPATHTOF(units\superCommando\data\grunt_vest_co.paa),
        QPATHTOF(units\superCommando\data\grunt_vest_co.paa),
        QPATHTOF(units\superCommando\data\grunt_vest_co.paa),
        QPATHTOF(units\superCommando\data\grunt_vest_co.paa),
        QPATHTOF(units\superCommando\data\grunt_vest_co.paa),
        QPATHTOF(units\superCommando\data\grunt_vest_co.paa),
        QPATHTOF(units\superCommando\data\grunt_vest_co.paa),
        QPATHTOF(units\superCommando\data\grunt_vest_co.paa),
        QPATHTOF(units\superCommando\data\grunt_vest_co.paa),
        QPATHTOF(units\superCommando\data\grunt_vest_co.paa)
    };
};

class ls_mandalorianVest_superCommandoSergeant: ls_mandalorianVest_protectorMale {
    author = AUTHOR;
    displayName = "Super Commando Sergeant Vest";

    hiddenSelectionsTextures[] = {
        QPATHTOF(units\superCommando\data\sergeant_vest_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_vest_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_vest_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_vest_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_vest_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_vest_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_vest_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_vest_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_vest_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_vest_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_vest_co.paa)
    };
};
