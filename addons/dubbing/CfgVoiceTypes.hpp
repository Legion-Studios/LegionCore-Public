class CfgVoiceTypes {
    class ls_voice_b1 {
        // UI text
        name = ECSTRING(characters_droid,b1);
        // Reference to CfgVoice
        voices[] = {"ls_voice_b1Droid"};
        // Preview voice played in profile menu.
        // When not defined or incorrect, first entry of CfgVoice >> voices is used instead
        // preview = "myVoiceEN";
        // Alternative CfgVoiceType class searched after this one (in case some params were wrong)
        alternative = "";
    };
    class ls_voice_none {
        name = CSTRING(noVoice);
        voices[] = {"ls_voice_none"};
        alternative = "";
    };
};
