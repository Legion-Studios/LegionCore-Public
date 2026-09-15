class ls_weapon_electrostaff: ls_weapon_melee_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(electrostaff_displayName);
    descriptionShort = CSTRING(electrostaff_descriptionShort);
    baseWeapon = "ls_weapon_electrostaff";

    model = QPATHTOF(electrostaff\ls_weapon_electrostaff.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(electrostaff\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\electrostaff_ui_ca.paa);

    IMS_Melee_Param_Damage = 0.3;
    IMS_WeaponType = "Poleax";
};

class ls_weapon_electrostaff_black: ls_weapon_electrostaff {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(electrostaff_black_displayName);
    baseWeapon = "ls_weapon_electrostaff_black";

    hiddenSelectionsTextures[] = {
        QPATHTOF(electrostaff\data\camo1_black_co.paa)
    };
    picture = QPATHTOF(data\ui\electrostaff_black_ui_ca.paa);
};
