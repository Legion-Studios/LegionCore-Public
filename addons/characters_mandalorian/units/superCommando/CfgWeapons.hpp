TRADITIONAL_HELMET(superCommando,grunt,Grunt);
TRADITIONAL_HELMET(superCommando,sergeant,Sergeant);
TRADITIONAL_HELMET(superCommando,captain,Captain);

class ls_mandalorianUniform_superCommandoGrunt: ls_mandalorianUniform_protectorMale {
    author = AUTHOR;
    displayName = CSTRING(superCommando_grunt_uniform);
    picture = QPATHTOF(data\ui\superCommandoGruntUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_mandalorian_superCommandoWarrior";
    };
};

class ls_mandalorianUniform_superCommandoSergeant: ls_mandalorianUniform_protectorMale {
    author = AUTHOR;
    displayName = CSTRING(superCommando_sergeant_uniform);
    picture = QPATHTOF(data\ui\superCommandoSergeantUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_mandalorian_superCommandoSergeant";
    };
};

class ls_mandalorianVest_superCommandoGrunt: ls_mandalorianVest_protectorMale {
    author = AUTHOR;
    displayName = CSTRING(superCommando_grunt_vest);

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
    displayName = CSTRING(superCommando_sergeant_vest);

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
