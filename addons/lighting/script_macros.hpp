// Time in seconds between time of day checks for flashlights
#define FLASHLIGHT_HANDLER_INTERVAL 300

// We use a constant id per unit so that there is only one JIP event per unit
// I.e. if I spam the light key 30 times, JIP players will only recieve the last event
#define CREATE_EVENT_ID(var1) (format [QGVAR(createLights_%1), hashValue var1])

// Same as create, but for cycling modes
#define SETMODE_EVENT_ID(var1) (format [QGVAR(setMode_%1), hashValue var1])
