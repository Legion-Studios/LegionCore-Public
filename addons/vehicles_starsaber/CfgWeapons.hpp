class CfgMagazines {
    class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
    class ls_vehicles_mag_starsaber: 1000Rnd_Gatling_30mm_Plane_CAS_01_F {
        displayNameShort = "";
        tracersevery = 1;
        count = 600;
    };
};

class CfgWeapons {
    class CannonCore;
    class weapon_Fighter_Gun20mm_AA: CannonCore {
        class manual;
    };
    class ls_weapon_starsaber_cannon: weapon_Fighter_Gun20mm_AA {
        displayName = "Twin Blaster Cannons";
        displaynameshort = "Twin Blaster Cannons";
        magazines[] = {"ls_vehicles_mag_starsaber"};
        class Manual: Manual {
            reloadTime = 60/1100;
            class StandardSound {
                begin1[] = {"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_1", 2, 1, 3000};
                begin2[] = {"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_2", 2, 1, 3000};
                begin3[] = {"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_3", 2, 1, 3000};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
            };
        };
        magazineReloadTime=3;
        gunBeg[] = {
            "laserSmall_r_dir",
            "laserSmall_l_dir",
            "laserSmaller_r_dir",
            "laserSmaller_l_dir"
        };
        gunEnd[] = {
            "laserSmall_r_pos",
            "laserSmall_l_pos",
            "laserSmaller_r_pos",
            "laserSmaller_l_pos"
        };
        class GunParticles {
            class Effect1 {
                directionName = "laserSmall_r_dir";
                effectName = "MachineGun1";
                positionName = "laserSmall_r_pos";
            };
            class Effect2: Effect1 {
                directionName = "laserSmall_l_dir";
                effectName = "MachineGun1";
                positionName = "laserSmall_l_pos";
            };
            class Effect3: Effect1 {
                directionName = "laserSmaller_r_dir";
                positionName = "laserSmaller_r_pos";
            };
            class Effect4: Effect1 {
                directionName = "laserSmaller_l_dir";
                positionName = "laserSmaller_l_pos";
            };
        };
    };
};
