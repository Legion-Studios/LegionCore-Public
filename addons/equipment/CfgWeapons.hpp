class CfgWeapons {
    class CBA_MiscItem;
    class ls_miscItem_base: CBA_MiscItem {
        class ItemInfo;
    };
    class GVAR(squadShield_packed): ls_miscItem_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(squadShield_displayName);
        descriptionShort = CSTRING(squadShield_packed_descriptionShort);

        model = QPATHTOF(squadShield\ls_equipment_squadShield_packed.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(squadShield\data\camo1_co.paa)};
        picture = QPATHTOF(data\ui\squadShield_ui_ca.paa);

        EGVAR(common,deployObject) = QGVAR(squadShield);
        EGVAR(common,deployTime) = 3;
        ADDON = 1;

        class ItemInfo: ItemInfo {
            mass = 60;
        };
    };
    class GVAR(squadShield_broken_packed): GVAR(squadShield_packed) {
        scope = 1;
        author = AUTHOR;
        displayName = CSTRING(squadShield_broken_displayName);
        descriptionShort = CSTRING(squadShield_broken_packed_descriptionShort);

        EGVAR(common,deployStatement) = "params ['', '_shield']; _shield setHitPointDamage ['HitShield', 1]";
        ace_arsenal_uniqueBase = QGVAR(squadShield_packed);
    };

    class GVAR(repairKit): ls_miscItem_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(repairKit_displayName);
        descriptionShort = CSTRING(repairKit_descriptionShort);

        ADDON = 1;
        ACE_isTool = 1;

        class ItemInfo: ItemInfo {
            mass = 20;
        };
    };
};
