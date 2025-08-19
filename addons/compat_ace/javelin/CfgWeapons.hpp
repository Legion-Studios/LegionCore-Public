class CfgWeapons {
    class ls_launcher_base;
    class ls_weapon_plx1_base: ls_launcher_base {
        lockingTargetSound[] = {"", 0, 1};
        lockedTargetSound[] = {"", 0, 1};

        weaponInfoType = "ACE_RscOptics_javelin";
        modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";
    };

    // ace_javelin must be enabled per class, the function won't check inherited properties
    class ls_weapon_plx1_at: ls_weapon_plx1_base {
        canLock = 0;
        ace_javelin_enabled = 1;
    };

    class ls_weapon_plx1_aa: ls_weapon_plx1_base {
        canLock = 0;
        ace_javelin_enabled = 1;
    };

    class ls_weapon_e60r_base: ls_launcher_base {
        lockingTargetSound[] = {"", 0, 1};
        lockedTargetSound[] = {"", 0, 1};

        weaponInfoType = "ACE_RscOptics_javelin";
        modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";
    };

    class ls_weapon_e60r_at: ls_weapon_e60r_base {
        canLock = 0;
        ace_javelin_enabled = 1;
    };

    class ls_weapon_e60r_aa: ls_weapon_e60r_base {
        canLock = 0;
        ace_javelin_enabled = 1;
    };
};
