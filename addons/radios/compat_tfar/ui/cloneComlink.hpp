class GVAR(cloneComlink) {
    idd = IDD_CloneComlink;
    movingEnable = 1;

    onLoad = QUOTE([ARR_2(_this select 0,'cloneComlink')] call FUNC(onLoad));
    onUnload = QUOTE([ARR_2(QQGVAR(cloneComlink),false)] call FUNC(onUnload));

    objects[] = {};
    controls[] = {
        "background", "enter", "edit",
        "channel_edit", "clear", "prev_channel",
        "next_channel", "volume_Switch",
        "stereo", "additional", "speakers"
    };
    controlsBackground[] = {};
    class background: RscBackPicture {
        idc = TFAR_IDC_BACKGROUND;
        text = QPATHTOEF(radios,data\ui\cloneComlink_ca.paa);
        x = QUOTE(safeZoneX + safeZoneW * -0.09667968);
        y = QUOTE(safeZoneY + safeZoneH * 0.10416667);
        w = QUOTE(safeZoneW * 0.4609375);
        h = QUOTE(safeZoneH * 0.79340278);
        moving = 1;
    };
    class channel_edit: RscEditLCD {
        idc = TFAR_IDC_CHANNEL_SR;
        moving = 1;
        x = QUOTE(safeZoneX + safeZoneW * 0.111875);
        y = QUOTE(safeZoneY + safeZoneH * 0.19);
        w = QUOTE(safeZoneW * 0.045);
        h = QUOTE(safeZoneH * 0.04444445);
        font = "ls_republic";
        shadow = 2;
        tooltip = "$STR_tfar_core_current_channel";
        canModify = 0;
    };
    class edit: RscEditLCD {
        idc = TFAR_IDC_EDIT_SR;
        moving = 1;
        x = QUOTE(safeZoneX + safeZoneW * 0.094375);
        y = QUOTE(safeZoneY + safeZoneH * 0.23888889);
        w = QUOTE(safeZoneW * 0.08);
        h = QUOTE(safeZoneH * 0.05);
        font = "ls_republic";
        shadow = 2;
        tooltip = "$STR_tfar_core_current_freq";
        canModify = 1;
    };
    class enter: HiddenButton {
        idc = IDC_RADIO_ENTER;
        x = QUOTE(safeZoneX + safeZoneW * 0.11914063);
        y = QUOTE(safeZoneY + safeZoneH * 0.75);
        w = QUOTE(safeZoneW * 0.02929688);
        h = QUOTE(safeZoneH * 0.09375);
        tooltip = "$STR_tfar_core_set_frequency";
        onButtonClick = ENTER_BUTTON_SR;
    };
    class clear: HiddenButton {
        idc = IDC_RADIO_CLEAR;
        x = QUOTE(safeZoneX + safeZoneW * 0.09667969);
        y = QUOTE(safeZoneY + safeZoneH * 0.62847223);
        w = QUOTE(safeZoneW * 0.02539063);
        h = QUOTE(safeZoneH * 0.05034723);
        tooltip = "$STR_tfar_core_clear_frequency";
        action = CLEAR_CHANNEL_SR(IDD_CloneComlink);
    };
    class volume_Switch: HiddenRotator {
        idc = IDC_RADIO_INCREASE_VOLUME;
        x = QUOTE(safeZoneX + safeZoneW * 0.09667969);
        y = QUOTE(safeZoneY + safeZoneH * 0.43402778);
        w = QUOTE(safeZoneW * 0.07421875);
        h = QUOTE(safeZoneH * 0.05034723);
        tooltip = "$STR_tfar_core_rotator_volume";
        // left click increases, right click decreases
        onMouseButtonDown = "[_this select 1, false] call TFAR_fnc_setVolumeViaDialog;";
    };
    class stereo: HiddenButton {
        idc = IDC_RADIO_STEREO;
        x = QUOTE(safeZoneX + safeZoneW * 0.14550782);
        y = QUOTE(safeZoneY + safeZoneH * 0.62847223);
        w = QUOTE(safeZoneW * 0.02539063);
        h = QUOTE(safeZoneH * 0.05034723);
        action = STEREO_BUTTON_SR;
        tooltip = "$STR_tfar_core_stereo_settings";
    };
    class additional: HiddenButton {
        idc = IDC_RADIO_ADDITIONAL;
        x = QUOTE(safeZoneX + safeZoneW * 0.14550782);
        y = QUOTE(safeZoneY + safeZoneH * 0.53125);
        w = QUOTE(safeZoneW * 0.02539063);
        h = QUOTE(safeZoneH * 0.05034723);
        tooltip = "$STR_tfar_core_set_additional";
        action = ADDITIONAL_BUTTON_SR;
    };
    class speakers: HiddenButton {
        idc = IDC_RADIO_SPEAKERS;
        x = QUOTE(safeZoneX + safeZoneW * 0.09667969);
        y = QUOTE(safeZoneY + safeZoneH * 0.53125);
        w = QUOTE(safeZoneW * 0.02539063);
        h = QUOTE(safeZoneH * 0.05034723);
        tooltip = "$STR_tfar_core_speakers_settings_true";
        action = SPEAKERS_BUTTON_SR;
    };
    class next_channel: HiddenButton {
        idc = IDC_RADIO_NEXT_CHANNEL;
        x = QUOTE(safeZoneX + safeZoneW * 0.14550782);
        y = QUOTE(safeZoneY + safeZoneH * 0.33680556);
        w = QUOTE(safeZoneW * 0.02539063);
        h = QUOTE(safeZoneH * 0.05034723);
        tooltip = "$STR_tfar_core_next_channel";
        action = "[1, false] call TFAR_fnc_setChannelViaDialog;";
    };
    class prev_channel: HiddenButton {
        idc = IDC_RADIO_PREVIOUS_CHANNEL;
        x = QUOTE(safeZoneX + safeZoneW * 0.09667969);
        y = QUOTE(safeZoneY + safeZoneH * 0.33680556);
        w = QUOTE(safeZoneW * 0.02539063);
        h = QUOTE(safeZoneH * 0.05034723);
        tooltip = "$STR_tfar_core_previous_channel";
        action = "[0, false] call TFAR_fnc_setChannelViaDialog;";
    };
};

class GVAR(cloneComlink_aurebesh): GVAR(cloneComlink) {
    class channel_edit: channel_edit {
        font = "ls_aurebesh";
    };
    class edit: edit {
        font = "ls_aurebesh";
    };
};
