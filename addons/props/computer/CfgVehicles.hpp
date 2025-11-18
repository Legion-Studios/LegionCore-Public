class ls_smallComputer: Items_base_F {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Small Computer";

    editorcategory = "ls_edcat_statics";
    editorsubcategory = "ls_edsubcat_electronics";

    model = QPATHTOF(computer\ls_prop_smallComputer.p3d);
    hiddenselections[] = {
        "camo1", "camo2",
        "terminal1", "terminal2",
        "terminal3", "terminal4"
    };
    hiddenselectionstextures[] =  {
        QPATHTOF(computer\data\small\body_co.paa),
        QPATHTOF(computer\data\small\controls_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_smallComputer.jpg);

    vehicleClass = "Structures";
    simulation = "thingx";
};

DEPRECATED(ls_small_computer,ls_smallComputer);
