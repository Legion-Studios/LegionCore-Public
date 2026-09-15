class Mode_SemiAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class ls_grenadeLauncher_base: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            class StandardSound;
        };
    };
    class ls_weapon_rd4_base: ls_grenadeLauncher_base {
        scope = 0;
        author = AUTHOR;
        displayname = CSTRING(displayName);
        descriptionShort = "$STR_A3_CfgWeapons_3GL1";
        baseWeapon = "ls_weapon_rd4";

        model = QPATHTOF(ls_weapon_rd4.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\camo1_co.paa)};
        picture = QPATHTOF(data\ui\rd4_ui_ca.paa);

        handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"};
        reloadAction = "GestureReloadMXUGL";

        magazines[] = {"ls_magazine_rd4"};
        magazineWell[] = {"ls_magwell_rd4", "3UGL_40x36"};
        drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
        reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\dc17s\reload.wss), 0.56234133, 1, 30};

        fireLightDiffuse[] = {FIRELIGHT_GREEN};

        initspeed = 80;
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        inertia = 0.5;

        cameraDir = "OP_look";
        discreteInitIndex = 0;
        discreteDistance[] = {100, 200, 300, 400};
        discreteDistanceCameraPoint[] = {
            "OP_eye_100",
            "OP_eye_200",
            "OP_eye_300",
            "OP_eye_400"
        };

        class Single: Single {
            sounds[] = {"StandardSound"};
            class StandardSound: StandardSound {
                soundSetShot[] = {"ls_rd4_Shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
            };
        };
    };
    class ls_weapon_rd4: ls_weapon_rd4_base {
        scope = 2;
        author = AUTHOR;
    };

    // Needed for WebKnight droids
    DEPRECATED(SWLW_GL,ls_weapon_rd4);
};
