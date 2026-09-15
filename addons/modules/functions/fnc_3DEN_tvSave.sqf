#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles saving a tree view's value as an Eden attribute.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Control group <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _ctrlGroup call ls_modules_fnc_3DEN_tvSave;
 *
 * Public: No
 */

private _tree = _this controlsGroupCtrl 500;

// tvSelection is needed when multiple items are selected, tvCurSelf only returns the first
// We could always use tvSelection, but don't want to cause BWC issues
private _return = (tvSelection _tree) apply { [_x, _tree tvData _x] };
_return;
