class ls_weapon_z6_base;
class ls_weapon_atrt_rotaryBlaster_base: ls_weapon_z6_base {
    displayName = CSTRING(rotaryBlaster_displayName);
    descriptionShort = CSTRING(rotaryBlaster_descriptionShort);
    baseWeapon = "ls_weapon_atrt_rotaryBlaster";

    // TODO: Model
    // model = QPATHTOF(rotaryBlaster\ls_weapon_atrt_rotaryBlaster.p3d);
    // hiddenSelections[] = {"camo1"};
    // hiddenSelectionsTextures[] = {
    //     QPATHTOF(rotaryBlaster\data\camo1_co.paa)
    // };
    handAnim[] = {
        "OFP2_ManSkeleton", "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm",
        "ls_atrt_skeleton", QPATHTOEF(animations,data\vehicle\atrt\atrt_standIdle.rtm)
    };

    recoil = "ls_recoil_atrt";

    useModelOptics = 1;
    modelOptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";
};
class ls_weapon_atrt_rotaryBlaster: ls_weapon_atrt_rotaryBlaster_base {
    scope = 1;
    author = AUTHOR;
};
