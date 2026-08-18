class ls_static_vulture: House_F {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Vulture Droid";

    editorcategory = "ls_edcat_statics";
    editorsubcategory = "ls_edsubcat_vehicles";

    model = QPATHTOF(vulture\ls_prop_vulture.p3d);
    hiddenSelections[] = {"body", "legs", "eyes"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vulture\data\body_co.paa),
        QPATHTOF(vulture\data\legs_co.paa),
        QPATHTOF(vulture\data\eyes_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_static_vulture.jpg);
};
