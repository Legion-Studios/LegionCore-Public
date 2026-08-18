class ls_orsfUniform_trooper: ls_uniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(trooper_uniform);

    model = QPATHTOF(uniforms\trooper\ls_uniform_orsf_trooper.p3d);
    picture = QPATHTOF(data\ui\trooperUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_orsf_trooper";
    };
};
