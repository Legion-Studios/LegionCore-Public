class ls_weapon_verpinePowerLance: ls_weapon_melee_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Verpine Power Lance";
    baseWeapon = "ls_weapon_verpinePowerLance";

    model = QPATHTOF(verpinePowerLance\ls_weapon_verpinePowerLance.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(verpinePowerLance\data\camo1_co.paa)
    };

    GVAR(isLance) = 1;
    GVAR(static) = "ls_weapon_verpinePowerLance_static";

    IMS_Melee_Param_Damage = 0.9;
    IMS_WeaponType = "Poleax";
};
