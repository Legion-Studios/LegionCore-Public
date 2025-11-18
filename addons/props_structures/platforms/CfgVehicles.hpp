class ls_platform_5x5: ls_House_F {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;

    displayName = "Platform (5x5)";
    icon="iconObject";
    editorsubcategory="ls_edsubcat_structures";
    armor=5000;

    model = QPATHTOF(platforms\ls_prop_platform_5x5.p3d);
    hiddenselections[] = {
        "body1"
    };
    hiddenselectionstextures[] = {
        QPATHTOF(platforms\data\5x5_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_platform_5x5.jpg);
};

class ls_platform_10x10: ls_platform_5x5 {
    author = AUTHOR;
    displayName = "Platform (10x10)";
    model = QPATHTOF(platforms\ls_prop_platform_10x10.p3d);
    hiddenselectionstextures[] = {
        QPATHTOF(platforms\data\10x10_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_platform_10x10.jpg);
};

class ls_platform_10x25: ls_platform_5x5 {
    author = AUTHOR;
    displayName = "Platform (10x25)";
    model = QPATHTOF(platforms\ls_prop_platform_10x25.p3d);
    hiddenselectionstextures[] = {
        QPATHTOF(platforms\data\10x25_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_platform_10x25.jpg);
};

class ls_platform_25x25: ls_platform_5x5 {
    author = AUTHOR;
    displayName="Platform (25x25)";
    model = QPATHTOF(platforms\ls_prop_platform_25x25.p3d);
    hiddenselectionstextures[] = {
        QPATHTOF(platforms\data\25x25_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_platform_25x25.jpg);
};

class ls_platform_50x25: ls_platform_5x5 {
    author = AUTHOR;
    displayName = "Platform (50x25)";
    model = QPATHTOF(platforms\ls_prop_platform_50x25.p3d);
    hiddenselectionstextures[] = {
        QPATHTOF(platforms\data\50x25_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_platform_50x25.jpg);
};

class ls_platform_50x50: ls_platform_5x5 {
    author = AUTHOR;
    displayName = "Platform (50x50)";
    model = QPATHTOF(platforms\ls_prop_platform_50x50.p3d);
    hiddenselectionstextures[] = {
        QPATHTOF(platforms\data\50x50_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_platform_50x50.jpg);
};

class ls_platform_70x70: ls_platform_5x5 {
    author = AUTHOR;
    displayName = "Platform (70x70)";
    model = QPATHTOF(platforms\ls_prop_platform_70x70.p3d);
    hiddenselectionstextures[] = {
        QPATHTOF(platforms\data\70x70_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_platform_70x70.jpg);
};

DEPRECATED(ls_5x5,ls_platform_5x5);
DEPRECATED(ls_10x10,ls_platform_10x10);
DEPRECATED(ls_10x25,ls_platform_10x25);
DEPRECATED(ls_25x25,ls_platform_25x25);
DEPRECATED(ls_50x25,ls_platform_50x25);
DEPRECATED(ls_50x50,ls_platform_50x50);
DEPRECATED(ls_70x70,ls_platform_70x70);
