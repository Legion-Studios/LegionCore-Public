class CfgVehicles {
    class ls_item_groundHolder_base;
    ITEM_GH(CSTRING(favoritesOfTheForce_displayName),GVAR(favoritesOfForce),1);
    ITEM_GH(CSTRING(graciousGovernmentMix_displayName),GVAR(graciousGovernmentMix),1);

    class NonStrategic;
    class GVAR(goose_static): NonStrategic {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(goose_displayName);

        editorCategory = "ls_edcat_statics";
        editorSubcategory = "ls_edsubcat_items";

        model = QPATHTOF(goose\GVAR(goose_static).p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\GVAR(goose).jpg);

        destrType = "DestructNo";

        XEH_ENABLED;

        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ace_interaction_MainAction";
                distance = 5;
                condition = "true";
                statement = "";
                icon = "\A3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
                selection = "";
            };

            class ls_honk {
                displayName = CSTRING(goose_descriptionShort);
                distance = 5;
                condition = "true";
                statement = QUOTE(call FUNC(honk));
                icon = "";
                selection = "mouth";
            };
        };
    };

    DEPRECATED(ls_meme_static_favoritesOfForce,GVAR(favoritesOfForce_GH));
    DEPRECATED(ls_meme_static_graciousGovernmentMix,GVAR(graciousGovernmentMix_GH));
};
