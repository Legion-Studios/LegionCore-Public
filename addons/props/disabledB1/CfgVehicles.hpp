class ls_disabledB1: House_F {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Disabled B1";

    model = QPATHTOF(disabledB1\ls_prop_disabledB1.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOEF(characters_droid,uniforms\b1\data\camo1_co.paa),
        QPATHTOEF(characters_droid,uniforms\b1\data\camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_disabledB1.jpg);

    editorcategory = "ls_edcat_statics";
    editorsubcategory = "ls_edsubcat_droids";
    vehicleClass = "Structures";
    destrType = "DestructTree";
};

class ls_disabledB1_magicDroid: ls_disabledB1 {
    author = AUTHOR;
    displayName = "Magic 8 Droid";

    class UserActions {
        class getFortune {
            displayname = "Magic 8 Ball";
            radius = 5;
            position = "pilotView";
            onlyforplayer = 0;
            priority = 101;
            condition = "true";
            statement = QUOTE([] call EFUNC(meme,magicEightBall));
        };
    };
};

DEPRECATED(ls_disabled_b1,ls_disabledB1);
DEPRECATED(ls_props_magic8Droid,ls_disabledB1_magicDroid);
