class ls_jabiimHelmet_nationalist: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayname = "Jabiimi Nationalist Helmet";

    model = QPATHTOF(helmets\nationalist\ls_helmet_jabiimNationalist.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\nationalist\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\nationalistHelmet_ui_ca.paa);

    class Iteminfo: Iteminfo {
        uniformModel = QPATHTOF(helmets\nationalist\ls_helmet_jabiimNationalist.p3d);
        hiddenselections[] = {"camo1"};
        mass = 10;

        class HitpointsProtectionInfo {
            class Head {
                hitpointname = "HitHead";
                armor = 8;
                passThrough = 0.1;
            };
        };
    };
};
