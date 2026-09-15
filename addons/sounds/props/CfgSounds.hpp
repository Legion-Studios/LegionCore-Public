class ls_door1_open {
    name = CSTRING(door_open);
    sound[] = {QPATHTOF(props\door_open.wss), 10, 1, 250};
    titles[] = {0, ""};
    duration = 1;
};

class ls_door1_close: ls_door1_open {
    name = CSTRING(door_close);
    sound[] = {QPATHTOF(props\door_close.wss), 10, 1, 250};
};

class ls_alarm_01 {
    name = CSTRING(alarm_01);
    sound[] = {QPATHTOF(props\alarm_1.wss), 1, 1, 200};
    titles[] = {};
};
class ls_alarm_02 {
    name = CSTRING(alarm_02);
    sound[] = {QPATHTOF(props\alarm_2.wss), 1, 1, 200};
    titles[] = {};
};

class ls_alarm_intruder {
    name = CSTRING(alarm_intruder);
    sound[] = {QPATHTOF(props\intruder_alarm.wss), 1, 1, 200};
    titles[] = {};
};

class ls_siren_01 {
    name = CSTRING(siren_01);
    sound[] = {QPATHTOF(props\danger_siren.wss), 1, 1, 200};
    titles[] = {};
};

class ls_radioChatter_01 {
    name = CSTRING(radioChatter_01);
    sound[] = {QPATHTOF(props\radio_chatter_republic.wss), 1, 1, 50};
    titles[] = {0, CSTRING(radioChatter_01_titles)};
};

class ls_rookiesRadio {
    name = CSTRING(rookiesRadio);
    sound[] = {QPATHTOF(props\rookies_electric_boogaloo.wss), 1, 1, 50};
    titles[] = {};
};
