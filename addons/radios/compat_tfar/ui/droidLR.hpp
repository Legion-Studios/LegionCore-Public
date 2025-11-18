class GVAR(droidLR): GVAR(cloneLR) {
    idd = IDD_DroidLR;
    onLoad = QUOTE([ARR_2(_this select 0,'droidLR')] call FUNC(onLoad));
    onUnload = QUOTE(QQGVAR(droidLR) call FUNC(onUnload));

    class background: background {
        text = QPATHTOEF(radios,data\ui\droidLR_ca.paa);
    };
};
