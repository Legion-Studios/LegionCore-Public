class ls_uniform_spacer: ls_uniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(spacer_uniform);
    model = QPATHTOF(uniforms\spacer\ls_uniform_spacer.p3d);
    picture = QPATHTOF(data\ui\spacerUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_spacer_base";
    };
};

class ls_uniform_spacer_alt: ls_uniform_spacer {
    author = AUTHOR;
    displayName = CSTRING(spacer_alt_uniform);
    picture = QPATHTOF(data\ui\spacerUniform_alt_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_spacer_alt_base";
    };
};

class ls_uniform_spacer_brown: ls_uniform_spacer {
    author = AUTHOR;
    displayName = CSTRING(spacer_brown_uniform);
    picture = QPATHTOF(data\ui\spacerUniform_brown_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_spacer_brown_base";
    };
};

class ls_uniform_spacer_brown_alt: ls_uniform_spacer {
    author = AUTHOR;
    displayName = CSTRING(spacer_brownAlt_uniform);
    picture = QPATHTOF(data\ui\spacerUniform_brownAlt_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_spacer_brown_alt_base";
    };
};
