class ls_gar_phase2_uniform: ls_cloneUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Phase 2 Trooper Armor";

    model = QPATHTOF(uniforms\phase2\ls_gar_phase2_uniform.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "lsd_gar_phase2_base";
        containerClass = "Supply150";
        mass = 40;
    };
};

class lsd_gar_bodyGlove_uniform: ls_cloneUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Body Glove";

    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";

    class ItemInfo: ItemInfo {
        uniformClass = "lsd_gar_bodyGlove_base";
        containerClass = "Supply10";
        mass = 1;
    };
};

class lsd_gar_bodyGloveLegArmor_uniform: lsd_gar_bodyGlove_uniform {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Body Glove [w/ Leg Armor]";

    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";

    class ItemInfo: ItemInfo {
        uniformClass = "lsd_gar_bodyGloveLegArmor_base";
        mass = 20;
    };
};

class lsd_bodyglove_uniform: lsd_gar_bodyGloveLegArmor_uniform {
    scope = 1;
    author = AUTHOR;
    displayName = "Clone Body Glove";

    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";

    class ItemInfo: ItemInfo {
        uniformClass = "lsd_bodyGlove_base";
    };
};
