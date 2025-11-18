class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class driver_Quadbike;
        class Para_Pilot;
        class AmovPercMstpSnonWnonDnon;

        class ls_driver_105kLancer_state: driver_Quadbike {
            file = QPATHTOF(data\vehicle\105kLancer\ls_driver_105kLancer.rtm);
        };

        class ls_driver_105kLancerAttack_state: Para_Pilot {
            file = QPATHTOF(data\vehicle\105kLancer\ls_driver_105kLancer_attack.rtm);
        };

        class ls_driver_barc_state: driver_Quadbike {
            file = QPATHTOF(data\vehicle\barc\ls_driver_barc.rtm);
        };

        class ls_pilot_z95_state: Crew {
            file = QPATHTOF(data\vehicle\z95\ls_pilot_z95.rtm);
            looped = 0;
            showWeaponAim = 1;
            disableWeapons = 1;
            disableWeaponsLong = 1;
            variantsAI[] = {};
            speed = 0.4;
            ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
            connectFrom[] = {};
            interpolateFrom[] = {};
            InterpolateTo[] = {"Unconscious", 0.1};
            lefthandIKCurve[] = {1};
            righthandIKCurve[] = {1};
            preload = 0;
        };

        class ls_driver_mynock_state: Para_Pilot {
            file = QPATHTOF(data\vehicle\mynock\ls_driver_mynock.rtm);
        };

        class ls_gunner_j10_state: Crew {
            file = QPATHTOF(data\vehicle\j10\ls_gunner_j10.rtm);
            looped = 0;
            showWeaponAim = 1;
            disableWeapons = 1;
            disableWeaponsLong = 1;
            variantsAI[] = {};
            speed = 0.4;
            ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
            connectFrom[] = {};
            interpolateFrom[] = {};
            InterpolateTo[] = {"Unconscious", 0.1};
            lefthandIKCurve[] = {1}; // These values define how strictly it follows the HandAnimName values, 0 being not at all, 1 being strictly.
            righthandIKCurve[] = {1};
            preload = 0;
        };
        class ls_reload_j10_state: ls_gunner_j10_state {
            file = QPATHTOF(data\vehicle\j10\ls_reload_j10.rtm);
            speed = -6;
        };

        class ls_gunner_mrbc_state: Crew {
            file = QPATHTOF(data\vehicle\mrbc\ls_gunner_mrbc.rtm);
            looped = 0;
            showWeaponAim = 1;
            disableWeapons = 1;
            disableWeaponsLong = 1;
            variantsAI[] = {};
            speed = 0.4;
            ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
            connectFrom[] = {};
            interpolateFrom[] = {};
            InterpolateTo[] = {"Unconscious", 0.1};
            lefthandIKCurve[] = {1};
            righthandIKCurve[] = {1};
            preload = 0;
        };

        class ls_droid_folded: AmovPercMstpSnonWnonDnon {
            file = QPATHTOF(data\battledroids\ls_droid_folded.rtm); // Made by Schlabbie
            speed = -1e+010;
            looped = 1;
            interpolateFrom[] = {};
            interpolateTo[] = {};
        };
    };
};
