// Vanilla module uses specific naming scheme we have to follow for it to work
#define CIVILIAN_PRESENCE(CLASS_NAME) \
    class DOUBLES(CivilianPresence,CLASS_NAME): CLASS_NAME { \
        scope = 1; \
        scopeCurator = 0; \
        fsmDanger = "A3\Modules_F_Tacops\Ambient\CivilianPresence\FSM\danger.fsm"; \
        fsmFormation = ""; \
    }
