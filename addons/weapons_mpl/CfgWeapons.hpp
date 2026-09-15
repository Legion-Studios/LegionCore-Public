class CfgWeapons {
    class Rifle_Base_F;
    class ls_grenadeLauncher_base: Rifle_Base_F {
        class Single;
    };
    class ls_weapon_mpl57_base: ls_grenadeLauncher_base {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(displayName);
        descriptionShort = "$STR_A3_CfgWeapons_3GL1";
        baseWeapon = "ls_weapon_mpl57";

        model = QPATHTOF(ls_weapon_mpl.p3d);
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\barrel_co.paa),
            QPATHTOF(data\sight_co.paa),
            QPATHTOF(data\stock_wood_oak_co.paa)
        };
        picture = QPATHTOF(data\ui\mpl_ui_ca.paa);

        handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(anims\mpl_handanim.rtm)};
        reloadAction = "GestureReloadMXUGL";

        magazines[] = {"1Rnd_HE_Grenade_shell"};
        magazineWell[] = {"UGL_40x36"};

        discreteDistanceInitIndex = 0;
        discreteDistanceCameraPoint[] = {
            "op_eye_75",  "op_eye_100", "op_eye_125",
            "op_eye_150", "op_eye_175", "op_eye_200",
            "op_eye_225", "op_eye_250", "op_eye_275",
            "op_eye_300", "op_eye_325", "op_eye_350",
            "op_eye_375"
        };
        discretedistance[] = {
            75, 100, 125,
            150, 175, 200,
            225, 250, 275,
            300, 325, 350,
            375
        };

        class Single: Single {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"ls_mpl_Shot_soundSet", "Msbs65_01_Ugl_Tail_SoundSet", "Msbs65_01_Ugl_InteriorTail_SoundSet"};
            };
        };
    };

    class ls_weapon_mpl57: ls_weapon_mpl57_base {
        scope = 2;
        author = AUTHOR;
    };

    class ls_weapon_mpl57_rebel: ls_weapon_mpl57 {
        author = AUTHOR;
        displayName = CSTRING(rebel_displayName);
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
