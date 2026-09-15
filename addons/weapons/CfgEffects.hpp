class ls_counterMeasureFlare_red {
    class Cmeasures1 {
        intensity = 1;
        interval = 1;
        lifeTime = 4.5;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ls_counterMeasure1_red";
    };

    class Cmeasures1L: Cmeasures1 {
        qualityLevel = 0;
        type = "ls_counterMeasure1L_red";
    };

    class Cmeasures1M: Cmeasures1 {
        qualityLevel = 1;
        type = "ls_counterMeasure1M_red";
    };

    class Cmeasures2 {
        intensity = 1;
        interval = 1;
        lifeTime = 3.2;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "ls_counterMeasure2_red";
    };

    class Light1 {
        intensity = 1;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        simulation = "light";
        type = "ls_counterMeasure_red";
    };
};

class ls_counterMeasureChaff_red: ls_counterMeasureFlare_red {
    class Cmeasures1: Cmeasures1 {
        lifeTime = 8.5;
    };

    class Cmeasures1L: Cmeasures1L {
        lifeTime = 8.5;
    };

    class Cmeasures1M: Cmeasures1M {
        lifeTime = 8.5;
    };

    class Cmeasures2: Cmeasures2 {
        lifeTime = 7.2;
    };

    class Cmeasures3: Cmeasures2 {
        lifeTime = 0.5;
        type = "ls_counterMeasure3_red";
    };

    class Light1: Light1 {
        lifeTime = 7;
    };
};

class ls_counterMeasureFlare_yellow: ls_counterMeasureFlare_red {
    class Cmeasures1: Cmeasures1 {
        type = "ls_counterMeasure1_yellow";
    };

    class Cmeasures1L: Cmeasures1L {
        type = "ls_counterMeasure1L_yellow";
    };

    class Cmeasures1M: Cmeasures1M {
        type = "ls_counterMeasure1M_yellow";
    };

    class Cmeasures2: Cmeasures2 {
        type = "ls_counterMeasure2_yellow";
    };

    class Light1: Light1 {
        type = "ls_counterMeasure_yellow";
    };
};

class ls_counterMeasureChaff_yellow: ls_counterMeasureChaff_red {
    class Cmeasures1: Cmeasures1 {
        type = "ls_counterMeasure1_yellow";
    };

    class Cmeasures1L: Cmeasures1L {
        type = "ls_counterMeasure1L_yellow";
    };

    class Cmeasures1M: Cmeasures1M {
        type = "ls_counterMeasure1M_yellow";
    };

    class Cmeasures2: Cmeasures2 {
        type = "ls_counterMeasure2_yellow";
    };

    class Cmeasures3: Cmeasures3 {
        type = "ls_counterMeasure3_yellow";
    };

    class Light1: Light1 {
        type = "ls_counterMeasure_yellow";
    };
};

class ls_counterMeasureFlare_blue: ls_counterMeasureFlare_red {
    class Cmeasures1: Cmeasures1 {
        type = "ls_counterMeasure1_blue";
    };

    class Cmeasures1L: Cmeasures1L {
        type = "ls_counterMeasure1L_blue";
    };

    class Cmeasures1M: Cmeasures1M {
        type = "ls_counterMeasure1M_blue";
    };

    class Cmeasures2: Cmeasures2 {
        type = "ls_counterMeasure2_blue";
    };

    class Light1: Light1 {
        type = "ls_counterMeasure_blue";
    };
};

class ls_counterMeasureChaff_blue: ls_counterMeasureChaff_red {
    class Cmeasures1: Cmeasures1 {
        type = "ls_counterMeasure1_blue";
    };

    class Cmeasures1L: Cmeasures1L {
        type = "ls_counterMeasure1L_blue";
    };

    class Cmeasures1M: Cmeasures1M {
        type = "ls_counterMeasure1M_blue";
    };

    class Cmeasures2: Cmeasures2 {
        type = "ls_counterMeasure2_blue";
    };

    class Cmeasures3: Cmeasures3 {
        type = "ls_counterMeasure3_blue";
    };

    class Light1: Light1 {
        type = "ls_counterMeasure_blue";
    };
};

class ls_counterMeasureFlare_green: ls_counterMeasureFlare_red {
    class Cmeasures1: Cmeasures1 {
        type = "ls_counterMeasure1_green";
    };

    class Cmeasures1L: Cmeasures1L {
        type = "ls_counterMeasure1L_green";
    };

    class Cmeasures1M: Cmeasures1M {
        type = "ls_counterMeasure1M_green";
    };

    class Cmeasures2: Cmeasures2 {
        type = "ls_counterMeasure2_green";
    };

    class Light1: Light1 {
        type = "ls_counterMeasure_green";
    };
};

class ls_counterMeasureChaff_green: ls_counterMeasureChaff_red {
    class Cmeasures1: Cmeasures1 {
        type = "ls_counterMeasure1_green";
    };

    class Cmeasures1L: Cmeasures1L {
        type = "ls_counterMeasure1L_green";
    };

    class Cmeasures1M: Cmeasures1M {
        type = "ls_counterMeasure1M_green";
    };

    class Cmeasures2: Cmeasures2 {
        type = "ls_counterMeasure2_green";
    };

    class Cmeasures3: Cmeasures3 {
        type = "ls_counterMeasure3_green";
    };

    class Light1: Light1 {
        type = "ls_counterMeasure_green";
    };
};

class ls_counterMeasureFlare_cyan: ls_counterMeasureFlare_red {
    class Cmeasures1: Cmeasures1 {
        type = "ls_counterMeasure1_cyan";
    };

    class Cmeasures1L: Cmeasures1L {
        type = "ls_counterMeasure1L_cyan";
    };

    class Cmeasures1M: Cmeasures1M {
        type = "ls_counterMeasure1M_cyan";
    };

    class Cmeasures2: Cmeasures2 {
        type = "ls_counterMeasure2_cyan";
    };

    class Light1: Light1 {
        type = "ls_counterMeasure_cyan";
    };
};

class ls_counterMeasureChaff_cyan: ls_counterMeasureChaff_red {
    class Cmeasures1: Cmeasures1 {
        type = "ls_counterMeasure1_cyan";
    };

    class Cmeasures1L: Cmeasures1L {
        type = "ls_counterMeasure1L_cyan";
    };

    class Cmeasures1M: Cmeasures1M {
        type = "ls_counterMeasure1M_cyan";
    };

    class Cmeasures2: Cmeasures2 {
        type = "ls_counterMeasure2_cyan";
    };

    class Cmeasures3: Cmeasures3 {
        type = "ls_counterMeasure3_cyan";
    };

    class Light1: Light1 {
        type = "ls_counterMeasure_cyan";
    };
};

class ls_counterMeasureFlare_purple: ls_counterMeasureFlare_red {
    class Cmeasures1: Cmeasures1 {
        type = "ls_counterMeasure1_purple";
    };

    class Cmeasures1L: Cmeasures1L {
        type = "ls_counterMeasure1L_purple";
    };

    class Cmeasures1M: Cmeasures1M {
        type = "ls_counterMeasure1M_purple";
    };

    class Cmeasures2: Cmeasures2 {
        type = "ls_counterMeasure2_purple";
    };

    class Light1: Light1 {
        type = "ls_counterMeasure_purple";
    };
};

class ls_counterMeasureChaff_purple: ls_counterMeasureChaff_red {
    class Cmeasures1: Cmeasures1 {
        type = "ls_counterMeasure1_purple";
    };

    class Cmeasures1L: Cmeasures1L {
        type = "ls_counterMeasure1L_purple";
    };

    class Cmeasures1M: Cmeasures1M {
        type = "ls_counterMeasure1M_purple";
    };

    class Cmeasures2: Cmeasures2 {
        type = "ls_counterMeasure2_purple";
    };

    class Cmeasures3: Cmeasures3 {
        type = "ls_counterMeasure3_purple";
    };

    class Light1: Light1 {
        type = "ls_counterMeasure_purple";
    };
};
