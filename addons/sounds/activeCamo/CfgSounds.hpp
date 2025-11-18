class ls_activeCamo_activate {
    name = "Active Camo Activate";
    sound[] = {QPATHTOF(activeCamo\activation.wss), 3, 1, 10};
    titles[] = {0, ""};
};

class ls_activeCamo_deactivate: ls_activeCamo_activate {
    name = "Active Camo Deactivate";
    sound[] = {QPATHTOF(activeCamo\deactivation.wss), 3, 1, 10};
};

class ls_activeCamo_loop {
    sound[] = {QPATHTOF(activeCamo\loop.wss), 5, 1, 10};
    name = "Active Camo Loop";
    titles[] = {0, ""};
    duration = 8;
};
