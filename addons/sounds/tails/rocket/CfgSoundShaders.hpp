class ls_rocket_tailInterior_SoundShader {
    samples[] = {{QPATHTOF(tails\rocket\tailMeadows1.wav), 1}};
    volume = "interior";
    range = 500;
    limitation = 0;
};
class ls_rocket_tailTrees_SoundShader {
    samples[] = {{QPATHTOF(tails\rocket\tailMeadows1.wss), 1}};
    volume = "(1 - interior / 1.4) * trees / 3";
    range = 1800;
    limitation = 1;
};
class ls_rocket_tailForest_SoundShader {
    samples[] = {{QPATHTOF(tails\rocket\tailMeadows1.wss), 1}};
    volume = "(1 - interior / 1.4) * forest / 3";
    range = 1800;
    limitation = 1;
};
class ls_rocket_tailMeadows_SoundShader {
    samples[] = {{QPATHTOF(tails\rocket\tailMeadows1.wss), 1}};
    volume = "(1 - interior / 1.4) * (meadows / 2 max sea / 2) / 3";
    range = 1800;
    limitation = 1;
};
class ls_rocket_tailHouses_SoundShader {
    samples[] = {{QPATHTOF(tails\rocket\tailMeadows1.wss), 1}};
    volume = "(1 - interior / 1.4) * houses / 3";
    range = 1200;
    limitation = 1;
};
