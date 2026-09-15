class Mode_SemiAuto;
// class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Long_Base_F;
    class ls_rifle_base: Rifle_Long_Base_F {
        class WeaponSlotsInfo {
            class CowsSlot;
            // class MuzzleSlot;
            // class PointerSlot;
            class UnderBarrelSlot;
        };
    };
    class ls_weapon_valken38x_base: ls_rifle_base {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(valken38x_displayName);
        descriptionShort = ECSTRING(weapons,sniperBlasterRifle);
        baseWeapon = "ls_weapon_valken38x";

        model = QPATHTOF(ls_weapon_valken38x.p3d);
        // hiddenSelections[] = {"camo1"};
        // hiddenSelectionsTextures[] = {QPATHTOF(data\Body_co.paa)};
        // picture = QPATHTOF(data\ui\valken38x_ui_ca.paa);

        // handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(anims\ls_valken38x_handanim.rtm)};
        // reloadAction = "ReloadMagazine";
        cursor = "srifle";

        magazines[] = {"ls_magazine_valken38x"};
        magazineWell[] = {"ls_valken38x_magwell"};

        reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\dc15a\reload.wss), 0.56234133, 1, 30};

        fireLightDiffuse[] = {FIRELIGHT_BLUE};

        ACE_railHeightAboveBore = 5;

        maxRecoilSway = 0.008;
        recoil = "recoil_EBR";
        swayDecaySpeed = 2;
        dexterity = 1.7;
        initspeed = -1;
        inertia = 0.9;
        aimTransitionSpeed = 0.7;

        aiDispersionCoefX = 2;
        aiDispersionCoefY = 3;

        modes[] = {"Single", "single_close_optics1", "single_medium_optics1", "single_far_optics1"};
        class Single: Mode_SemiAuto {
            reloadTime = RPM(180);
            dispersion = 0.00044;
            maxRange = 500;
            maxRangeProbab = 0.05;
            midRange = 350;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.3;

            recoil = "recoil_single_dmr";
            recoilProne = "recoil_single_prone_dmr";

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"ls_valken38x_Shot_SoundSet", "ls_sniper_Tail_SoundSet"};
            };
        };
        class single_close_optics1: Single {
            showToPlayer = 0;
            requiredOpticType = 1;

            maxRange = 500;
            maxRangeProbab = 0.01;
            midRange = 300;
            midRangeProbab = 0.8;
            minRange = 2;
            minRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
        };
        class single_medium_optics1: single_close_optics1 {
            maxRange = 700;
            maxRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            minRange = 300;
            minRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_far_optics1: single_close_optics1 {
            maxRange = 1000;
            maxRangeProbab = 0.05;
            midRange = 700;
            midRangeProbab = 0.5;
            minRange = 300;
            minRangeProbab = 0.05;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
        };

        class OpticsModes {
            class sight {
                opticsID = 1;
                useModelOptics = 0;
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.5;
                opticsZoomMin = 0.25;
                opticsZoomMax = 0.5;
                opticsZoomInit = 0.75;
                discreteInitIndex = 0;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                memoryPointCamera = "eye";
                visionMode[] = {};
                opticsFlare = 0;
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 150;
            class CowsSlot: CowsSlot {
                class compatibleItems {
                    ls_cows_valken38x_scope = 1;
                };
            };

            class UnderBarrelSlot: UnderBarrelSlot {
                class compatibleItems {
                    // ls_under_valken38x_bipod = 1;
                };
            };
        };
    };
    class ls_weapon_valken38x: ls_weapon_valken38x_base {
        scope = 2;
        author = AUTHOR;

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "ls_cows_valken38x_scope";
            };
        };

        class EventHandlers {
            fired = QUOTE(call FUNC(weaponEvents));
        };

        class ls_WeaponEvents {
            delay = 0;
            sound = "ls_valken38x_rackBolt";
        };
    };

    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class optic_SOS: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip;
                class Iron;
            };
        };
    };
    class ls_cows_valken38x_scope: optic_SOS {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(valken38x_optic_scope_displayName);
        descriptionShort = CSTRING(valken38x_optic_scope_descriptionShort);

        model = QPATHTOF(ls_cows_valken38x_scope.p3d);
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);

        class ItemInfo: ItemInfo {
            class OpticsModes: OpticsModes {
                class Snip: Snip {
                    visionMode[] = {"Normal", "NVG", "TI"};
                    thermalMode[] = {0, 1};
                };
                class Iron: Iron {};
            };
        };
    };
};
