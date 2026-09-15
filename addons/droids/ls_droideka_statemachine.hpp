// Manual transitions applied to this statemachine
//  - None
class ls_droideka_statemachine {
    list = QUOTE(call FUNC(getDroidekas));
    skipNull = 1;

    class Idle {
        onState = "";
        class IsSprinting {
            targetState = "Sprinting";
            condition = QUOTE(call EFUNC(common,isSprinting));
        };
    };

    class Sprinting {
        onStateEntered = QUOTE(call FUNC(deactivateShield));
        onStateLeaving = QUOTE(call FUNC(activateShield));
        class StoppedSprinting {
            targetState = "Idle";
            condition = QUOTE(!(call EFUNC(common,isSprinting)));
        };
    };
};
