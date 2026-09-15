// Config defaults
#define HEIGHT_DEFAULT 1

#define REFRESH_SOUND_LENGTH 6.1

#define MODE_HOLOGRAPHIC 0
#define MODE_TOPOGRAPHICAL 1

#define GET_SCALE(var1) (var1 getVariable [QGVAR(mapScale), 1])
#define GET_SCALEHEIGHT(var1) (var1 getVariable [QGVAR(mapScaleHeight), 500])
#define GET_HEIGHT(var1) (var1 getVariable [QGVAR(height), HEIGHT_DEFAULT])
#define GET_LENGTH(var1) (var1 getVariable [QGVAR(mapLength), 75])
#define GET_SIZE(var1) (var1 getVariable [QGVAR(mapSize), 1000])
#define GET_CENTER(var1) (var1 getVariable [QGVAR(mapCenter), getPosASL var1])
#define GET_TERRAINMODE(var1) (var1 getVariable [QGVAR(terrainMode), MODE_HOLOGRAPHIC])
