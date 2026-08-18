class ls_uniform_naval: ls_uniform_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(naval_uniform);
    model = QPATHTOF(uniforms\naval\ls_uniform_naval.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_naval_unit_base";
    };
};
