class ls_holoprojector_activate {
    name = CSTRING(holoprojector_activate);
    sound[] = {QPATHTOF(holoprojector\activate.wss), 1, 1, 10};
    titles[] = {0, ""};
    duration = 5;
};

class ls_holoprojector_deactivate {
    name = CSTRING(holoprojector_deactivate);
    sound[] = {QPATHTOF(holoprojector\deactivate.wss), 1.5, 1, 10};
    titles[] = {0, ""};
    duration = 1;
};

class ls_holoprojector_loop {
    name = CSTRING(holoprojector_loop);
    sound[] = {QPATHTOF(holoprojector\loop.wss), 1, 1, 10};
    titles[] = {0, ""};
    duration = 11;
};

class ls_holoprojector_refresh {
    name = CSTRING(holoprojector_refresh);
    sound[] = {QPATHTOF(holoprojector\refresh.wss), 2, 1, 10};
    titles[] = {0, ""};
    duration = 3;
};
