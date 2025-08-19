class ls_clone_phase2_base: ls_clone_unit_base {
    scope = 1; // scope 1 to assign textures
    displayName = "Clone [Phase 2]";

    model = QPATHTOF(uniforms\phase2\ls_uniform_clone_phase2.p3d);
    uniformClass = "ls_cloneUniform_phase2";
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "undersuit"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\phase2\data\Upper_armor_co.paa),
        QPATHTOF(uniforms\phase2\data\Lower_armor_co.paa),
        QPATHTOF(uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {
        "ls_cloneHelmet_phase2",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase2",
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
