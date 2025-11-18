// Global toggles for caching/logging
// #define DISABLE_COMPILE_CACHE
// #define DEBUG_MODE_FULL
#define DEBUG_SYNCHRONOUS

#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

#define QQUOTE(var1) QUOTE(QUOTE(var1))

// Starting number for IDD values
#define IDD_BASE 70000

// Short hand get/setVariable statements because I'm (DartRuffian) lazy
// These are meant to be used in UserActions, hence the QQGVAR
#undef GETVAR
#undef SETVAR
#define GETVAR(var1,var2) (this getVariable [ARR_2(QQGVAR(var1),var2)])
#define SETVAR(var1,var2,var3) (this setVariable [ARR_3(QQGVAR(var1),var2,var3)])
#define GETEVAR(var1,var2,var3) (this getVariable [ARR_2(QQEGVAR(var1,var2),var3)])
#define SETEVAR(var1,var2,var3,var4) (this setVariable [ARR_3(QQEGVAR(var1,var2),var3,var4)])

// Undefine macros that use `PREFIX_...`, since we want addons, variables, etc. to begin with ls_
#undef ADDON
#undef EGVAR
#undef FUNC_INNER
#undef LOG_SYS_FORMAT
#define ADDON DOUBLES(MAINPREFIX,COMPONENT)
#define EGVAR(var1,var2) TRIPLES(MAINPREFIX,var1,var2)
#define FUNC_INNER(var1,var2) TRIPLES(DOUBLES(MAINPREFIX,var1),fnc,var2)
#define LOG_SYS_FORMAT(LEVEL,MESSAGE) format ['[%1] (%2) %3: %4', toUpper 'MAINPREFIX', 'COMPONENT', LEVEL, MESSAGE]

#undef GVARMAIN
#define GVARMAIN(var1) DOUBLES(MAINPREFIX,var1)

#ifdef DEBUG_MODE_FULL
    #define TRACE_0(MESSAGE) LOG_SYS_FILELINENUMBERS('TRACE',str diag_frameNo + ' ' + (MESSAGE))
#else
    #define TRACE_0(MESSAGE) /* disabled */
#endif

#undef ELSTRING
#undef ECSTRING
#undef LELSTRING
#define ELSTRING(var1,var2) QUOTE(TRIPLES(STR,DOUBLES(MAINPREFIX,var1),var2))
#define ECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(MAINPREFIX,var1),var2))
#define LELSTRING(var1,var2) localize QUOTE(TRIPLES(STR,DOUBLES(MAINPREFIX,var1),var2))

// Paths
#undef PATHTOF
#undef PATHTOEF
#undef PATHTOF2

#ifndef SUBCOMPONENT
    #define PATHTOF(var1) \ls\PREFIX\SUBPREFIX\COMPONENT\var1
    #define PATHTOF2(var1) ls\PREFIX\SUBPREFIX\COMPONENT\var1
#else
    #define SUBADDON DOUBLES(ADDON,SUBCOMPONENT)

    // Update PATHTO macros to point to subaddon instead
    #define PATHTOF(var1) \ls\PREFIX\SUBPREFIX\DOUBLES(COMPONENT,SUBCOMPONENT)\var1
    #define PATHTOF2(var1) ls\PREFIX\SUBPREFIX\DOUBLES(COMPONENT,SUBCOMPONENT)\var1

    #undef LSTRING
    #undef CSTRING
    #undef LLSTRING
    #define LSTRING(var1) QUOTE(TRIPLES(STR,SUBADDON,var1))
    #define CSTRING(var1) QUOTE(TRIPLES($STR,SUBADDON,var1))
    #define LLSTRING(var1) localize QUOTE(TRIPLES(STR,SUBADDON,var1))
#endif

#define PATHTOEF(var1,var2) \ls\PREFIX\SUBPREFIX\var1\var2
#define PATHTOEF2(var1,var2) ls\PREFIX\SUBPREFIX\var1\var2
#define QPATHTOF2(var1) QUOTE(PATHTOF2(var1))
#define QPATHTOEF2(var1,var2) QUOTE(PATHTOEF2(var1,var2))

#undef COMPILE_SCRIPT
#define COMPILE_SCRIPT(var1) compileScript ['PATHTOF(var1).sqf']

#undef PREP
#ifdef DISABLE_COMPILE_CACHE
    #define LINKFUNC(x) {call FUNC(x)}
    #define PREP(fncName) FUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
    #define PREP_RECOMPILE_START    if (isNil "ls_fnc_recompile") then {ls_recompiles = []; ls_fnc_recompile = {{call _x} forEach ls_recompiles;}}; private _recomp = {
    #define PREP_RECOMPILE_END      }; call _recomp; ls_recompiles pushBack _recomp;
#else
    #define LINKFUNC(x) FUNC(x)
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
    #define PREP_RECOMPILE_START ; /* disabled */
    #define PREP_RECOMPILE_END ; /* disabled */
#endif

#define WEAP_XX(WEAP, COUNT) class DOUBLES(_xx,WEAP) { \
    weapon = QUOTE(WEAP); \
    count = COUNT; \
}

#define MAG_XX(MAG, COUNT) class DOUBLES(_xx,MAG) { \
    magazine = QUOTE(MAG); \
    count = COUNT; \
}

#define ITEM_XX(ITEM, COUNT) class DOUBLES(_xx,ITEM) { \
    name = QUOTE(ITEM); \
    count = COUNT; \
}

#define BACKPACK_XX(BP, COUNT) class DOUBLES(_xx,BP) { \
    backpack = QUOTE(BP); \
    count = COUNT; \
}

// ACE Cargo
#define CARGO_XX(ITEM, COUNT) class ITEM { \
    type = QUOTE(ITEM); \
    amount = COUNT; \
}

#define ITEM_2(a) a, a
#define ITEM_3(a) ITEM_2(a), a
#define ITEM_4(a) ITEM_3(a), a
#define ITEM_5(a) ITEM_4(a), a
#define ITEM_6(a) ITEM_5(a), a
#define ITEM_7(a) ITEM_6(a), a
#define ITEM_8(a) ITEM_7(a), a
#define ITEM_9(a) ITEM_8(a), a
#define ITEM_10(a) ITEM_9(a), a
#define ITEM_11(a) ITEM_10(a), a
#define ITEM_12(a) ITEM_11(a), a
#define ITEM_13(a) ITEM_12(a), a
#define ITEM_14(a) ITEM_13(a), a
#define ITEM_15(a) ITEM_14(a), a
#define ITEM_16(a) ITEM_15(a), a
#define ITEM_17(a) ITEM_16(a), a
#define ITEM_18(a) ITEM_17(a), a
#define ITEM_19(a) ITEM_18(a), a
#define ITEM_20(a) ITEM_19(a), a
#define ITEM_21(a) ITEM_20(a), a
#define ITEM_22(a) ITEM_21(a), a
#define ITEM_23(a) ITEM_22(a), a
#define ITEM_24(a) ITEM_23(a), a

#define HELMET_GH(var1,var2) class DOUBLES(var2,GH): ls_helmet_groundHolder_base { \
    scope = 2; \
    author = AUTHOR; \
    displayName = var1; \
    class TransportItems { \
        ITEM_XX(var2,1); \
    }; \
}

#define ITEM_GH(var1,var2,var3) class DOUBLES(var2,GH): ls_item_groundHolder_base { \
    scope = 2; \
    author = AUTHOR; \
    displayName = var1; \
    class TransportItems { \
        ITEM_XX(var2,var3); \
    }; \
}

#define WEAPON_GH(var1,var2,var3) class DOUBLES(var2,GH): ls_weapon_groundHolder_base { \
    scope = 2; \
    author = AUTHOR; \
    displayName = var1; \
    class TransportWeapons { \
        WEAP_XX(var2,1); \
    }; \
    class TransportMagazines { \
        MAG_XX(var3,1); \
    }; \
}

#define WEAPON_GH_TWOMAG(var1,var2,var3,var4) class DOUBLES(var2,GH): ls_weapon_groundHolder_base { \
    scope = 2; \
    author = AUTHOR; \
    displayName = var1; \
    class TransportWeapons { \
        WEAP_XX(var2,1); \
    }; \
    class TransportMagazines { \
        MAG_XX(var3,1); \
        MAG_XX(var4,1); \
    }; \
}

#define WEAPON_GH_NOMAG(var1,var2) class DOUBLES(var2,GH): ls_weapon_groundHolder_base { \
    scope = 2; \
    author = AUTHOR; \
    displayName = var1; \
    class TransportWeapons { \
        WEAP_XX(var2,1); \
    }; \
}

#define DEPRECATED(OLD_CLASS,NEW_CLASS) class OLD_CLASS: NEW_CLASS { \
    scope = 1; \
    scopeCurator = 0; \
    _deprecated = QUOTE(This class is deprecated. Use 'NEW_CLASS' instead); \
    ls_replacementObject = QUOTE(NEW_CLASS); \
}

#define MAG_CSW(var1,var2) class DOUBLES(var1,csw): var1 { \
    scope = var2; \
    author = AUTHOR; \
    type = TYPE_MAGAZINE_PRIMARY_AND_THROW; \
}

// Debug textures, mainly for testing hiddenSelections
#define DBUG_TEX_RED "#(rgb,8,8,3)color(1,0,0,1)"
#define DBUG_TEX_GRN "#(rgb,8,8,3)color(0,1,0,1)"
#define DBUG_TEX_BLU "#(rgb,8,8,3)color(0,0,1,1)"
#define DBUG_TEX_PUR "#(rgb,8,8,3)color(1,0,1,1)"
#define DBUG_TEX_YEL "#(rgb,8,8,3)color(1,1,0,1)"

// Statements and conditions
#define CLAMP(var1,lower,upper) (upper min (var1 max lower))
#define SPEED_KPH(kph) ((kph) / 3.6)

#define DAMAGE_YELLOW 0.4
#define DAMAGE_RED 0.7

#define LOADOUT_INDEX_PRIMARY 0
#define LOADOUT_INDEX_LAUNCHER 1
#define LOADOUT_INDEX_HANDGUN 2
#define LOADOUT_INDEX_UNIFORM 3
#define LOADOUT_INDEX_VEST 4
#define LOADOUT_INDEX_BACKPACK 5
#define LOADOUT_INDEX_HELMET 6
#define LOADOUT_INDEX_FACEWEAR 7
#define LOADOUT_INDEX_BINOCULARS 8
#define LOADOUT_INDEX_LINKEDITEMS 9

// Note that these are specifically for a loadout array
// assignedItems returns these in a different order.
#define LINKEDITEMS_INDEX_MAP 0
#define LINKEDITEMS_INDEX_GPS 1
#define LINKEDITEMS_INDEX_RADIO 2
#define LINKEDITEMS_INDEX_COMPASS 3
#define LINKEDITEMS_INDEX_WATCH 4
#define LINKEDITEMS_INDEX_NVG 5

// Weapon types
#define TYPE_WEAPON_PRIMARY 1
#define TYPE_WEAPON_HANDGUN 2
#define TYPE_WEAPON_SECONDARY 4
#define TYPE_BINOCULAR_AND_NVG 4096
#define TYPE_WEAPON_VEHICLE 65536
#define TYPE_ITEM 131072
// Magazine types
#define TYPE_MAGAZINE_HANDGUN_AND_GL 16 // mainly
#define TYPE_MAGAZINE_PRIMARY_AND_THROW 256
#define TYPE_MAGAZINE_SECONDARY_AND_PUT 512 // mainly
#define TYPE_MAGAZINE_MISSILE 768
// Item types
#define TYPE_DEFAULT 0
#define TYPE_MUZZLE 101
#define TYPE_OPTICS 201
#define TYPE_FLASHLIGHT 301
#define TYPE_BIPOD 302
#define TYPE_FIRST_AID_KIT 401
#define TYPE_FINS 501 // not implemented
#define TYPE_BREATHING_BOMB 601 // not implemented
#define TYPE_NVG 602
#define TYPE_GOGGLE 603
#define TYPE_SCUBA 604 // not implemented
#define TYPE_HEADGEAR 605
#define TYPE_FACTOR 607
#define TYPE_MAP 608
#define TYPE_COMPASS 609
#define TYPE_WATCH 610
#define TYPE_RADIO 611
#define TYPE_GPS 612
#define TYPE_HMD 616
#define TYPE_BINOCULAR 617
#define TYPE_MEDIKIT 619
#define TYPE_TOOLKIT 620
#define TYPE_UAV_TERMINAL 621
#define TYPE_VEST 701
#define TYPE_UNIFORM 801
#define TYPE_BACKPACK 901

// ACE Arsenal Tab values
// Left Tabs
#define ARSENAL_TAB_PRIMARY 0
#define ARSENAL_TAB_HANDGUNS 1
#define ARSENAL_TAB_LAUNCHERS 2
#define ARSENAL_TAB_UNIFORMS 3
#define ARSENAL_TAB_VESTS 4
#define ARSENAL_TAB_BACKPACKS 5
#define ARSENAL_TAB_HEADGEAR 6
#define ARSENAL_TAB_GOGGLES 7
#define ARSENAL_TAB_NVGS 8
#define ARSENAL_TAB_BINOCULARS 9
#define ARSENAL_TAB_MAP 10
#define ARSENAL_TAB_GPS 11
#define ARSENAL_TAB_RADIOS 12
#define ARSENAL_TAB_COMPASS 13
#define ARSENAL_TAB_WATCH 14
// Right Tabs
#define ARSENAL_TAB_OPTICS 0
#define ARSENAL_TAB_SIDE 1
#define ARSENAL_TAB_MUZZLES 2
#define ARSENAL_TAB_BIPODS 3
#define ARSENAL_TAB_MAGAZINES 4
#define ARSENAL_TAB_GRENADES 5
#define ARSENAL_TAB_EXPLOSIVES 6
#define ARSENAL_TAB_MISC 7

#define OPFOR 0
#define BLUFOR 1
#define INDFOR 2
#define CIVILIAN 3
#define ALL_SIDES 6

#define IGUI_SAVEX 0
#define IGUI_SAVEY 1
#define IGUI_SAVEW 2
#define IGUI_SAVEH 3
#define IGUI_SAVEALL IGUI_SAVEX, IGUI_SAVEY, IGUI_SAVEW, IGUI_SAVEH

#define STAT_BAR_STATEMENT(min,max) [ARR_3((_this select 0) select 0,_this select 1,[ARR_3([ARR_2(min,max)],[ARR_2(0.01,1)],false)])] call ace_arsenal_fnc_statBarStatement_default

#define LINKED_ITEMS "ItemMap", "ItemCompass", "ItemGPS", "ItemWatch"
#define LINKED_ITEMS_RADIO LINKED_ITEMS, "ItemRadio"
#define LINKED_ITEMS_CLONE LINKED_ITEMS, "ls_radios_cwp8"
#define LINKED_ITEMS_DROID LINKED_ITEMS, "ls_radios_dcs"
#define LINKED_ITEMS_MANDALORIAN LINKED_ITEMS, "ls_mandalorian_rangefinder", "ls_radios_hush98"

#define GOGGLES_OVERLAY_NONE \
    ACE_Overlay = ""; \
    ACE_OverlayCracked = ""; \
    ACE_OverlayDirt = ""; \
    ACE_DustPath = ""

#define ROLE_ENGINEER \
    picture = "pictureRepair"; \
    role = "Sapper"; \
    icon = "ls_iconManEngineer"; \
    nameSound = "veh_infantry_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_s"; \
    canDeactivateMines = 1

#define ROLE_TECH \
    picture = ""; \
    role = "Rifleman"; \
    icon = "ls_iconManTech"; \
    nameSound = "veh_infantry_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_s"; \
    ls_common_tech = 1; \
    uavHacker = 1

#define ROLE_MEDIC \
    picture = "pictureHeal"; \
    role = "CombatLifeSaver"; \
    icon = "ls_iconManMedic"; \
    nameSound = "veh_infantry_medic_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_medic_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_medic_s"; \
    attendant = 1

#define ROLE_MARKSMAN \
    picture = ""; \
    role = "Marksman"; \
    icon = "ls_iconManMarksman"; \
    nameSound = "veh_infantry_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_s"

#define ROLE_SNIPER \
    picture = ""; \
    role = "Marksman"; \
    icon = "ls_iconManSniper"; \
    nameSound = "veh_infantry_sniper_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s"

#define ROLE_AT \
    picture = ""; \
    role = "MissileSpecialist"; \
    icon = "ls_iconManAT"; \
    nameSound = "veh_infantry_AT_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_AT_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_AT_s"

#define ROLE_MG \
    picture = ""; \
    role = "MachineGunner"; \
    icon = "ls_iconManSupportGunner"; \
    nameSound = "veh_infantry_MG_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_MG_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_MG_s"

#define ROLE_GRENADIER \
    picture = ""; \
    role = "Grenadier"; \
    icon = "ls_iconManGrenadier"; \
    nameSound = "veh_infantry_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_s"

#define ROLE_RIOTCONTROL \
    picture = ""; \
    role = "Rifleman"; \
    icon = "ls_iconManRiotControl"; \
    nameSound = "veh_infantry_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_s"

#define ROLE_PILOT \
    picture = ""; \
    role = "Crewman"; \
    icon = "ls_iconManPilot"; \
    nameSound = "veh_infantry_pilot_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s"; \
    ls_common_pilot = 1

#define ROLE_CREWMAN \
    picture = ""; \
    role = "Crewman"; \
    icon = "ls_iconManCrewman"; \
    nameSound = "veh_infantry_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_s"; \
    ls_common_crewman = 1

#define ROLE_GUNNER \
    picture = ""; \
    role = "Crewman"; \
    icon = "ls_iconManGunner"; \
    nameSound = "veh_infantry_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_s"

#define ROLE_LEADER \
    picture = ""; \
    role = "Rifleman"; \
    icon = "ls_iconManLeader"; \
    nameSound = "veh_infantry_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_s"

#define ROLE_OFFICER \
    picture = ""; \
    role = "Rifleman"; \
    icon = "iconManOfficer"; \
    nameSound = "veh_infantry_officer_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_officer_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_officer_s"

#define THROW_PUT "Throw", "Put"
