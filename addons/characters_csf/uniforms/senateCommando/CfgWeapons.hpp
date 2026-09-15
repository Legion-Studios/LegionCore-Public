class ls_csfUniform_senateCommando: ls_cloneUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(senateCommando_uniform);

    model = QPATHTOEF(characters_clone_legacy,uniforms\phase2\ls_gar_phase2_uniform_groundholder.p3d);
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    picture = QPATHTOF(data\ui\senateCommandoUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_csf_senateCommando";
    };
};

class ls_csfUniform_senateCommando_guardsman: ls_csfUniform_senateCommando {
    author = AUTHOR;
    displayName = CSTRING(senateCommando_guardsman_uniform);
    picture = QPATHTOF(data\ui\senateCommandoUniform_guardsman_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_csf_senateCommando_guardsman";
    };
};

class ls_csfUniform_senateCommando_lieutenant: ls_csfUniform_senateCommando {
    author = AUTHOR;
    displayName = CSTRING(senateCommando_lieutenant_uniform);
    picture = QPATHTOF(data\ui\senateCommandoUniform_lieutenant_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_csf_senateCommando_lieutenant";
    };
};

class ls_csfUniform_senateCommando_captain: ls_csfUniform_senateCommando {
    author = AUTHOR;
    displayName = CSTRING(senateCommando_captain_uniform);
    picture = QPATHTOF(data\ui\senateCommandoUniform_captain_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_csf_senateCommando_captain";
    };
};

class ls_csfUniform_senateCommando_hologram: ls_csfUniform_senateCommando {
    author = AUTHOR;
    displayName = CSTRING(senateCommando_hologram_uniform);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_csf_senateCommando_hologram";
    };
};
