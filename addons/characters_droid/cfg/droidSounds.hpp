class SoundBleeding { breath[] = {}; };
class SoundBreath { breath[] = {}; };
class SoundBurning { breath[] = {}; };
class SoundChoke { breath[] = {}; };
class SoundDrown { breath[] = {}; };
class SoundInjured { breath[] = {}; };
class SoundRecovered { breath[] = {}; };
class SoundEnvironExt {
    normalExt[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    normal[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    road[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    rock[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    water[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    gravel[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    gravel2[] = {
        {QPATHTOEF(sounds,characters\b1\step_dirt1.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt2.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt3.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt4.wss), 0.562, 1}
    };
    sand[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    drygrass[] = {{QPATHTOEF(sounds,characters\b1\step_dirt1.wss), 0.562, 1},};
    grass[] = {{QPATHTOEF(sounds,characters\b1\step_grass.wss), 0.562, 1},};
    forest[] = {
        {QPATHTOEF(sounds,characters\b1\step_dirt1.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt2.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt3.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt4.wss), 0.562, 1}
    };
    mud[] = {
        {QPATHTOEF(sounds,characters\b1\step_dirt1.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt2.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt3.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt4.wss), 0.562, 1}
    };
    wood[] = {{QPATHTOEF(sounds,characters\b1\step_wood.wss), 0.562, 1}};
    wood_int[] = {{QPATHTOEF(sounds,characters\b1\step_wood.wss), 0.562, 1}};
    carpet[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    concrete_int[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    concrete_ext[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    metal[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    steel[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    hallway[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    dirt[] = {
        {QPATHTOEF(sounds,characters\b1\step_dirt1.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt2.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt3.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt4.wss), 0.562, 1}
    };
    parkety[] = {
        {QPATHTOEF(sounds,characters\b1\step_dirt1.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt2.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt3.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt4.wss), 0.562, 1}
    };
    wave_plate[] = {
        {QPATHTOEF(sounds,characters\b1\step_dirt1.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt2.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt3.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt4.wss), 0.562, 1}
    };
    lepenka[] = {
        {QPATHTOEF(sounds,characters\b1\step_dirt1.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt2.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt3.wss), 0.562, 1},
        {QPATHTOEF(sounds,characters\b1\step_dirt4.wss), 0.562, 1}
    };
    snow[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
    crawl[] = {{QPATHTOEF(sounds,characters\b1\step.wss), 0.562, 1}};
};
class SoundEquipment {
    soldier[] = {
        {"walk", {QPATHTOF(cis\data\audio\walk\b1\Step1.wss), 2, 1, 15}},
        {"walk", {QPATHTOF(cis\data\audio\walk\b1\Step2.wss), 2, 1, 15}},
        {"walk", {QPATHTOF(cis\data\audio\walk\b1\Step3.wss), 2, 1, 15}},
        {"walk", {QPATHTOF(cis\data\audio\walk\b1\Step4.wss), 2, 1, 15}},
        {"tactical", {QPATHTOF(cis\data\audio\walk\b1\Step1.wss), 2, 1, 15}},
        {"tactical", {QPATHTOF(cis\data\audio\walk\b1\Step2.wss), 2, 1, 15}},
        {"tactical", {QPATHTOF(cis\data\audio\walk\b1\Step3.wss), 2, 1, 15}},
        {"tactical", {QPATHTOF(cis\data\audio\walk\b1\Step4.wss), 2, 1, 15}},
        {"run", {QPATHTOF(cis\data\audio\walk\b1\Step1.wss), 2, 1, 30}},
        {"run", {QPATHTOF(cis\data\audio\walk\b1\Step2.wss), 2, 1, 30}},
        {"run", {QPATHTOF(cis\data\audio\walk\b1\Step3.wss), 2, 1, 30}},
        {"run", {QPATHTOF(cis\data\audio\walk\b1\Step4.wss), 2, 1, 30}},
        {"sprint", {QPATHTOF(cis\data\audio\walk\b1\Step1.wss), 2, 1, 45}},
        {"sprint", {QPATHTOF(cis\data\audio\walk\b1\Step2.wss), 2, 1, 45}},
        {"sprint", {QPATHTOF(cis\data\audio\walk\b1\Step3.wss), 2, 1, 45}},
        {"sprint", {QPATHTOF(cis\data\audio\walk\b1\Step4.wss), 2, 1, 45}}
    };
};
