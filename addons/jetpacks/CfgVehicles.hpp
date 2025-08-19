class CfgVehicles {
    // leaving this commented out for now, as it is not used in the current implementation
    // class Man;
    // class CAManBase: Man {
    //     class ACE_SelfActions {
    //         class GVAR(clearEffects) {
    //             displayName = "Clear Effects";
    //             icon = "";

    //             condition = QUOTE(isTouchingGround _player and {_player call FUNC(hasJetpack)});
    //             statement = QUOTE(_player call FUNC(clearEffects));
    //         };
    //     };
    //     class ACE_Actions {
    //         class ACE_MainActions {
    //             class GVAR(refuelFromBody) {
    //                 displayName = "Take fuel from %1";
    //                 icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";

    //                 distance = 1.75;

    //                 condition = QUOTE(call FUNC(canRefuelFromBody));
    //                 statement = QUOTE(call FUNC(refuelFromObject));
    //                 modifierFunction = QUOTE(call FUNC(modifyInteraction));
    //             };

    //             class GVAR(refuelTarget): GVAR(refuelFromBody) {
    //                 displayName = "Refuel %1";
    //                 condition = QUOTE(call FUNC(canRefuelTarget));
    //                 statement = QUOTE(call FUNC(refuelTarget));
    //             };
    //         };
    //     };
    // };

    class Helicopter;
    class ParachuteBase: Helicopter {
        class ACE_SelfActions {
            class ACE_CutParachute {
                condition = QUOTE(_target getVariable [ARR_2('ace_parachute_canCut',false)] or _player call FUNC(hasJetpack));
            };
        };
    };

    class Land_WaterTank_F;
    class ls_resupply_jetpackFuel: Land_WaterTank_F {
        scope = 2;
        author = AUTHOR;
        displayName = "09: Jetpack Fuel Tank";

        editorCategory = "ls_edcat_statics";
        editorSubcategory = "ls_edsubcat_resupply";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_WaterTank_F.jpg";

        model = "\A3\Structures_F\Items\Vessels\WaterTank_F.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {};

        ace_cargo_canLoad = 1;
        ace_cargo_size = 2;
        ace_cargo_noRename = 1;

        // For if/when the property is renamed
        ace_field_rations_waterSupply = 0;
        acex_field_rations_waterSupply = 0;
    };
};
