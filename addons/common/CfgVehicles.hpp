class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ls_deployObject {
                displayName = "Place Item";
                icon = "";

                condition = "true";
                statement = "";
                insertChildren = QUOTE(call FUNC(deployObject_insertChildren));
            };
        };
    };

    class Headgear_Base_F;
    class ls_helmet_groundHolder_base: Headgear_Base_F {
        scope = 0;
        author = AUTHOR;

        editorCategory = "ls_edcat_groundholders";
        editorSubcategory = "EdSubcat_Helmets";
    };

    class Item_Base_F;
    class ls_item_groundHolder_base: Item_Base_F {
        scope = 0;
        author = AUTHOR;

        editorCategory = "ls_edcat_groundholders";
        editorSubcategory = "ls_edsubcat_items";
    };

    class Vest_Base_F;
    class ls_vest_groundHolder_base: Vest_Base_F {
        scope = 0;
        author = AUTHOR;
        editorCategory = "ls_edcat_groundholders";
    };

    class Weapon_Base_F;
    class ls_weapon_groundHolder_base: Weapon_Base_F {
        scope = 0;
        author = AUTHOR;

        editorCategory = "ls_edcat_groundholders";
        editorSubcategory = "ls_edsubcat_weapons";
    };
};
