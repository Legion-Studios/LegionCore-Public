class CfgMagazines {
    class HandGrenade;
    class ls_magazine_grenades_base: HandGrenade {
        scope = 0;
        author = AUTHOR;
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);
    };

    #include "n20\CfgMagazines.hpp"
    #include "thermalDet\CfgMagazines.hpp"

    class Chemlight_green;
    #include "chemlights\CfgMagazines.hpp"
};
