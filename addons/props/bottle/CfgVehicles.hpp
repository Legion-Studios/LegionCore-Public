class ls_firstShot_bottle: Items_base_F {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "First Shot Bottle";

    editorCategory = "ls_edcat_statics";
    editorSubcategory = "ls_edsubcat_itemsSmall";

    model = QPATHTOF(bottle\ls_prop_bottle.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(bottle\data\camo1_firstshot_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_firstShot_bottle.jpg);

    armor = 0.1;

    class SimpleObject {
        eden = 1;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0;
        verticalOffsetWorld = 0;
        init = "";
    };

    class EventHandlers: EventHandlers {
        class ls {
            hitPart = QUOTE(((_this select 0) select 0) call FUNC(bottle_hitPart));
        };
    };
};
DEPRECATED(ls_first_shot,ls_firstShot_bottle);
