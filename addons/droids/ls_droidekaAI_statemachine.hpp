// Manual transitions applied to this statemachine
//  - None
class ls_droidekaAI_statemachine {
    list = QUOTE(call FUNC(getDroidekas));
    skipNull = 1;

    class Idle {
        onState = "";
        class InCombat {
            targetState = "Combat";
            condition = QUOTE(!([ARR_2(_this,DROIDEKA_SAFE_DISTANCE)] call EFUNC(common,isSafe)));
        };
    };

    class Combat {
        onState = QUOTE(call FUNC(droideka_combat));
        class IsSafe {
            targetState = "Idle";
            condition = QUOTE([ARR_2(_this,DROIDEKA_SAFE_DISTANCE)] call EFUNC(common,isSafe));
        };
    };
};
