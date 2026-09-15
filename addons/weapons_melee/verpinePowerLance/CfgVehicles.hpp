class ls_weapon_verpinePowerLance_static: Items_base_F {
    scope = 1;
    author = AUTHOR;
    displayName = CSTRING(verpinePowerLance_displayName);

    model = QPATHTOF(verpinePowerLance\ls_weapon_verpinePowerLance_static.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(verpinePowerLance\data\camo1_co.paa)
    };
};
