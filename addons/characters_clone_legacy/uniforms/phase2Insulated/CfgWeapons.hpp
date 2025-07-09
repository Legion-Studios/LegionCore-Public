class lsd_gar_phase2Insulated_uniform: ls_cloneUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Phase 2 Insulated Armor";

    model = QPATHTOF(uniforms\phase2\ls_gar_phase2_uniform.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "lsd_gar_phase2Insulated_base";
        containerClass = "Supply150";
        mass = 40;
    };
};
