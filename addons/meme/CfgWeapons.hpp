class CfgWeapons {
    class CBA_MiscItem;
    class ls_miscItem_base: CBA_MiscItem {
        class ItemInfo;
    };
    class GVAR(graciousGovernmentMix): ls_miscItem_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Palpatine's 'Gracious Government Mix'";
        descriptionShort = "A box of chocolates issued from Palpatine himself...";
        model = QPATHTOF(graciousGovernmentMix\GVAR(graciousGovernmentMix).p3d);
        picture = QPATHTOF(data\ui\graciousGovernmentMix_ui_ca.paa);

        class ItemInfo: ItemInfo {
            mass = 0.5;
        };
    };

    class GVAR(favoritesOfForce): ls_miscItem_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Favorites of the Force";
        descriptionShort = "Sold by secretive Rebel Alliance Confectioners";
        model = QPATHTOF(favoritesOfForce\GVAR(favoritesOfForce).p3d);
        picture = QPATHTOF(data\ui\favoritesOfForce_ui_ca.paa);

        class ItemInfo: ItemInfo {
            mass = 0.5;
        };
    };
};
