class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;

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
        displayName = "PLX-1";

        model = QPATHTOF(ls_weapon_plx1.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };
        picture = QPATHTOF(data\ui\plx1_ui_ca.paa);

        cursor = "missile";

        handAnim[] = {
            "OFP2_ManSkeleton",
            QPATHTOF(anims\plx1_handanim.rtm)
        };

        class Single: Mode_SemiAuto {
            // TODO: Convert to sound shader
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {QPATHTOEF(sounds,weapons\launcher\plx1_shot.wss), 10, 1, 2000};
                soundBegin[] = {"begin1", 1};
                // soundSetShot[] = {"Launcher_Titan_Shot_SoundSet", "Launcher_Titan_Tail_SoundSet"};
            };
        };
        class TopDown: TopDown {
            // TODO: Convert to sound shader
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {QPATHTOEF(sounds,weapons\launcher\plx1_shot.wss), 10, 1, 2000};
                soundBegin[] = {"begin1", 1};
                // soundSetShot[] = {"Launcher_Titan_Shot_SoundSet", "Launcher_Titan_Tail_SoundSet"};
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

    class ls_weapon_plx1_at: ls_weapon_plx1_base {
        scope = 2;
        author = AUTHOR;
        displayName = "PLX-1 M1";
        descriptionShort = "Anti-Tank Missile Launcher";
        baseWeapon = "ls_weapon_plx1_at";

        magazines[] = {"ls_magazine_plx1_at"};
        magazineWell[] = {"ls_magwell_plx1_at"};

        nameSound = "atlauncher";
        cmImmunity = 0.2;
        weaponLockSystem = WEAPONLOCK_INFRARED;
    };

    class ls_weapon_plx1_aa: ls_weapon_plx1_base {
        scope = 2;
        author = AUTHOR;
        displayName = "PLX-1 M2";
        descriptionShort = "Anti-Air Missile Launcher";
        baseWeapon = "ls_weapon_plx1_aa";

        modes[] = {"Single"};
        magazines[] = {"ls_magazine_plx1_aa"};
        magazineWell[] = {"ls_magwell_plx1_aa"};

        nameSound = "aalauncher";
        cmImmunity = 0.4;
        initSpeed = 30;
        recoil = "recoil_titan_long";
        weaponLockSystem = WEAPONLOCK_RADAR;
    };
};
