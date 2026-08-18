class CfgVehicles {
    class ls_item_groundHolder_base;
    ITEM_GH(CSTRING(graciousGovernmentMix_displayName),GVAR(graciousGovernmentMix),1);
    ITEM_GH(CSTRING(favoritesOfForce_displayName),GVAR(favoritesOfForce),1);

    class NonStrategic;
    class GVAR(goose_static): NonStrategic {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(goose_displayName);

        editorCategory = "ls_edcat_statics";
        editorSubcategory = "ls_edsubcat_items";

        model = QPATHTOF(goose\GVAR(goose_static).p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\GVAR(goose).jpg);

        armor = 10000000;
        epeImpulseDamageCoef = 0;

        XEH_ENABLED;
    };

    DEPRECATED(ls_meme_static_favoritesOfForce,GVAR(favoritesOfForce_GH));
    DEPRECATED(ls_meme_static_graciousGovernmentMix,GVAR(graciousGovernmentMix_GH));
};
