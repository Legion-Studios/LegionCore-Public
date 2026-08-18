class GVAR(cloneLR_commando): GVAR(cloneLR) {
    idd = IDD_CloneLR_commando;
    onLoad = QUOTE([ARR_2(_this select 0,'cloneLR_commando')] call FUNC(onLoad));
    onUnload = QUOTE(QQGVAR(cloneLR_commando) call FUNC(onUnload));

    class background: background {
        text = QPATHTOEF(radios,data\ui\cloneLR_commando_ca.paa);
    };
};
