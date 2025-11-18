class CfgVoice {
    voices[] += {
        "ls_voice_b1Droid"
    };

    class ls_voice_b1Droid {
        scope = 2;
        author = AUTHOR;
        displayName = "B1 Battle Droid";
        protocol = "RadioProtocolENG";
        directories[] = {
            QPATHTOEF(dubbing,data\b1Droid\),
            QPATHTOEF(dubbing,data\b1Droid\)
        };
        identityTypes[] = {
            "ls_b1BattleDroid"
        };
        variants[] = {0.95, 1, 1.05};
        icon = QPATHTOEF(data,flags\flag_cis_ca.paa);
        voiceType = "";
    };
};
