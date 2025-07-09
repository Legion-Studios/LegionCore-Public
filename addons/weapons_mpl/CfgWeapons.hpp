class Mode_SemiAuto;

class CfgWeapons {
    class UGL_F;
    class ls_weapon_mpl57_UGL: UGL_F {
        scope = 1;
        displayName = "MPL-57 UGL";
        descriptionShort = "MPL-57 UGL";
        magazines[] = {"ls_magazine_2Rnd_40mw_G77_HEAB"};
        magazineWell[] = {"ls_magwell_mpl57", "ls_magwell_ugl"};
        magazineReloadTime = 3.0;
        reloadTime = 3.0;
        optics = 1;

        opticsZoomMin = 0.25;
        opticsZoomMax = 1.25;
        opticsZoomInit = 0.75;
        modelOptics = "-";
        cursorAim = "gl";
        cursor = "EmptyCursor";
        cameraDir = "OP_look";
        memoryPointCamera = "OP_eye";
        muzzlePos = "barrel_end";
        muzzleEnd = "barrel_start";
        cartridgePos = "";
        cartridgeVel = "";

        class GunParticles {
            class effect1 {
                positionName = "barrel_start";
                directionName = "barrel_end";
                effectName = "GrenadeLauncherCloud";
            };
        };
        weaponInfoType = "RscWeaponZeroing";
        discreteDistanceCameraPoint[] = {
            "eye75",
            "eye100",
            "eye200",
            "eye300"
        };
        discreteDistance[] = {50, 100, 200, 300};
        discreteDistanceInitIndex = 0;
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        initSpeed = 75;
        canLock = 0;
        autoReload = 0;
        autoAimEnabled = 0;
        ffMagnitude = 0.1;
        ffFrequency = 1;
        ffCount = 1;
        dispersion = 0.00725;
        maxLeadSpeed = 15;
        minRange = 30;
        minRangeProbab = 0.1;
        midRange = 200;
        midRangeProbab = 0.7;
        maxRange = 400;
        maxRangeProbab = 0.05;
        textureType = "semi";
        recoil = "recoil_gm6";
        drySound[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl.wss", 0.562341, 1, 10};
        changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl.wss",0.31622776,1,5};
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {
                    "ls_mpl_Shot_soundSet",
                    "Msbs65_01_Ugl_Tail_SoundSet",
                    "Msbs65_01_Ugl_InteriorTail_SoundSet"
                };
            };
            reloadTime = 3;
            recoil = "recoil_single_gm6";
            recoilProne = "recoil_single_prone_gm6";
            minRange = 30;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.05;
        };
    };

    class Rifle_Long_Base_F;
    class ls_rifle_base: Rifle_Long_Base_F {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class ls_weapon_mpl57_base: ls_rifle_base {
        scope = 0;
        author = AUTHOR;
        displayName = "MPL-57";
        descriptionShort = "$STR_dn_staticGrenadeLauncher";

        model = QPATHTOF(ls_weapon_mpl.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\barrel_co.paa),
            QPATHTOF(data\sight_co.paa),
            QPATHTOF(data\stock_wood_oak_co.paa)
        };
        picture = QPATHTOF(data\ui\mpl_ui_ca.paa);

        handAnim[] = {
            "OFP2_ManSkeleton",
            QPATHTOF(anims\mpl_handanim.rtm)
        };

        class GunParticles {
            class firstEffect {
                positionName = "barrel_start";
                directionName = "barrel_end";
                effectName = "GrenadeLauncherCloud";
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 40;
        };

        muzzles[] = {"ls_weapon_mpl57_Muzzle"};

        class ls_weapon_mpl57_Muzzle: ls_weapon_mpl57_UGL {
            displayName = "MPL-57 40mw GL";
            descriptionShort = "MPL-57 40mw GL";
            weaponInfoType = "RscWeaponZeroing";
            cameraDir = "aim_point";
            discreteDistanceCameraPoint[] = {
                "eye75",
                "eye100",
                "eye125",
                "eye150",
                "eye175",
                "eye200",
                "eye225",
                "eye250",
                "eye275",
                "eye300",
                "eye325",
                "eye350",
                "eye375"
            };
            discretedistance[] = {75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375};
            discretedistanceinitindex = 0;
            recoil = "uns_recoil_ugl";
            recoilProne = "uns_recoil_ugl";
            reloadTime = 3.2;
            magazineReloadTime = 3.2;
            dispersion = 0.001;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 200;
            midRangeProbab = 0.9;
            maxRange = 400;
            maxRangeProbab = 0.9;
            drySound[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl.wss", 0.562341, 1, 10};
            class Single: Single {
                class StandardSound: StandardSound {
                    begin1[] = {"", 2, 1, 200}; // TODO add sound
                    soundBegin[] = {"begin1", 0.5};
                };
            };
        };
    };

    class ls_weapon_mpl57: ls_weapon_mpl57_base {
        scope = 2;
        author = AUTHOR;
        baseWeapon = "ls_weapon_mpl57";
    };

    class ls_weapon_mpl57_rebel: ls_weapon_mpl57 {
        author = AUTHOR;
        displayName = "MPL-57 (Rebel)";
        baseWeapon = "ls_weapon_mpl57_rebel";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\barrel_hardened_co.paa),
            QPATHTOF(data\sight_co.paa),
            QPATHTOF(data\stock_wood_cherry_co.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\barrel_hardened.rvmat)
        };
        picture = QPATHTOF(data\ui\mpl_rebel_ui_ca.paa);
    };
};
