class CfgVoice {
    voices[] += {
        "ls_voice_b1Droid",
        "ls_voice_none"
    };

    class ls_voice_b1Droid {
        scope = 2;
        author = AUTHOR;
        displayName = ECSTRING(characters_droid,b1);
        protocol = "RadioProtocolENG";
        directories[] = {
            QPATHTOEF(dubbing,data\b1Droid\),
            QPATHTOEF(dubbing,data\b1Droid\)
        };
        identityTypes[] = {"ls_b1BattleDroid"};
        variants[] = {0.95, 1, 1.05};
        icon = QPATHTOEF(data,flags\flag_cis_ca.paa);
        voiceType = "";
    };

    class ls_voice_none {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(noVoice);
        protocol = "ls_RadioProtocolNoRadio";
        directories[] = {"", ""};
        identityTypes[] = {"ls_voice_none"};
        variants[] = {1};
        icon = "\a3\Ui_f\data\Map\Markers\Flags\nato_ca.paa";
        voiceType = "";
    };
};
