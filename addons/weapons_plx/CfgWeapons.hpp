class CfgWeapons {
    class Launcher_Base_F;
    class ls_launcher_base: Launcher_Base_F {
        class Single;
        class TopDown;
        class WeaponSlotsInfo;
    };
    class ls_weapon_plx1_base: ls_launcher_base {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(plx1_displayName);

        model = QPATHTOF(ls_weapon_plx1.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };
        picture = QPATHTOF(data\ui\plx1_ui_ca.paa);

        magazines[] = {"ls_magazine_plx1_at"};
        magazineWell[] = {"ls_magwell_plx1"};

        recoil = "recoil_titan_long";
        cursor = "missile";
        intertia = 1.4;
        aimTransitionSpeed = 0.5;

        handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(anims\plx1_handanim.rtm)};

        class Single: Single {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"ls_plx1_Shot_SoundSet", "Launcher_Titan_Tail_SoundSet"};
            };
        };
        class TopDown: TopDown {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"ls_plx1_Shot_SoundSet", "Launcher_Titan_Tail_SoundSet"};
            };
        };

        class OpticsModes {
            class StepScope {
                cameraDir = "look";
                discretefov[] = {0.08333, 0.04167};
                discreteInitIndex = 0;
                distanceZoomMax = 300;
                distanceZoomMin = 300;
                memoryPointCamera = "eye";
                nFovLimit = 0.08333;
                opticsDisablePeripherialVision = 1;
                opticsFlare = 0;
                opticsID = 1;
                opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                opticsZoomInit = 0.08333;
                opticsZoomMax = 0.04167;
                opticsZoomMin = 0.08333;
                useModelOptics = 1;
                visionMode[] = {"Normal", "TI"};
                thermalMode[] = {0, 1};
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 200;
        };
    };
    class ls_weapon_plx1: ls_weapon_plx1_base {
        scope = 2;
        author = AUTHOR;

        ace_javelin_enabled = 1;
    };

    DEPRECATED(ls_weapon_plx1_at,ls_weapon_plx1);
    DEPRECATED(ls_weapon_plx1_aa,ls_weapon_plx1);
};
