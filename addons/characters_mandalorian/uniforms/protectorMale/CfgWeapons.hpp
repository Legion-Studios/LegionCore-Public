class ls_mandalorianUniform_protectorMale: ls_mandalorianUniform {
    scope = 2;
    author = AUTHOR;
    displayName = "Mandalorian Protector (Male)";

    model = QPATHTOF(uniforms\protectorMale\ls_uniform_mandalorian_protectorMale.p3d);
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    picture = QPATHTOF(data\ui\protectorUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_mandalorian_protectorMale_base";
    };
};
