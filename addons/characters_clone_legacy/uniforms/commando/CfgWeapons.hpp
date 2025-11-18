class ls_sob_commando_uniform: ls_cloneUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commando Katarn I Armor";

    model = QPATHTOF(uniforms\commando\ls_uniform_clone_commando.p3d);
    picture = QPATHTOF(_ui\commando_uniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_sob_commando_unit";
        containerClass = "Supply150";
        mass = 40;
    };
};

class ls_sob_commando_hologram_uniform: ls_sob_commando_uniform {
    author = AUTHOR;
    displayName = "Clone Commando Katarn I Armor (Hologram)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_sob_commando_hologram_unit";
    };
};

class ls_sob_commando_uniform_activeCamo: ls_sob_commando_uniform {
    scope = 1;
    author = AUTHOR;

    class ItemInfo: ItemInfo {
        uniformClass = "ls_sob_commando_activeCamo_unit";
    };
};
