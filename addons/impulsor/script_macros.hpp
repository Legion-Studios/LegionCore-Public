#define MODE_REPULSE -1
#define MODE_DISABLED 0
#define MODE_IMPULSE 1
#define MODE_OVERCHARGE 2

#define GET_LEVEL(var1) (var1 getVariable [QGVAR(level), MODE_DISABLED])

#define REPULSE_SPEED 50
