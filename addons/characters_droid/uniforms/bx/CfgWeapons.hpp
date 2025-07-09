class ls_droidUniform_bx: ls_droidUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "BX Commando Droid Chassis";
    picture = QPATHTOF(data\ui\bxUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_bx";
    };
};

class ls_droidUniform_bx_activeCamo: ls_droidUniform_bx {
    scope = 1;
    author = AUTHOR;

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_bx_activeCamo";
    };
};

class ls_droidUniform_bx_captain: ls_droidUniform_bx {
    author = AUTHOR;
    displayName = "BX Commando Droid Captain Chassis";
    picture = QPATHTOF(data\ui\bxUniform_captain_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_bx_captain";
    };

    EGVAR(activeCamo,camoItem) = "ls_droidUniform_bx_activeCamo";
};

class ls_droidUniform_bx_security: ls_droidUniform_bx {
    author = AUTHOR;
    displayName = "BX Security Droid Chassis";
    picture = QPATHTOF(data\ui\bxUniform_security_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_bx_security";
    };

    EGVAR(activeCamo,camoItem) = "ls_droidUniform_bx_activeCamo";
};

class ls_droidUniform_bx_diplomat: ls_droidUniform_bx {
    author = AUTHOR;
    displayName = "BX Diplomat Droid Chassis";
    picture = QPATHTOF(data\ui\bxUniform_diplomat_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_bx_diplomat";
    };

    EGVAR(activeCamo,camoItem) = "ls_droidUniform_bx_activeCamo";
};

class ls_droidUniform_bx_cloneDisguise: ls_droidUniform_bx {
    scope = 1;
    author = AUTHOR;

    model = QPATHTOEF(characters_clone_legacy,uniforms\phase2\ls_gar_phase2_uniform.p3d);
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    picture = QPATHTOEF(characters_clone_legacy,_ui\uniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_bx_cloneDisguise_phase2";
    };
};

class ls_droidUniform_bx_hologram: ls_droidUniform_bx {
    author = AUTHOR;
    displayName = "BX Commando Droid Chassis (Hologram)";
    picture = QPATHTOF(data\ui\bxUniform_hologram_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_bx_hologram";
    };
};

class ls_droidUniform_bx_simulation: ls_droidUniform_bx_hologram {
    author = AUTHOR;
    displayName = "BX Commando Droid Chassis (Simulation)";
    // picture = QPATHTOF(data\ui\bxUniform_simulation_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_bx_simulation";
    };
};

DEPRECATED(lsd_cis_bxDroid_uniform,ls_droidUniform_bx);
DEPRECATED(lsd_cis_bxCaptainDroid_uniform,ls_droidUniform_bx_captain);
