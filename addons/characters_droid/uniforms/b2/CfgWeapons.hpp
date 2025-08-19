class ls_droidUniform_b2: ls_droidUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "B2 Droid Chassis";
    picture = QPATHTOF(data\ui\b2Uniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b2";
    };
};

class ls_droidUniform_b2_junkyard: ls_droidUniform_b2 {
    author = AUTHOR;
    displayName = "B2 Droid Chassis (Junkyard)";
    picture = QPATHTOF(data\ui\b2Uniform_junkyard_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b2_junkyard";
    };
};

class ls_droidUniform_b2_hologram: ls_droidUniform_b2 {
    author = AUTHOR;
    displayName = "B2 Droid Chassis (Hologram)";
    picture = QPATHTOF(data\ui\b2Uniform_hologram_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b2_hologram";
    };
};

class ls_droidUniform_b2_simulation: ls_droidUniform_b2 {
    author = AUTHOR;
    displayName = "B2 Droid Chassis (Simulation)";
    // picture = QPATHTOF(data\ui\b2Uniform_simulation_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_b2_simulation";
    };
};

// Needed for WebKnight Droids
DEPRECATED(lsd_cis_b2Droid_uniform,ls_droidUniform_b2);
