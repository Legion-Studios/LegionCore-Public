class ls_mandalorianUniform_traditionalWoman: ls_mandalorianUniform {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(traditional_feminine_uniform);

    // model = QPATHTOF(uniforms\traditionalWoman\ls_uniform_mandalorian_traditionalWoman_gh.p3d);
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    picture = QPATHTOF(data\ui\traditionalWomanUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_mandalorian_traditionalWoman";
    };
};
