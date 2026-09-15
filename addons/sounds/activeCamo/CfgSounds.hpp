class ls_activeCamo_activate {
    name = CSTRING(activeCamo_activate);
    sound[] = {QPATHTOF(activeCamo\activation.wss), 3, 1, 10};
    titles[] = {0, ""};
};

class ls_activeCamo_deactivate: ls_activeCamo_activate {
    name = CSTRING(activeCamo_deactivate);
    sound[] = {QPATHTOF(activeCamo\deactivation.wss), 3, 1, 10};
};

class ls_activeCamo_loop {
    name = CSTRING(activeCamo_loop);
    sound[] = {QPATHTOF(activeCamo\loop.wss), 5, 1, 10};
    titles[] = {0, ""};
    duration = 8;
};
