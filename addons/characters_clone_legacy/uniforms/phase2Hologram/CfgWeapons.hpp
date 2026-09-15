class ls_gar_phase2Hologram_uniform: ls_cloneUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Phase 2 Hologram Armor";

    // model = QPATHTOF(uniforms\phase2\ls_gar_phase2_uniform_groundholder.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = "-";
        uniformClass = "ls_gar_phase2Hologram_base";
        containerClass = "Supply150";
        mass = 40;
    };
};
