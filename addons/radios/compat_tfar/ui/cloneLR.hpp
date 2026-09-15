class GVAR(cloneLR) {
    idd = IDD_CloneLR;
    movingEnable = 1;

    onLoad = QUOTE([ARR_2(_this select 0,'cloneLR')] call FUNC(onLoad));
    onUnload = QUOTE(QQGVAR(cloneLR) call FUNC(onUnload));

    objects[] = {};
    controls[] = {
        "background", "enter", "edit",
        "channel_edit", "clear",
        "channel01", "channel02", "channel03",
        "channel04", "channel05", "channel06",
        "channel07", "channel08", "channel09",
        "increase_volume", "decrease_volume",
        "stereo", "additional", "speakers"
    };
    controlsBackground[] = {};
    class background: RscBackPicture {
        idc = TFAR_IDC_BACKGROUND;
        text = QPATHTOEF(radios,data\ui\cloneLR_ca.paa);
        x = QUOTE(0.0935937 * safezoneW + safezoneX);
        y = QUOTE(0.0252042 * safezoneH + safezoneY);
        w = QUOTE(0.510056 * safezoneW);
        h = QUOTE(0.942975 * safezoneH);
        moving = 1;
    };
    class channel_edit: RscEditLCD {
        idc = TFAR_IDC_CHANNEL_LR;
        moving = 1;
        x = QUOTE(0.28 * safezoneW + safezoneX);
        y = QUOTE(0.3636 * safezoneH + safezoneY);
        w = QUOTE(0.048 * safezoneW);
        h = QUOTE(0.05335 * safezoneH);
        font = "ls_republic";
        colorText[] = {1, 1, 1, 1};
        shadow = 2;
        tooltip = "$STR_tfar_core_current_channel";
        canModify = 0;
    };
    class edit: RscEditLCD {
        idc = TFAR_IDC_EDIT_LR;
        moving = 1;
        x = QUOTE(0.356037 * safezoneW + safezoneX);
        y = QUOTE(0.363875 * safezoneH + safezoneY);
        w = QUOTE(0.0600188 * safezoneW);
        h = QUOTE(0.055 * safezoneH);
        font = "ls_republic";
        colorText[] = {1, 1, 1, 1};
        shadow = 2;
        tooltip = "$STR_tfar_core_current_freq";
        canModify = 1;
    };
    class enter: HiddenButton {
        idc = IDC_RADIO_ENTER;
        x = QUOTE(0.400869 * safezoneW + safezoneX);
        y = QUOTE(0.470249 * safezoneH + safezoneY);
        w = QUOTE(0.0357 * safezoneW);
        h = QUOTE(0.0378267 * safezoneH);
        tooltip = "$STR_tfar_core_set_frequency";
        onButtonClick = ENTER_BUTTON_LR;
        action = "";
    };
    class clear: HiddenButton {
        idc = IDC_RADIO_CLEAR;
        x = QUOTE(0.263806 * safezoneW + safezoneX);
        y = QUOTE(0.623256 * safezoneH + safezoneY);
        w = QUOTE(0.036975 * safezoneW);
        h = QUOTE(0.0403769 * safezoneH);
        tooltip = "$STR_tfar_core_clear_frequency";
        action = CLEAR_CHANNEL_LR(IDD_CloneLR);
    };
    class increase_volume: HiddenButton {
        idc = IDC_RADIO_INCREASE_VOLUME;
        x = QUOTE(0.4031 * safezoneW + safezoneX);
        y = QUOTE(0.576079 * safezoneH + safezoneY);
        w = QUOTE(0.0312375 * safezoneW);
        h = QUOTE(0.0327265 * safezoneH);
        onMouseButtonDown = INCREASE_VOLUME;
        tooltip = "$STR_tfar_core_increase_volume";
    };
    class decrease_volume: HiddenButton {
        idc = IDC_RADIO_DECREASE_VOLUME;
        x = QUOTE(0.4031 * safezoneW + safezoneX);
        y = QUOTE(0.628356 * safezoneH + safezoneY);
        w = QUOTE(0.0302813 * safezoneW);
        h = QUOTE(0.0323015 * safezoneH);
        onMouseButtonDown = DECREASE_VOLUME;
        tooltip = "$STR_tfar_core_decrease_volume";
    };
    class stereo: HiddenButton {
        idc = IDC_RADIO_STEREO;
        x = QUOTE(0.357725 * safezoneW + safezoneX);
        y = QUOTE(0.627078 * safezoneH + safezoneY);
        w = QUOTE(0.030975 * safezoneW);
        h = QUOTE(0.0318571 * safezoneH);
        action = STEREO_BUTTON_LR;
        tooltip = "$STR_tfar_core_stereo_settings";
    };
    class additional: HiddenButton {
        idc = IDC_RADIO_ADDITIONAL;
        x = QUOTE(0.40131 * safezoneW + safezoneX);
        y = QUOTE(0.523805 * safezoneH + safezoneY);
        w = QUOTE(0.035434 * safezoneW);
        h = QUOTE(0.0385086 * safezoneH);
        tooltip = "$STR_tfar_core_set_additional";
        action = ADDITIONAL_BUTTON_LR;
    };
    class speakers: HiddenButton {
        idc = IDC_RADIO_SPEAKERS;
        x = QUOTE(0.309932 * safezoneW + safezoneX);
        y = QUOTE(0.622912 * safezoneH + safezoneY);
        w = QUOTE(0.0366943 * safezoneW);
        h = QUOTE(0.0420706 * safezoneH);
        tooltip = "$STR_tfar_core_speakers_settings_true";
        action = SPEAKERS_BUTTON_LR;
    };
    class channel01: HiddenButton {
        idc = IDC_RADIO_CHANNEL_01;
        x = QUOTE(0.266994 * safezoneW + safezoneX);
        y = QUOTE(0.472799 * safezoneH + safezoneY);
        w = QUOTE(0.0306 * safezoneW);
        h = QUOTE(0.0378267 * safezoneH);
        action = CHANNEL_BUTTON(0);
        tooltip = "$STR_tfar_core_radio_channel_1";
    };
    class channel02: HiddenButton {
        idc = IDC_RADIO_CHANNEL_02;
        x = QUOTE(0.310344 * safezoneW + safezoneX);
        y = QUOTE(0.474499 * safezoneH + safezoneY);
        w = QUOTE(0.0334688 * safezoneW);
        h = QUOTE(0.0365517 * safezoneH);
        action = CHANNEL_BUTTON(1);
        tooltip = "$STR_tfar_core_radio_channel_2";
    };
    class channel03: HiddenButton {
        idc = IDC_RADIO_CHANNEL_03;
        x = QUOTE(0.356881 * safezoneW + safezoneX);
        y = QUOTE(0.475774 * safezoneH + safezoneY);
        w = QUOTE(0.031875 * safezoneW);
        h = QUOTE(0.0340016 * safezoneH);
        action = CHANNEL_BUTTON(2);
        tooltip = "$STR_tfar_core_radio_channel_3";
    };
    class channel04: HiddenButton {
        idc = IDC_RADIO_CHANNEL_04;
        x = QUOTE(0.266356 * safezoneW + safezoneX);
        y = QUOTE(0.525076 * safezoneH + safezoneY);
        w = QUOTE(0.0306 * safezoneW);
        h = QUOTE(0.0314514 * safezoneH);
        action = CHANNEL_BUTTON(3);
        tooltip = "$STR_tfar_core_radio_channel_4";
    };
    class channel05: HiddenButton {
        idc = IDC_RADIO_CHANNEL_05;
        x = QUOTE(0.310344 * safezoneW + safezoneX);
        y = QUOTE(0.525076 * safezoneH + safezoneY);
        w = QUOTE(0.0328313 * safezoneW);
        h = QUOTE(0.0340016 * safezoneH);
        action = CHANNEL_BUTTON(4);
        tooltip = "$STR_tfar_core_radio_channel_5";
    };
    class channel06: HiddenButton {
        idc = IDC_RADIO_CHANNEL_06;
        x = QUOTE(0.357519 * safezoneW + safezoneX);
        y = QUOTE(0.525076 * safezoneH + safezoneY);
        w = QUOTE(0.0306 * safezoneW);
        h = QUOTE(0.0340016 * safezoneH);
        action = CHANNEL_BUTTON(5);
        tooltip = "$STR_tfar_core_radio_channel_6";
    };
    class channel07: HiddenButton {
        idc = IDC_RADIO_CHANNEL_07;
        x = QUOTE(0.266356 * safezoneW + safezoneX);
        y = QUOTE(0.574378 * safezoneH + safezoneY);
        w = QUOTE(0.0312375 * safezoneW);
        h = QUOTE(0.0340016 * safezoneH);
        action = CHANNEL_BUTTON(6);
        tooltip = "$STR_tfar_core_radio_channel_7";
    };
    class channel08: HiddenButton {
        idc = IDC_RADIO_CHANNEL_08;
        x = QUOTE(0.311938 * safezoneW + safezoneX);
        y = QUOTE(0.575653 * safezoneH + safezoneY);
        w = QUOTE(0.0312375 * safezoneW);
        h = QUOTE(0.0327265 * safezoneH);
        action = CHANNEL_BUTTON(7);
        tooltip = "$STR_tfar_core_radio_channel_8";
    };
    class channel09: HiddenButton {
        idc = IDC_RADIO_CHANNEL_09;
        x = QUOTE(0.358156 * safezoneW + safezoneX);
        y = QUOTE(0.574378 * safezoneH + safezoneY);
        w = QUOTE(0.0312375 * safezoneW);
        h = QUOTE(0.0340016 * safezoneH);
        action = CHANNEL_BUTTON(8);
        tooltip = "$STR_tfar_core_radio_channel_9";
    };
};
