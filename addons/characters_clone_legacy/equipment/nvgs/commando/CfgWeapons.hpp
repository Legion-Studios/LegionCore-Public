class ls_sob_commando_visor_nvg: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Katarn I Clone Commando Visor";

    model = QPATHTOF(equipment\nvgs\commando\ls_nvg_clone_commando_visor.p3d);
    hiddenSelections[] = {"illum", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\commando\data\camo1_co.paa),
        QPATHTOF(helmets\commando\data\camo1_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
    picture = QPATHTOF(_ui\commando_visor_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\commando\ls_nvg_clone_commando_visor.p3d);
        modelOff = QPATHTOF(equipment\nvgs\commando\ls_nvg_clone_commando_visor.p3d);
        hiddenSelections[] = {"illum", "camo1"};
    };
};

class ls_sob_commando_visor_nvg_activeCamo: ls_sob_commando_visor_nvg {
    scope = 1;
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa),
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat),
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};

class ls_sob_commando_antenna_nvg: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Katarn I Clone Commando Antenna";

    model = QPATHTOF(equipment\nvgs\commando\ls_nvg_clone_commando_antenna.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\commando\data\camo1_co.paa),
    };
    picture = QPATHTOF(_ui\commando_antenna_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\commando\ls_nvg_clone_commando_antenna.p3d);
        modelOff = QPATHTOF(equipment\nvgs\commando\ls_nvg_clone_commando_antenna.p3d);
        hiddenSelections[] = {"camo1"};
    };
};

class ls_sob_commando_antenna_nvg_activeCamo: ls_sob_commando_antenna_nvg {
    scope = 1;
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};
