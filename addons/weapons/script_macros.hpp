#define WEAPONTYPE_NONE 0
#define WEAPONTYPE_AKIMBO 1

#define AMMOTYPE_NONE 0
#define AMMOTYPE_STUN 1
#define AMMOTYPE_ION 2
#define AMMOTYPE_RAGDOLL 3

#define AMMO_USAGE_NONE 0
#define AMMO_USAGE_LIGHT 1
#define AMMO_USAGE_MARKING 2
#define AMMO_USAGE_CONCEALMENT 4
#define AMMO_USAGE_COUNTERMEASURES 8
#define AMMO_USAGE_MINE 16
#define AMMO_USAGE_UNDERWATER 32
#define AMMO_USAGE_INFANTRY 64
#define AMMO_USAGE_VEHICLES 128
#define AMMO_USAGE_AIRCRAFT 256
#define AMMO_USAGE_ARMORED_VEHICLES 512

#define WEAPONLOCK_UNDETECTABLE 0
#define WEAPONLOCK_VISUAL 1
#define WEAPONLOCK_INFRARED 2
#define WEAPONLOCK_LASER 4
#define WEAPONLOCK_RADAR 8
#define WEAPONLOCK_MISSILE 16

#define SOUND_FLY(sound) sound, 2.23872, 1, 100
#define SOUND_HIT(sound) sound, 1.9952624, 1, 120

// Magazines specifically for AI, so that guns can spawn pre-loaded
// Only needed for mags that can only be stored in a backpack, or are very heavy
#define AI_MAG(var1) \
    class DOUBLES(var1,ai): var1 { \
        scope = 1; \
        allowedSlots[] = {TYPE_UNIFORM, TYPE_VEST}; \
        mass = 0; \
        ace_arsenal_uniqueBase = QUOTE(DOUBLES(var1,mag)); \
    }

// For CfgWeaponCursors
#define CURSOR(var1) \
    class DOUBLES(ls,var1): default { \
        texture = QPATHTOF(data\cursors\DOUBLES(var1,ca.paa)); \
    }

#define CURSOR_UNCOLORED(var1) \
    class TRIPLES(ls,var1,uncolored): DOUBLES(ls,var1) { \
        color[] = {1, 1, 1, 1}; \
    }

// Ammo class base
#define BULLET_COLORS(var1) \
    class DOUBLES(var1,red): DOUBLES(var1,blue) { \
        model = QPATHTOEF(data,effects\ls_laser_red.p3d); \
        effectFly = "ls_plasma_red"; \
    }; \
    class DOUBLES(var1,green): DOUBLES(var1,blue) { \
        model = QPATHTOEF(data,effects\ls_laser_green.p3d); \
        effectFly = "ls_plasma_green"; \
    }; \
    class DOUBLES(var1,yellow): DOUBLES(var1,blue) { \
        model = QPATHTOEF(data,effects\ls_laser_yellow.p3d); \
        effectFly = "ls_plasma_yellow"; \
    }

// Display name base, magazine class base, ammo class base
#define MAG_COLORS(var1,var2,var3) \
    class DOUBLES(var2,red): DOUBLES(var2,blue) { \
        displayName = QUOTE(var1 (Blue)); \
        author = AUTHOR; \
        ammo = QUOTE(DOUBLES(var3,red)); \
    }; \
    class DOUBLES(var2,green): DOUBLES(var2,blue) { \
        displayName = QUOTE(var1 (Red)); \
        author = AUTHOR; \
        ammo = QUOTE(DOUBLES(var3,green)); \
    }; \
    class DOUBLES(var2,yellow): DOUBLES(var2,blue) { \
        displayName = QUOTE(var1 (Yellow)); \
        author = AUTHOR; \
        ammo = QUOTE(DOUBLES(var3,yellow)); \
    }

#define PLASMA_SOUNDS \
    superSonicCrackNear[] = {}; \
    superSonicCrackFar[] = {}; \
    soundSetBulletFly[] = {"ls_bullet_flyby_soundSet"}; \
    soundSetSonicCrack[] = {"ls_bullet_flyby_soundSet"}; \
    class SuperSonicCrack {}; \
    bulletFly[] = { \
        "bulletFly1", 0.125, \
        "bulletFly2", 0.125, \
        "bulletFly3", 0.125, \
        "bulletFly4", 0.125, \
        "bulletFly5", 0.125, \
        "bulletFly6", 0.125, \
        "bulletFly7", 0.125, \
        "bulletFly8", 0.125 \
    }; \
    bulletFly1[] = {SOUND_FLY(QPATHTOEF(sounds,weapons\fly\fly1.wss))}; \
    bulletFly2[] = {SOUND_FLY(QPATHTOEF(sounds,weapons\fly\fly2.wss))}; \
    bulletFly3[] = {SOUND_FLY(QPATHTOEF(sounds,weapons\fly\fly3.wss))}; \
    bulletFly4[] = {SOUND_FLY(QPATHTOEF(sounds,weapons\fly\fly4.wss))}; \
    bulletFly5[] = {SOUND_FLY(QPATHTOEF(sounds,weapons\fly\fly5.wss))}; \
    bulletFly6[] = {SOUND_FLY(QPATHTOEF(sounds,weapons\fly\fly6.wss))}; \
    bulletFly7[] = {SOUND_FLY(QPATHTOEF(sounds,weapons\fly\fly7.wss))}; \
    bulletFly8[] = {SOUND_FLY(QPATHTOEF(sounds,weapons\fly\fly8.wss))}; \
    multiSoundHit[] = { \
        "soundHit1", 0.052, \
        "soundHit2", 0.052, \
        "soundHit3", 0.052, \
        "soundHit4", 0.052, \
        "soundHit5", 0.052, \
        "soundHit6", 0.052, \
        "soundHit7", 0.052, \
        "soundHit8", 0.052, \
        "soundHit9", 0.052, \
        "soundHit10", 0.052, \
        "soundHit11", 0.052, \
        "soundHit12", 0.052, \
        "soundHit13", 0.052, \
        "soundHit14", 0.052, \
        "soundHit15", 0.052, \
        "soundHit16", 0.052, \
        "soundHit17", 0.052, \
        "soundHit18", 0.052, \
        "soundHit19", 0.064 \
    }; \
    soundHit1[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact1.wss))}; \
    soundHit2[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact2.wss))}; \
    soundHit3[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact3.wss))}; \
    soundHit4[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact4.wss))}; \
    soundHit5[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact5.wss))}; \
    soundHit6[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact6.wss))}; \
    soundHit7[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact7.wss))}; \
    soundHit8[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact8.wss))}; \
    soundHit9[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact9.wss))}; \
    soundHit10[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact10.wss))}; \
    soundHit11[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact11.wss))}; \
    soundHit12[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact12.wss))}; \
    soundHit13[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact13.wss))}; \
    soundHit14[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact14.wss))}; \
    soundHit15[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact15.wss))}; \
    soundHit16[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact16.wss))}; \
    soundHit17[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact17.wss))}; \
    soundHit18[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact18.wss))}; \
    soundHit19[] = {SOUND_HIT(QPATHTOEF(sounds,weapons\impact\impact19.wss))}

#define PLASMA_EFFECTS \
    craterEffects = ""; \
    craterShape = ""; \
    craterWaterEffects = "ImpactEffectsWater"; \
    ExplosionEffects = "ls_plasma_impact"; \
    class HitEffects: HitEffects { \
        default_mat = "ls_plasma_impact"; \
        Hit_Foliage_Dead = "ls_plasma_impact"; \
        Hit_Foliage_green = "ls_plasma_impact"; \
        Hit_Foliage_Green_big = "ls_plasma_impact"; \
        Hit_Foliage_Palm = "ls_plasma_impact"; \
        Hit_Foliage_Pine = "ls_plasma_impact"; \
        hitBuilding = "ls_plasma_impact"; \
        hitConcrete = "ls_plasma_impact"; \
        hitFoliage = "ls_plasma_impact"; \
        hitGlass = "ls_plasma_impact"; \
        hitGlassArmored = "ls_plasma_impact"; \
        hitGroundHard = "ls_plasma_impact"; \
        hitGroundRed = "ls_plasma_impact"; \
        hitGroundSoft = "ls_plasma_impact"; \
        hitMan = "ls_plasma_impact"; \
        hitMetal = "ls_plasma_impact"; \
        hitMetalPlate = "ls_plasma_impact"; \
        hitPlastic = "ls_plasma_impact"; \
        hitRubber = "ls_plasma_impact"; \
        hitTyre = "ls_plasma_impact"; \
        hitVirtual = "ls_plasma_impact"; \
        hitWater = "ImpactEffectsWater"; \
        hitWood = "ls_plasma_impact"; \
    }
