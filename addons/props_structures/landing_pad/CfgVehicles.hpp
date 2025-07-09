class ls_landingpad_wide: ls_House_F {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Landing Pad (Wide)";

    icon = "iconObject";
    editorSubcategory = "ls_edsubcat_structures";
    armor = 5000;

    model = QPATHTOF(landing_pad\ls_prop_wide_landing_pad.p3d);
    hiddenSelections[] = {"body1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(landing_pad\data\pad_wide_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_landingpad_wide.jpg);
};
