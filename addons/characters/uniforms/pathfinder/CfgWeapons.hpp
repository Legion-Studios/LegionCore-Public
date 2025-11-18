class ls_uniform_pathfinder: ls_uniform_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Pathfinder Fatigues";

    model = QPATHTOF(uniforms\pathfinder\ls_uniform_pathfinder.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_unit_base";
    };
};

class ls_uniform_pathfinder_brown: ls_uniform_pathfinder {
    author = AUTHOR;
    displayName = "Pathfinder Fatigues (L. Brown)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_brown_base";
    };
};

class ls_uniform_pathfinder_navy: ls_uniform_pathfinder {
    author = AUTHOR;
    displayName = "Pathfinder Fatigues (Navy)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_navy_base";
    };
};

class ls_uniform_pathfinder_navy_alt: ls_uniform_pathfinder {
    author = AUTHOR;
    displayName = "Pathfinder Fatigues (Navy Alt)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_navy_alt_base";
    };
};

class ls_uniform_pathfinder_r: ls_uniform_pathfinder {
    author = AUTHOR;
    displayName = "Pathfinder Fatigues (Rolled)";

    model = QPATHTOF(uniforms\pathfinder\ls_uniform_pathfinder_r.p3d);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_unit_base_r";
    };
};

class ls_uniform_pathfinder_brown_r: ls_uniform_pathfinder_r {
    author = AUTHOR;
    displayName = "Pathfinder Fatigues (L. Brown, Rolled)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_brown_base_r";
    };
};

class ls_uniform_pathfinder_navy_r: ls_uniform_pathfinder_r {
    author = AUTHOR;
    displayName = "Pathfinder Fatigues (Navy, Rolled)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_navy_base_r";
    };
};

class ls_uniform_pathfinder_navy_alt_r: ls_uniform_pathfinder_r {
    author = AUTHOR;
    displayName = "Pathfinder Fatigues (Navy Alt, Rolled)";

    class ItemInfo: ItemInfo {
        uniformClass = "ls_pathfinder_navy_alt_base_r";
    };
};
