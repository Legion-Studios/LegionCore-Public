#include "..\script_component.hpp"
/*
 * Authors: CrimzonKat, DartRuffian
 * Handles visual effects for a unit being stunned.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * player call ls_weapons_fnc_stunEffects
 *
 * Public: No
 */

#define EFFECT_DURATION 7

params ["_unit"];
TRACE_1("fnc_stunEffects",_unit);

if (_unit == ls_player) then {
    private _effects = [];
    private _chromeAberration = ppEffectCreate ["ChromAberration", 601];
    _chromeAberration ppEffectAdjust [0.3, 0.3, true];
    _effects pushBack _chromeAberration;

    private _radialBlur = ppEffectCreate ["RadialBlur", 401];
    _radialBlur ppEffectAdjust [0.05, 0.05, 0.1, 0.1];
    _effects pushBack _radialBlur;

    private _colorInversion = ppEffectCreate ["ColorInversion", 2500];
    _colorInversion ppEffectAdjust [0.3, 0.3, 0.3];
    _effects pushBack _colorInversion;

    private _dynamicBlur = ppEffectCreate ["DynamicBlur", 501];
    _dynamicBlur ppEffectAdjust [10];
    _effects pushBack _dynamicBlur;

    _effects ppEffectCommit EFFECT_DURATION;
    _effects ppEffectEnable true;

    [{
        private _defaults = [
            [0.005, 0.005, false],
            [0.01, 0.01, 0.06, 0.06],
            [0, 0, 0],
            [0]
        ];
        {
            _x ppEffectAdjust (_defaults select _forEachIndex);
        } forEach _this;
        _this ppEffectCommit 2;
    }, _effects, EFFECT_DURATION] call CBA_fnc_waitAndExecute;

    [{
        _this ppEffectEnable false;
        ppEffectDestroy _this;
    }, _effects, EFFECT_DURATION + 3] call CBA_fnc_waitAndExecute;
};

[QGVAR(stunParticles), _unit] call CBA_fnc_globalEvent;
