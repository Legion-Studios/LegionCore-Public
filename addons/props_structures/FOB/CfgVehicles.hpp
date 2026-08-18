class ls_prop_fob_wall: ls_house_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "FOB Wall";

    editorSubcategory = "ls_edsubcat_fob";

    model = QPATHTOF(FOB\ls_prop_fob_wall.p3d);
    hiddenselections[] = { "camo1" };
    hiddenselectionstextures[] = {
        QPATHTOF(FOB\data\wall_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_fob_wall.jpg);

    armor = 200;
    armorStructural = 300;
    icon = "iconObject_1x2";
};

class ls_prop_fob_gate: ls_house_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "FOB Gate";

    editorSubcategory = "ls_edsubcat_fob";

    model = QPATHTOF(FOB\ls_prop_fob_gate.p3d);
    hiddenselections[] = {"camo1"};
    hiddenselectionstextures[] = {
        QPATHTOF(FOB\data\gate_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_fob_gate.jpg);

    armor = 300;
    armorStructural = 300;
    icon = "iconObject_1x2";

    numberOfDoors = 1;
    class AnimationSources {
        class Door_1_sound_source {
            source = "user";
            initPhase = 0;
            animPeriod = 2;
            sound = "ls_door1";
            soundPosition = "door_1_trigger";
        };
        class Door_1_locked_source: Door_1_sound_source {
            animPeriod = 1;
            sound = "ls_door1_locked";
        };
    };
    class UserActions {
        DOOR_ACTIONS(1);
    };
};

DEPRECATED(land_FOB_gate,ls_prop_fob_gate);
DEPRECATED(Land_FOB_build_New_Wall,ls_prop_fob_wall);
