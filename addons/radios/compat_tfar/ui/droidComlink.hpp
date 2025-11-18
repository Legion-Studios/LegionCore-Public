class GVAR(droidComlink): GVAR(cloneComlink) {
    idd = IDD_DroidComlink;
    onLoad = QUOTE([ARR_2(_this select 0,'droidComlink')] call FUNC(onLoad));
    onUnload = QUOTE([ARR_2(QQGVAR(droidComlink),false)] call FUNC(onUnload));

    class background: background {
        text = QPATHTOEF(radios,data\ui\droidComlink_ca.paa);
        x = QUOTE(safeZoneX + safeZoneW * 0.003125);
        y = QUOTE(safeZoneY + safeZoneH * 0.10444445);
        w = QUOTE(safeZoneW * 0.46125);
        h = QUOTE(safeZoneH * 0.79333334);
    };
    class channel_edit: channel_edit {
        x = QUOTE(safeZoneX + safeZoneW * 0.104375);
        y = QUOTE(safeZoneY + safeZoneH * 0.45888889);
        w = QUOTE(safeZoneW * 0.04625);
        h = QUOTE(safeZoneH * 0.03111112);
    };
    class edit: edit {
        x = QUOTE(safeZoneX + safeZoneW * 0.0925);
        y = QUOTE(safeZoneY + safeZoneH * 0.51111112);
        w = QUOTE(safeZoneW * 0.06875);
        h = QUOTE(safeZoneH * 0.04555556);
    };
    class enter: enter {
        x = QUOTE(safeZoneX + safeZoneW * 0.18625);
        y = QUOTE(safeZoneY + safeZoneH * 0.43777778);
        w = QUOTE(safeZoneW * 0.03625);
        h = QUOTE(safeZoneH * 0.13111112);
    };
    class clear: clear {
        x = QUOTE(safeZoneX + safeZoneW * 0.2375);
        y = QUOTE(safeZoneY + safeZoneH * 0.48777778);
        w = QUOTE(safeZoneW * 0.035625);
        h = QUOTE(safeZoneH * 0.03111112);
        action = CLEAR_CHANNEL_SR(IDD_DroidComlink);
    };
    class volume_Switch: volume_Switch {
        x = QUOTE(safeZoneX + safeZoneW * 0.34);
        y = QUOTE(safeZoneY + safeZoneH * 0.43666667);
        w = QUOTE(safeZoneW * 0.035625);
        h = QUOTE(safeZoneH * 0.13222223);
    };
    class stereo: stereo {
        x = QUOTE(safeZoneX + safeZoneW * 0.238125);
        y = QUOTE(safeZoneY + safeZoneH * 0.53777778);
        w = QUOTE(safeZoneW * 0.035625);
        h = QUOTE(safeZoneH * 0.03111112);
    };
    class additional: additional {
        x = QUOTE(safeZoneX + safeZoneW * 0.288125);
        y = QUOTE(safeZoneY + safeZoneH * 0.53777778);
        w = QUOTE(safeZoneW * 0.035625);
        h = QUOTE(safeZoneH * 0.03222223);
    };
    class speakers: speakers {
        x = QUOTE(safeZoneX + safeZoneW * 0.288125);
        y = QUOTE(safeZoneY + safeZoneH * 0.48666667);
        w = QUOTE(safeZoneW * 0.035625);
        h = QUOTE(safeZoneH * 0.03333334);
    };
    class next_channel: next_channel {
        x = QUOTE(safeZoneX + safeZoneW * 0.288125);
        y = QUOTE(safeZoneY + safeZoneH * 0.43666667);
        w = QUOTE(safeZoneW * 0.035625);
        h = QUOTE(safeZoneH * 0.03111112);
    };
    class prev_channel: prev_channel {
        x = QUOTE(safeZoneX + safeZoneW * 0.238125);
        y = QUOTE(safeZoneY + safeZoneH * 0.43777778);
        w = QUOTE(safeZoneW * 0.035625);
        h = QUOTE(safeZoneH * 0.03111112);
    };
};

class GVAR(droidComlink_aurebesh): GVAR(droidComlink) {
    class channel_edit: channel_edit {
        font = "ls_aurebesh";
    };
    class edit: edit {
        font = "ls_aurebesh";
    };
};
