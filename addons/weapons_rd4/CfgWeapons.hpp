class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class UGL_F;

    class Rifle_Long_Base_F;
    class ls_rifle_base: Rifle_Long_Base_F {
        class WeaponSlotsInfo {
            class CowsSlot;
            class MuzzleSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };
    };
    class ls_weapon_rd4_base: ls_rifle_base {
        scope = 0;
        author = AUTHOR;
        displayname = "RD-4 Radiation Cannon";

        model = QPATHTOF(ls_weapon_rd4.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };
        picture = QPATHTOF(data\ui\rd4_ui_ca.paa);

        handAnim[] = {
            "OFP2_ManSkeleton",
            "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
        };
        reloadAction = "ReloadMagazine";

        magazines[] = {
            "ls_magazine_rd4"
        };
        magazineWell[] = {"ls_magwell_rd4"};
        selectionFireAnim = "zasleh";
        drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
        reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc17.wss), 0.56234133, 1, 30};

        fireLightDuration = 0.05;
        fireLightIntensity = 0.4;
        fireLightDiffuse[] = {0, 0, 0.01};
        fireLightAmbient[] = {0, 0, 0};

        cameraDir = "OP_look";
        discreteinitindex = 0;
        discretedistance[] = {100, 200, 300, 400};
        discreteDistanceCameraPoint[] = {
            "OP_eye",
            "OP_eye2",
            "OP_eye3",
            "OP_eye4"
        };

        modes[] = {
            "Single",
            "close",
            "short",
            "medium"
        };
        muzzles[] = {"this"};
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "";
                begin1[] = {QPATHTOEF(sounds,weapons\rd4\shot1.wss), 1, 1, 1800};
                soundBegin[] = {"begin1", 1};
            };
            reloadTime = 0.15;
            dispersion = 0.003015;
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };
        class close: Single {
            showToPlayer = 0;
            aiRateOfFire = 0.25;
            aiRateOfFireDistance = 400;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.2;
        };
        class short: close {
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 500;
            minRange = 300;
            minRangeProbab = 0.2;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class medium: close {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 900;
            minRange = 400;
            minRangeProbab = 0.2;
            midRange = 700;
            midRangeProbab = 0.7;
            maxRange = 900;
            maxRangeProbab = 0.2;
        };
        class EGLM: UGL_F {
            displayName = "3rnd HE launcher";
            descriptionShort = "";
            useModelOptics = 0;
            useExternalOptic = 0;
            initspeed = 75;
            magazines[] = {
                "ls_magazine_3Rnd_40mw_IM41"
            };
            magazineWell[] = {"ls_magwell_rd4"};
            cameraDir = "OP_look";
            discreteDistance[] = {100};
            discreteDistanceCameraPoint[] = {
                "OP_eye",
                "OP_eye2",
                "OP_eye3",
                "OP_eye4"
            };
            discreteDistanceInitIndex = 1;
            class Single: Mode_SemiAuto {
                sounds[] = {"StandardSound"};
                class StandardSound {
                    weaponSoundEffect = "";
                    begin1[] = {QPATHTOEF(sounds,weapons\rd4\shot1.wss), 1, 1, 1800};
                    soundBegin[] = {"begin1", 1};
                };
                reloadTime = 0.15;
                dispersion = 0.003015;
                minRange = 5;
                minRangeProbab = 0.3;
                midRange = 25;
                midRangeProbab = 0.6;
                maxRange = 50;
                maxRangeProbab = 0.1;
                aiRateOfFire = 2;
                aiRateOfFireDistance = 25;
            };
        };
        initspeed = 80;
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        inertia = 0.5;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 180;
            class MuzzleSlot: MuzzleSlot {
                class compatibleItems {};
            };
            class CowsSlot: CowsSlot {
                class compatibleItems {};
            };
            class PointerSlot: PointerSlot {
                class compatibleItems {};
            };
        };
    };

    class ls_weapon_rd4: ls_weapon_rd4_base {
        scope = 2;
        author = AUTHOR;
        baseWeapon = "ls_weapon_rd4";
    };

    // Needed for WebKnight droids
    DEPRECATED(SWLW_GL,ls_weapon_rd4);
};
