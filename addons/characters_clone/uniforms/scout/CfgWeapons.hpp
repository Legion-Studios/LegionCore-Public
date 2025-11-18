class ls_cloneUniform_scout: ls_cloneUniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Scout Armor";

    model = QPATHTOF(uniforms\scout\ls_uniform_clone_scout.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_clone_scout";
    };
};

class ls_cloneUniform_scout_undersuit: ls_cloneUniform_scout {
    author = AUTHOR;
    displayName = "Scout Undersuit";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_clone_scout_undersuit";
    };
};
