class CfgWeapons {
    class CBA_MiscItem;
    class ls_miscItem_base: CBA_MiscItem {
        class ItemInfo;
    };
    class GVAR(bountyPuck): ls_miscItem_base {
        scope = 2;
        author = AUTHOR;

        displayName = "Holoprojector Map";
        descriptionShort = "A portable holographic mapping device";
        model = QPATHTOF(bountyPuck\GVAR(bountyPuck.p3d));
        picture = QPATHTOF(data\ui\bountyPuck_ui_ca.paa);

        EGVAR(common,deployObject) = QGVAR(bountyPuck_static);
        EGVAR(common,pickupStatement) = QUOTE(call FUNC(bountyPuck_pickup));

        class ItemInfo: ItemInfo {
            mass = 1;
        };
    };
};
