class GVAR(hush98): GVAR(cloneComlink) {
    idd = IDD_Hush98;
    onLoad = QUOTE([ARR_2(_this select 0,'hush98')] call FUNC(onLoad));
    onUnload = QUOTE([ARR_2(QQGVAR(hush98),false)] call FUNC(onUnload));

    class background: background {
        text = QPATHTOEF(radios,data\ui\hush98_ca.paa);
        x = QUOTE(safeZoneX + safeZoneW * 0.003125);
        y = QUOTE(safeZoneY + safeZoneH * 0.10444445);
        w = QUOTE(safeZoneW * 0.46125);
        h = QUOTE(safeZoneH * 0.79333334);
    };
    class channel_edit: channel_edit {
        x = QUOTE(safeZoneX + safeZoneW * 0.19375);
        y = QUOTE(safeZoneY + safeZoneH * 0.16222223);
        w = QUOTE(safeZoneW * 0.08);
        h = QUOTE(safeZoneH * 0.04333334);
    };
    class edit: edit {
        x = QUOTE(safeZoneX + safeZoneW * 0.17625);
        y = QUOTE(safeZoneY + safeZoneH * 0.22777778);
        w = QUOTE(safeZoneW * 0.106875);
        h = QUOTE(safeZoneH * 0.04333334);
    };
    class enter: enter {
        x = QUOTE(safeZoneX + safeZoneW * 0.255625);
        y = QUOTE(safeZoneY + safeZoneH * 0.49777778);
        w = QUOTE(safeZoneW * 0.021875);
        h = QUOTE(safeZoneH * 0.04333334);
    };
    class clear: clear {
        x = QUOTE(safeZoneX + safeZoneW * 0.188125);
        y = QUOTE(safeZoneY + safeZoneH * 0.49777778);
        w = QUOTE(safeZoneW * 0.021875);
        h = QUOTE(safeZoneH * 0.04333334);
        action = CLEAR_CHANNEL_SR(IDD_Hush98);
    };
    class volume_Switch: volume_Switch {
        x = QUOTE(safeZoneX + safeZoneW * 0.213125);
        y = QUOTE(safeZoneY + safeZoneH * 0.31);
        w = QUOTE(safeZoneW * 0.04);
        h = QUOTE(safeZoneH * 0.05666667);
    };
    class stereo: stereo {
        x = QUOTE(safeZoneX + safeZoneW * 0.205625);
        y = QUOTE(safeZoneY + safeZoneH * 0.66888889);
        w = QUOTE(safeZoneW * 0.013125);
        h = QUOTE(safeZoneH * 0.11);
    };
    class additional: additional {
        x = QUOTE(safeZoneX + safeZoneW * 0.24875);
        y = QUOTE(safeZoneY + safeZoneH * 0.66777778);
        w = QUOTE(safeZoneW * 0.013125);
        h = QUOTE(safeZoneH * 0.11);
    };
    class speakers: speakers {
        x = QUOTE(safeZoneX + safeZoneW * 0.226875);
        y = QUOTE(safeZoneY + safeZoneH * 0.69555556);
        w = QUOTE(safeZoneW * 0.013125);
        h = QUOTE(safeZoneH * 0.11);
    };
    class next_channel: next_channel {
        x = QUOTE(safeZoneX + safeZoneW * 0.28375);
        y = QUOTE(safeZoneY + safeZoneH * 0.41333334);
        w = QUOTE(safeZoneW * 0.01625);
        h = QUOTE(safeZoneH * 0.08444445);
    };
    class prev_channel: prev_channel {
        x = QUOTE(safeZoneX + safeZoneW * 0.165625);
        y = QUOTE(safeZoneY + safeZoneH * 0.41111112);
        w = QUOTE(safeZoneW * 0.01625);
        h = QUOTE(safeZoneH * 0.08444445);
    };
};

class GVAR(hush98_aurebesh): GVAR(hush98) {
    class channel_edit: channel_edit {
        font = "ls_aurebesh";
    };
    class edit: edit {
        font = "ls_aurebesh";
    };
};
