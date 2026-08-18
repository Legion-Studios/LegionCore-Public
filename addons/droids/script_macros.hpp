#define GET_SHIELD_HEALTH(var1) (var1 getVariable [QGVAR(shieldHealth), GVAR(droidekaShieldHealth)])
#define GET_SHIELD_COOLDOWN(var1) (var1 getVariable [QGVAR(shieldDisabledUntil), CBA_missionTime - GVAR(droidekaShieldCooldown)])

#define IS_DROIDEKA(var1) (var1 isKindOf "ls_droid_droideka_base" || { var1 isKindOf "ls_droid_droideka_clone" })
