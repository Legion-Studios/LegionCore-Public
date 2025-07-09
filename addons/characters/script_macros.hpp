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
    nameSound = "veh_infantry_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_s"

#define ROLE_CREWMAN \
    picture = ""; \
    role = "Crewman"; \
    icon = "ls_iconManCrewman"; \
    nameSound = "veh_infantry_s"; \
    textPlural = "$STR_A3_nameSound_veh_infantry_p"; \
    textSingular = "$STR_A3_nameSound_veh_infantry_s"

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
