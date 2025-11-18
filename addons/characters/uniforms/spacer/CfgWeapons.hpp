class ls_uniform_spacer: ls_uniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Spacer Fatigues";

    model = QPATHTOF(uniforms\spacer\ls_uniform_spacer.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_spacer_base";
    };
};

class ls_uniform_spacer_alt: ls_uniform_spacer {
    author = AUTHOR;
    displayName = "Spacer Fatigues (Alt)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_spacer_alt_base";
    };
};

class ls_uniform_spacer_brown: ls_uniform_spacer {
    author = AUTHOR;
    displayName = "Spacer Fatigues (Brown)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_spacer_brown_base";
    };
};

class ls_uniform_spacer_brown_alt: ls_uniform_spacer {
    author = AUTHOR;
    displayName = "Spacer Fatigues (Brown Alt)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_spacer_brown_alt_base";
    };
};
