class ls_cloneUniform_phase2: ls_cloneUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Phase 2 Armor";

    model = QPATHTOF(uniforms\phase2\ls_uniform_clone_phase2.p3d);
    picture = QPATHTOF(data\ui\cloneUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_clone_phase2_base";
    };
};
