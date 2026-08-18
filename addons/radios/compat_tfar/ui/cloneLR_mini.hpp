class GVAR(cloneLR_mini): GVAR(cloneLR) {
    idd = IDD_CloneLR_mini;
    onLoad = QUOTE([ARR_2(_this select 0,'CloneLR_mini')] call FUNC(onLoad));
    onUnload = QUOTE(QQGVAR(CloneLR_mini) call FUNC(onUnload));

    class background: background {
        text = QPATHTOEF(radios,data\ui\cloneLR_mini_ca.paa);
    };
};
