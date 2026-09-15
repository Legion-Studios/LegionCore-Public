class ls_sniper_tailInterior_SoundShader {
    samples[] = {{QPATHTOF(tails\sniper\tailInterior1.wss), 1}};
    volume = "interior";
    range = 500;
    limitation = 0;
};

class ls_sniper_tailTrees_SoundShader {
    samples[] = {{QPATHTOF(tails\sniper\tailTrees1.wss), 1}};
    volume = "(1 - interior / 1.4) * trees / 3";
    range = 1800;
    limitation = 1;
};

class ls_sniper_tailForest_SoundShader {
    samples[] = {{QPATHTOF(tails\sniper\tailForest1.wss), 1}};
    volume = "(1 - interior / 1.4) * forest / 3";
    range = 1800;
    limitation = 1;
};

class ls_sniper_tailMeadows_SoundShader {
    samples[] = {{QPATHTOF(tails\sniper\tailMeadows1.wss), 1}};
    volume = "(1 - interior / 1.4) * (meadows / 2 max sea / 2) / 3";
    range = 1800;
    limitation = 1;
};

class ls_sniper_tailHouses_SoundShader {
    samples[] = {{QPATHTOF(tails\sniper\tailInterior1.wss), 1}};
    volume = "(1 - interior / 1.4) * houses / 3";
    range = 1200;
    limitation = 1;
};
