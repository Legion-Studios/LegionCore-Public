class ls_mandalorianUniform: ls_uniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Mandalorian Undersuit";

    // model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    // hiddenSelections[] = {"camo"};
    // hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
    picture = QPATHTOF(data\ui\undersuit_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_mandalorian_base";
        containerClass = "Supply150";
        mass = 40;
    };
};
