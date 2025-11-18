class ls_door1_open {
    name = "Door Open";
    sound[] = {QPATHTOF(props\door_open.wss), 10, 1, 250};
    titles[] = {0, ""};
    duration = 1;
};

class ls_door1_close: ls_door1_open {
    name = "Door Closed";
    sound[] = {QPATHTOF(props\door_close.wss), 10, 1, 250};
};
