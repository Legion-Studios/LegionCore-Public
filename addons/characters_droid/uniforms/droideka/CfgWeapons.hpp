class ls_droidUniform_droideka: ls_droidUniform_base {
    scope = 1;
    author = AUTHOR;
    displayName = CSTRING(droideka_uniform);
    model = QPATHTOF(uniforms\droideka\ls_uniform_droideka.p3d);

    ace_fire_protection = 1;

    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_droideka_base";
    };
};

class ls_droidUniform_droideka_training: ls_droidUniform_droideka {
    author = AUTHOR;
    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_droideka_training";
    };
};

class ls_droidUniform_droideka_imperial: ls_droidUniform_droideka {
    author = AUTHOR;
    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_droideka_imperial";
    };
};

class ls_droidUniform_droideka_junkyard: ls_droidUniform_droideka {
    author = AUTHOR;
    class ItemInfo: ItemInfo {
        uniformClass = "ls_droid_droideka_junkyard";
    };
};
