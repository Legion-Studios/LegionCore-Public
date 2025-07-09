class ls_prop_fob_wall: ls_House_F {
    scope = 2;
    scopeCurator = 2;
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

class ls_prop_fob_gate: ls_House_F {
    scope = 2;
    scopeCurator = 2;
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

    class UserActions {
        class fob_gate_open {
            displayname = "Open Door";
            position = "door_action";
            priority = "107";
            radius = 5;
            onlyforplayer = 0;
            condition = "this animationsourcephase ""gate_door"" == 0";
            statement = "this animateSource ['gate_door', 1]; [this, 'ls_door1_open'] call ls_common_fnc_say3D";
        };
        class fob_gate_close: fob_gate_open {
            displayname = "Close Door";
            priority = "108";
            condition = "this animationsourcephase ""gate_door"" == 1";
            statement = "this animateSource ['gate_door', 0]; [this, 'ls_door1_close'] call ls_common_fnc_say3D";
        };
    };
    class AnimationSources {
        class gate_door {
            source = "user";
            animPeriod = 2;
            initphase = 0;
        };
    };
};

DEPRECATED(land_FOB_gate,ls_prop_fob_gate);
DEPRECATED(Land_FOB_build_New_Wall,ls_prop_fob_wall);
