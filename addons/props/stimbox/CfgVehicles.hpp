class ls_stimbox: Items_base_F {
    scope = 2;
    scopecurator = 2;
    author = AUTHOR;
    displayName = "Stimbox";

    editorcategory = "ls_edcat_statics";
    editorsubcategory = "ls_edsubcat_items";
    simulation = "thingx";

    model = QPATHTOF(stimbox\ls_prop_stimbox.p3d);
    hiddenselections[] = {
        "body1",
        "body2",
        "screen",
    };
    hiddenselectionstextures[] = {
        QPATHTOF(stimbox\data\body1_co.paa),
        QPATHTOF(stimbox\data\body2_co.paa),
        QPATHTOF(stimbox\data\screen_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_stimbox.jpg);
};
