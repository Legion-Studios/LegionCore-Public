class ls_radio: Items_base_F {
    scope = 2;
    scopecurator = 2;
    author = AUTHOR;
    displayName = "Radio";

    editorcategory = "ls_edcat_statics";
    editorsubcategory = "ls_edsubcat_electronics";
    simulation = "thing";

    model = QPATHTOF(radio\ls_prop_radio.p3d);
    hiddenselections[] = {"body", "lights"};
    hiddenselectionstextures[] = {
        QPATHTOF(radio\data\body_co.paa),
        QPATHTOF(radio\data\lights_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_radio.jpg);
};
