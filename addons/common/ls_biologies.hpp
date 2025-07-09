class ls_biologies {
    class biology_base {
        scope = 0;
        type = "nearhuman";
        isOrganic = 1;
        condition = "false";
        bloodModels[] = {
            "z\ace\addons\medical_blood\data\ace_drop_1.p3d",
            "z\ace\addons\medical_blood\data\ace_drop_2.p3d",
            "z\ace\addons\medical_blood\data\ace_drop_3.p3d",
            "z\ace\addons\medical_blood\data\ace_drop_4.p3d"
        };
        priority = 0;
    };

    class human: biology_base {
        scope = 2;
        // Condition can be false because human is assumed by default
    };

    class droid: biology_base {
        scope = 2;
        type = "droid";
        isOrganic = 0;
        condition = QUOTE(call FUNC(biologyCondition_isDroid));
        bloodModels[] = {
            QPATHTOEF(props,bloodPools\ls_prop_bloodPool_black1.p3d),
            QPATHTOEF(props,bloodPools\ls_prop_bloodPool_black2.p3d),
            QPATHTOEF(props,bloodPools\ls_prop_bloodPool_black3.p3d),
            QPATHTOEF(props,bloodPools\ls_prop_bloodPool_black4.p3d)
        };
        priority = 1;
    };

    class zombie: biology_base {
        scope = 2;
        type = "zombie";
        condition = QUOTE(call FUNC(biologyCondition_isZombie));
        priority = 1;
    };

    class hologram: biology_base {
        scope = 2;
        type = "hologram";
        isOrganic = 0;
        condition = QUOTE(call FUNC(biologyCondition_isHologram));
        bloodModels[] = {};
        priority = 10;
    };

    class vr: hologram {
        type = "vr";
        condition = "'VR' in typeOf (_this#0)";
    };

    class memefor_cannon: human {
        scope = 2;
        condition = "'cannon' in toLowerANSI name (_this#0)";
        bloodModels[] = {
            QPATHTOEF(props,bloodPools\ls_prop_bloodPool_freedom1.p3d),
            QPATHTOEF(props,bloodPools\ls_prop_bloodPool_freedom2.p3d),
            QPATHTOEF(props,bloodPools\ls_prop_bloodPool_freedom3.p3d),
            QPATHTOEF(props,bloodPools\ls_prop_bloodPool_freedom4.p3d)
        };
    };

    class chiss: human {
        scope = 2;
        condition = QUOTE([ARR_2(_this#2,'chiss')] call FUNC(biologyCondition_isAlien));
    };

    class mirialan: human {
        scope = 2;
        condition = QUOTE([ARR_2(_this#2,'mirialan')] call FUNC(biologyCondition_isAlien));
    };

    class zabrak: human {
        scope = 2;
        condition = QUOTE([ARR_2(_this#2,'zabrak')] call FUNC(biologyCondition_isAlien));
    };

    class zelosian: human {
        scope = 2;
        condition = QUOTE([ARR_2(_this#2,'zelosian')] call FUNC(biologyCondition_isAlien));
        bloodModels[] = {
            QPATHTOEF(props,bloodPools\ls_prop_bloodPool_green1.p3d),
            QPATHTOEF(props,bloodPools\ls_prop_bloodPool_green2.p3d),
            QPATHTOEF(props,bloodPools\ls_prop_bloodPool_green3.p3d),
            QPATHTOEF(props,bloodPools\ls_prop_bloodPool_green4.p3d)
        };
    };

     class zeltron: human {
        scope = 2;
        condition = QUOTE([ARR_2(_this#2,'zeltron')] call FUNC(biologyCondition_isAlien));
    };
};
