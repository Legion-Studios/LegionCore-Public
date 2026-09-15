class ls_sweeperDroid_green: Items_base_F {
    scope = 2;
    scopecurator = 2;
    author = AUTHOR;
    displayName = "Sweeper Droid (Green)";

    editorcategory = "ls_edcat_statics";
    editorsubcategory = "ls_edsubcat_droids";
    simulation = "thingx";

    model = QPATHTOF(sweeper\ls_prop_sweeperDroid.p3d);
    hiddenselections[] = {"body", "arms"};
    hiddenselectionstextures[] = {
        QPATHTOF(sweeper\data\body_co.paa),
        QPATHTOF(sweeper\data\arms_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_sweeperDroid_green.jpg);
};
class ls_sweeperDroid_red: ls_sweeperDroid_green {
    author = AUTHOR;
    displayName = "Sweeper Droid (Red)";
    hiddenselectionstextures[] = {
        QPATHTOF(sweeper\data\body_red_co.paa),
        QPATHTOF(sweeper\data\arms_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_sweeperDroid_red.jpg);
};
class ls_sweeperDroid_orange: ls_sweeperDroid_green {
    author = AUTHOR;
    displayName = "Sweeper Droid (Orange)";
    hiddenselectionstextures[] = {
        QPATHTOF(sweeper\data\body_orange_co.paa),
        QPATHTOF(sweeper\data\arms_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_sweeperDroid_orange.jpg);
};

DEPRECATED(ls_sweeper,ls_sweeperDroid_green);
DEPRECATED(ls_sweeper_2,ls_sweeperDroid_red);
DEPRECATED(ls_sweeper_3,ls_sweeperDroid_orange);
