class ls_newRepublicUniform_naval: ls_uniform_naval {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(naval_uniform);
    picture = QPATHTOF(data\ui\navalUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_newRepublic_naval_trooper";
    };
};

class ls_newRepublicUniform_naval_alt1: ls_uniform_naval {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(naval_alt1_uniform);
    picture = QPATHTOF(data\ui\navalUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_newRepublic_naval_trooper_alt1";
    };
};

class ls_newRepublicUniform_naval_alt2: ls_uniform_naval {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(naval_alt2_uniform);
    picture = QPATHTOF(data\ui\navalUniform_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = "ls_newRepublic_naval_trooper_alt2";
    };
};
