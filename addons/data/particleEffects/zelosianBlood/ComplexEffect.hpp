class ls_impactZelosianBlood {
    class Blood {
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "ls_zelosianBlood";
    };

    class Blood1: Blood {
        lifeTime = 0.65;
        type = "ls_zelosianBlood1";
    };

    class Blood2: Blood {
        lifeTime = 0.4;
        type = "ls_zelosianBlood2";
    };

    class Blood3: Blood2 {
        type = "ls_zelosianBlood3";
    };

    class BloodMist: Blood {
        lifeTime = 1;
        MoveVelocityVar[] = {0, 0, 0};
        type = "ls_zelosianBloodMist";
    };

    class BloodUnderwater1: Blood2 {
        type = "ls_zelosianBloodUnderwater1";
    };
};
