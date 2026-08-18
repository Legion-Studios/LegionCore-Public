class ls_gar_marshalCommander_uniform: ls_cloneUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Marshal Commander Armor";

    model = QPATHTOF(uniforms\marshalCommander\ls_gar_marshalCommander_uniform.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_gar_marshalCommander_base";
        containerClass = "Supply150";
        mass = 40;
    };
};
