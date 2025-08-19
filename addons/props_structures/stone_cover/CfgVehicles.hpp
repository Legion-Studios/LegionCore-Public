class ls_prop_stone_cover: ls_House_F {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Stone Cover";

    model = QPATHTOF(stone_cover\ls_prop_stonecover.p3d);
    editorsubcategory = "ls_edsubcat_structures";
    hiddenselections[] = {
        "camo1"
    };
    hiddenselectionstextures[] = {
        QPATHTOF(stone_cover\data\camo1_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_stone_cover.jpg);
};

DEPRECATED(ls_stone_cover,ls_prop_stone_cover);
