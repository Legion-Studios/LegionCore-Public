class ls_cloneUniform_scout: ls_cloneUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(scout_uniform);

    model = QPATHTOF(uniforms\scout\ls_uniform_clone_scout.p3d);
    picture = QPATHTOF(data\ui\scoutUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_clone_scout_base";
    };
};

class ls_cloneUniform_scout_undersuit: ls_cloneUniform_scout {
    author = AUTHOR;
    displayName = CSTRING(scout_undersuit_uniform);
    picture = QPATHTOF(data\ui\scoutUniform_undersuit_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_clone_scout_undersuit";
    };
};
