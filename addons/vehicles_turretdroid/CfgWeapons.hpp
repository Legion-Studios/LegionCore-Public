class CfgWeapons {
    class CBA_MiscItem;
    class ls_miscItem_base: CBA_MiscItem {
        class ItemInfo;
    };
    class ls_vehicle_turretDroid_packed: ls_miscItem_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(displayName);
        descriptionShort = CSTRING(packed_description);
        picture = QPATHTOF(data\ui\turretDroid_ui_ca.paa);

        EGVAR(common,deployObject) = "ls_vehicle_turretDroid_gar";
        EGVAR(common,deployStatement) = QUOTE(call FUNC(deployTurretDroid));
        EGVAR(common,deployTime) = 3;
        ls_equipment = 1;

        class ItemInfo: ItemInfo {
            mass = 50;
        };
    };
};
