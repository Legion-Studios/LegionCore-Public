class ls_prop_turbotank: ls_House_F {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Turbo Tank";

    editorSubcategory = "ls_edsubcat_vehicles";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_turbotank.jpg);

    model = QPATHTOF(turbo_tank\ls_prop_turbotank.p3d);
    hiddenSelections[] = {
        "armor",
        "axel",
        "body",
        "catwalk",
        "interior1",
        "interior2",
        "interior3",
        "wheel"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(turbo_tank\data\armor_CO.paa),
        QPATHTOF(turbo_tank\data\axel_CO.paa),
        QPATHTOF(turbo_tank\data\body_CO.paa),
        QPATHTOF(turbo_tank\data\catwalk_CO.paa),
        QPATHTOF(turbo_tank\data\interior_1_CO.paa),
        QPATHTOF(turbo_tank\data\interior_2_CO.paa),
        QPATHTOF(turbo_tank\data\interior_3_CO.paa),
        QPATHTOF(turbo_tank\data\wheel_CO.paa),
    };
};
