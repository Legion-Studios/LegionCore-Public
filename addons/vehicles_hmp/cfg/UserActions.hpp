class UserActions {
    class EGVAR(impulsor,impulse) {
        displayName = "Impulse";
        position = "pilotview";
        radius = 5;
        onlyforplayer = 0;
        condition = QUOTE(ls_player == currentPilot this and {this call EFUNC(impulsor,canImpulse)});
        statement = QUOTE([ARR_2(this,1)] call EFUNC(impulsor,impulse));
    };
    class EGVAR(impulsor,repulse): EGVAR(impulsor,impulse) {
        displayName = "Repulse";
        statement = QUOTE([ARR_2(this,-1)] call EFUNC(impulsor,impulse));
    };
};
