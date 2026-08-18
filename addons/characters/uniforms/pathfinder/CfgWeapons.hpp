class ls_uniform_pathfinder: ls_uniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(pathfinder_uniform);
    picture = QPATHTOF(data\ui\pathfinderUniform_ui_ca.paa);

    model = QPATHTOF(uniforms\pathfinder\ls_uniform_pathfinder.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_unit_base";
    };
};

class ls_uniform_pathfinder_brown: ls_uniform_pathfinder {
    author = AUTHOR;
    displayName = CSTRING(pathfinder_brown_uniform);
    picture = QPATHTOF(data\ui\pathfinderUniform_brown_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_brown_base";
    };
};

class ls_uniform_pathfinder_navy: ls_uniform_pathfinder {
    author = AUTHOR;
    displayName = CSTRING(pathfinder_navy_uniform);
    picture = QPATHTOF(data\ui\pathfinderUniform_navy_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_navy_base";
    };
};

class ls_uniform_pathfinder_navy_alt: ls_uniform_pathfinder {
    author = AUTHOR;
    displayName = CSTRING(pathfinder_navyAlt_uniform);
    picture = QPATHTOF(data\ui\pathfinderUniform_navyAlt_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_navy_alt_base";
    };
};

class ls_uniform_pathfinder_r: ls_uniform_pathfinder {
    author = AUTHOR;
    displayName = CSTRING(pathfinder_rolled_uniform);
    picture = QPATHTOF(data\ui\pathfinderUniform_rolled_ui_ca.paa);

    model = QPATHTOF(uniforms\pathfinder\ls_uniform_pathfinder_r.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_unit_base_r";
    };
};

class ls_uniform_pathfinder_brown_r: ls_uniform_pathfinder_r {
    author = AUTHOR;
    displayName = CSTRING(pathfinder_brown_rolled_uniform);
    picture = QPATHTOF(data\ui\pathfinderUniform_brown_rolled_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_brown_base_r";
    };
};

class ls_uniform_pathfinder_navy_r: ls_uniform_pathfinder_r {
    author = AUTHOR;
    displayName = CSTRING(pathfinder_navy_rolled_uniform);
    picture = QPATHTOF(data\ui\pathfinderUniform_navy_rolled_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_navy_base_r";
    };
};

class ls_uniform_pathfinder_navy_alt_r: ls_uniform_pathfinder_r {
    author = AUTHOR;
    displayName = CSTRING(pathfinder_navyAlt_rolled_uniform);
    picture = QPATHTOF(data\ui\pathfinderUniform_navyAlt_rolled_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_navy_alt_base_r";
    };
};
