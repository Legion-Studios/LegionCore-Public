class ls_activeCamo_activate {
    name = "Active Camo Activate";
    sound[] = {QPATHTOF(activeCamo\activation.wss), 3, 1, 10};
    titles[] = {0, ""};
};

class ls_activeCamo_deactivate: ls_activeCamo_activate {
    name = "Active Camo Deactivate";
    sound[] = {QPATHTOF(activeCamo\deactivation.wss), 3, 1, 10};
};