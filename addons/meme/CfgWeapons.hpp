class CfgWeapons {
    class CBA_MiscItem;
    class ls_miscItem_base: CBA_MiscItem {
        class ItemInfo;
    };
    class GVAR(graciousGovernmentMix): ls_miscItem_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(graciousGovernmentMix_displayName);
        descriptionShort = CSTRING(graciousGovernmentMix_descriptionShort);
        model = QPATHTOF(graciousGovernmentMix\GVAR(graciousGovernmentMix).p3d);
        picture = QPATHTOF(data\ui\graciousGovernmentMix_ui_ca.paa);

        class ItemInfo: ItemInfo {
            mass = 0.5;
        };
    };

    class GVAR(favoritesOfForce): ls_miscItem_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(favoritesOfTheForce_displayName);
        descriptionShort = CSTRING(favoritesOfTheForce_descriptionShort);
        model = QPATHTOF(favoritesOfForce\GVAR(favoritesOfForce).p3d);
        picture = QPATHTOF(data\ui\favoritesOfForce_ui_ca.paa);

        class ItemInfo: ItemInfo {
            mass = 0.5;
        };
    };

    class GVAR(goose): ls_miscItem_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(goose_displayName);
        descriptionShort = CSTRING(goose_descriptionShort);

        model = QPATHTOF(goose\GVAR(goose_static).p3d);
        picture = QPATHTOF(data\ui\goose_ui_ca.paa);

        EGVAR(common,deployObject) = QGVAR(goose_static);
        EGVAR(common,deployTime) = 0;
        ls_equipment = 1;

        class ItemInfo: ItemInfo {
            mass = 0.5;
        };
    };
};
