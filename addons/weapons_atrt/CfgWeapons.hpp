class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Long_Base_F;
    class ls_rifle_base: Rifle_Long_Base_F {
        class WeaponSlotsInfo;
    };
    class ls_weapon_atrt_base: ls_rifle_base {
        scope = 0;
        author = AUTHOR;
        displayName = "";
        descriptionShort = CSTRING(descriptionShort);

        handAnim[] = {
            "OFP2_ManSkeleton", "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm",
            "ls_atrt_skeleton", QPATHTOEF(animations,data\vehicle\atrt\atrt_standIdle.rtm)
        };

        recoil = "ls_recoil_atrt";

        fireLightDuration = 0.05;
        fireLightIntensity = 0.4;
        fireLightDiffuse[] = {FIRELIGHT_BLUE};
        fireLightAmbient[] = {0, 0, 0};

        useModelOptics = 1;
        modelOptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";

        magazines[] = {};
        magazineWell[] = {"ls_magwell_atrt"};
        drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 5, 1, 10};

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 120;
        };
    };

    #include "laserCannon\CfgWeapons.hpp"
    #include "rotaryBlaster\CfgWeapons.hpp"
    #include "flamethrower\CfgWeapons.hpp"
};
