class ls_mse6: Items_base_F {
    scope = 2;
    scopecurator = 2;
    author = AUTHOR;
    displayName = "MSE-6";

    editorcategory = "ls_edcat_statics";
    editorsubcategory = "ls_edsubcat_droids";
    simulation = "thingx";

    model = QPATHTOF(mse6\ls_prop_mse6.p3d);
    hiddenselections[] = {"camo1"};
    hiddenselectionstextures[] = {QPATHTOF(mse6\data\camo1_co.paa)};
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mse6.jpg);
};
DEPRECATED(ls_mse_6,ls_mse6);

class ls_mse7: ls_mse6 {
    author = AUTHOR;
    displayName = "MSE-7";
    model = QPATHTOF(mse6\ls_prop_mse7.p3d);
    hiddenselectionstextures[] = {QPATHTOF(mse6\data\camo1_co.paa)};
};
DEPRECATED(ls_mse_7,ls_mse7);
