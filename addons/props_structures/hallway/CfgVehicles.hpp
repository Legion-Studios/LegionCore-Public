class ls_prop_hallway_2way: ls_House_F {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Hallway 2-Way";

    editorSubcategory = "ls_edsubcat_hallways";
    destrType = "DestructNo";

    model = QPATHTOF(hallway\ls_prop_hallway_2way.p3d);
    hiddenSelections[] = {
        "tile",
        "lower",
        "roof",
        "segment",
        "wall",
        "wall_2",
        "light"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\tile_co.paa),
        QPATHTOF(hallway\data\lower_co.paa),
        QPATHTOF(hallway\data\roof_co.paa),
        QPATHTOF(hallway\data\segment_co.paa),
        QPATHTOF(hallway\data\wall_co.paa),
        QPATHTOF(hallway\data\wall_2_co.paa),
        QPATHTOF(hallway\data\light_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_2way.jpg);
};

class ls_prop_hallway_2way_red: ls_prop_hallway_2way {
    author = AUTHOR;
    displayName = "Hallway 2-Way (Red)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\tile_co.paa),
        QPATHTOF(hallway\data\lower_co.paa),
        QPATHTOF(hallway\data\roof_co.paa),
        QPATHTOF(hallway\data\segment_co.paa),
        QPATHTOF(hallway\data\wall_co.paa),
        QPATHTOF(hallway\data\wall_2_co.paa),
        QPATHTOF(hallway\data\light_2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_2way_red.jpg);
};

class ls_prop_hallway_3way: ls_prop_hallway_2way {
    author = AUTHOR;
    displayName = "Hallway 3-Way";

    model = QPATHTOF(hallway\ls_prop_hallway_3way.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\tile_co.paa),
        QPATHTOF(hallway\data\lower_co.paa),
        QPATHTOF(hallway\data\roof_co.paa),
        QPATHTOF(hallway\data\segment_co.paa),
        QPATHTOF(hallway\data\wall_co.paa),
        QPATHTOF(hallway\data\wall_2_co.paa),
        QPATHTOF(hallway\data\light_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_3way.jpg);
};

class ls_prop_hallway_3way_red: ls_prop_hallway_3way {
    author = AUTHOR;
    displayName = "Hallway 3-Way (Red)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\tile_co.paa),
        QPATHTOF(hallway\data\lower_co.paa),
        QPATHTOF(hallway\data\roof_co.paa),
        QPATHTOF(hallway\data\segment_co.paa),
        QPATHTOF(hallway\data\wall_co.paa),
        QPATHTOF(hallway\data\wall_2_co.paa),
        QPATHTOF(hallway\data\light_2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_3way_red.jpg);
};

class ls_prop_hallway_4way: ls_prop_hallway_2way {
    author = AUTHOR;
    displayName = "Hallway 4-Way";
    model = QPATHTOF(hallway\ls_prop_hallway_4way.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\tile_co.paa),
        QPATHTOF(hallway\data\lower_co.paa),
        QPATHTOF(hallway\data\roof_co.paa),
        QPATHTOF(hallway\data\segment_co.paa),
        QPATHTOF(hallway\data\wall_co.paa),
        QPATHTOF(hallway\data\wall_2_co.paa),
        QPATHTOF(hallway\data\light_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_4way.jpg);
};

class ls_prop_hallway_4way_red: ls_prop_hallway_4way {
    author = AUTHOR;
    displayName = "Hallway 4-Way (Red)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\tile_co.paa),
        QPATHTOF(hallway\data\lower_co.paa),
        QPATHTOF(hallway\data\roof_co.paa),
        QPATHTOF(hallway\data\segment_co.paa),
        QPATHTOF(hallway\data\wall_co.paa),
        QPATHTOF(hallway\data\wall_2_co.paa),
        QPATHTOF(hallway\data\light_2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_4way_red.jpg);
};

class ls_prop_hallway_corner: ls_prop_hallway_2way {
    author = AUTHOR;
    displayName = "Corner Hallway";

    model = QPATHTOF(hallway\ls_prop_hallway_corner.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\tile_co.paa),
        QPATHTOF(hallway\data\lower_co.paa),
        QPATHTOF(hallway\data\roof_co.paa),
        QPATHTOF(hallway\data\segment_co.paa),
        QPATHTOF(hallway\data\wall_co.paa),
        QPATHTOF(hallway\data\wall_2_co.paa),
        QPATHTOF(hallway\data\light_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_corner.jpg);
};

class ls_prop_hallway_corner_red: ls_prop_hallway_corner {
    author = AUTHOR;
    displayName = "Corner Hallway (Red)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\tile_co.paa),
        QPATHTOF(hallway\data\lower_co.paa),
        QPATHTOF(hallway\data\roof_co.paa),
        QPATHTOF(hallway\data\segment_co.paa),
        QPATHTOF(hallway\data\wall_co.paa),
        QPATHTOF(hallway\data\wall_2_co.paa),
        QPATHTOF(hallway\data\light_2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_corner_red.jpg);
};

class ls_prop_hallway_door: ls_prop_hallway_2way {
    author = AUTHOR;
    displayName = "Hallway Door";

    model = QPATHTOF(hallway\ls_prop_hallway_door.p3d);
    hiddenselections[] = {
        "door1",
        "door2",
        "frame"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\doors_co.paa),
        QPATHTOF(hallway\data\doors_co.paa),
        QPATHTOF(hallway\data\frame_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_door.jpg);

    class AnimationSources {
        class door_open {
            source = "user";
            animPeriod = 5;
            initPhase = 0;
        };
    };

    animationList[] = {"door_open", 0};

    class UserActions {
        class door_open {
            author = AUTHOR;
            displayName = "Open Doors";
            position = "door_pos";
            radius = 5;
            onlyForPlayer = 0;
            priority = 101;
            condition = "this animationSourcePhase 'door_open' == 0";
            statement = "this animateSource ['door_open', 1]; [this, 'ls_door1_open'] call ls_common_fnc_say3D";
        };
        class door_close: door_open {
            author = AUTHOR;
            displayName = "Close Doors";
            condition = "this animationSourcePhase 'door_open' == 1";
            statement = "this animateSource ['door_open', 0]; [this, 'ls_door1_close'] call ls_common_fnc_say3D";
        };
    };
};

class ls_prop_hallway_door_locked: ls_prop_hallway_door {
    author = AUTHOR;
    displayName = "Hallway Door (Locked)";
    class UserActions {};
};

class ls_prop_hallway_floor: ls_prop_hallway_2way {
    author = AUTHOR;
    displayName = "Hallway Floor";
    model = QPATHTOF(hallway\ls_prop_hallway_floor.p3d);

    hiddenSelections[] = {
        "tile",
        "lower"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\tile_co.paa),
        QPATHTOF(hallway\data\lower_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_floor.jpg);
};

class ls_prop_hallway_ramp: ls_prop_hallway_floor {
    author = AUTHOR;
    displayName = "Hallway Ramp";
    model = QPATHTOF(hallway\ls_prop_hallway_ramp.p3d);

    hiddenSelections[] = {
        "ramp",
        "segment",
        "light"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\ramp_co.paa),
        QPATHTOF(hallway\data\segment_co.paa),
        QPATHTOF(hallway\data\light_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_ramp.jpg);
};

class ls_prop_hallway_ramp_red: ls_prop_hallway_ramp {
    author = AUTHOR;
    displayName = "Hallway Ramp (Red)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\ramp_co.paa),
        QPATHTOF(hallway\data\segment_co.paa),
        QPATHTOF(hallway\data\light_2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_ramp_red.jpg);
};

class ls_prop_hallway_roof: ls_prop_hallway_floor {
    author = AUTHOR;
    displayName = "Hallway Roof Light";
    model = QPATHTOF(hallway\ls_prop_hallway_rooflight.p3d);

    hiddenSelections[] = {
        "roof",
        "light"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\roof_co.paa),
        QPATHTOF(hallway\data\light_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_roof.jpg);
};

class ls_prop_hallway_roof_red: ls_prop_hallway_roof {
    author = AUTHOR;
    displayName = "Hallway Roof Light (Red)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\roof_co.paa),
        QPATHTOF(hallway\data\light_2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_roof_red.jpg);
};

class ls_prop_hallway_segment: ls_prop_hallway_floor {
    author = AUTHOR;
    displayName = "Hallway Segment";
    model = QPATHTOF(hallway\ls_prop_hallway_segment.p3d);

    hiddenselections[]= {
        "segment",
        "light"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\segment_co.paa),
        QPATHTOF(hallway\data\light_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_segment.jpg);
};

class ls_prop_hallway_segment_red: ls_prop_hallway_segment {
    author = AUTHOR;
    displayName = "Hallway Segment (Red)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\segment_co.paa),
        QPATHTOF(hallway\data\light_2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_segment_red.jpg);
};

class ls_prop_hallway_wall_light: ls_prop_hallway_floor {
    author = AUTHOR;
    displayName = "Hallway Wall Light";
    model = QPATHTOF(hallway\ls_prop_hallway_wall_light.p3d);

    hiddenselections[]= {
        "wall",
        "light"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\wall_co.paa),
        QPATHTOF(hallway\data\light_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_wall_light.jpg);
};

class ls_prop_hallway_wall_light_red: ls_prop_hallway_wall_light {
    author = AUTHOR;
    displayName = "Hallway Wall Light (Red)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\wall_co.paa),
        QPATHTOF(hallway\data\light_2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_wall_light_red.jpg);
};

class ls_prop_hallway_wall: ls_prop_hallway_floor {
    author = AUTHOR;
    displayName = "Hallway Wall";
    model = QPATHTOF(hallway\ls_prop_hallway_wall.p3d);

    hiddenSelections[] = {
        "wall_2",
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(hallway\data\wall_2_co.paa),
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_hallway_wall.jpg);
};

DEPRECATED(ls_2way_rep,ls_prop_hallway_2way);
DEPRECATED(ls_2way_rep_r,ls_prop_hallway_2way_red);
DEPRECATED(ls_3way_rep,ls_prop_hallway_3way);
DEPRECATED(ls_3way_rep_r,ls_prop_hallway_3way_red);
DEPRECATED(ls_4way_rep,ls_prop_hallway_4way);
DEPRECATED(ls_4way_rep_r,ls_prop_hallway_4way_red);
DEPRECATED(ls_corner_rep,ls_prop_hallway_corner);
DEPRECATED(ls_corner_rep_r,ls_prop_hallway_corner_red);
DEPRECATED(ls_door,ls_prop_hallway_door);
DEPRECATED(ls_door_locked,ls_prop_hallway_door_locked);
DEPRECATED(ls_floor,ls_prop_hallway_floor);
DEPRECATED(ls_ramp_rep,ls_prop_hallway_ramp);
DEPRECATED(ls_ramp_rep_r,ls_prop_hallway_ramp_red);
DEPRECATED(ls_roof,ls_prop_hallway_roof);
DEPRECATED(ls_roof_r,ls_prop_hallway_roof_red);
DEPRECATED(ls_segment,ls_prop_hallway_segment);
DEPRECATED(ls_segment_r,ls_prop_hallway_segment_red);
DEPRECATED(ls_wall,ls_prop_hallway_wall_light);
DEPRECATED(ls_wall_light,ls_prop_hallway_wall_light_red);
DEPRECATED(ls_wall_light_r,ls_prop_hallway_wall);
