class CfgFaces {
    class Default;
    class Man_A3: Default {
        class Default;
        class ls_default: Default {
            disabled = 1;
            author = AUTHOR;
            head = "KerryHead_A3";
            materialWounded1 = "\A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
            materialWounded2 = "\A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
        };

        class ls_hideHead: Default {
            author = AUTHOR;
            displayName = "Hide Head";

            head = "ls_hideHead";
            identityTypes[] = {"ls_head_hide"};
            // texture = QPATHTOEF(data,textures\blank_ca.paa);
            // textureHL = QPATHTOEF(data,textures\blank_ca.paa);
            // textureHL2 = QPATHTOEF(data,textures\blank_ca.paa);
        };

        class ls_activeCamo: Default {
            author = AUTHOR;
            displayName = "No Face";

            head = "ls_activeCamo";
            identityTypes[] = {"ls_activeCamo"};
            texture = QPATHTOEF(data,textures\blank_ca.paa);
            textureHL = QPATHTOEF(data,textures\blank_ca.paa);
            textureHL2 = QPATHTOEF(data,textures\blank_ca.paa);
            material = QPATHTOEF(data,materials\activeCamo.rvmat);
            materialHL = QPATHTOEF(data,materials\activeCamo.rvmat);
            materialHL2 = QPATHTOEF(data,materials\activeCamo.rvmat);
            materialWounded1 = QPATHTOEF(data,materials\activeCamo.rvmat);
            materialWounded2 = QPATHTOEF(data,materials\activeCamo.rvmat);
        };

        #include "chiss\CfgFaces.hpp"
        #include "clones\CfgFaces.hpp"
        #include "droids\CfgFaces.hpp"
        #include "mirialan\CfgFaces.hpp"
        #include "zabrak\CfgFaces.hpp"
        #include "zelosian\CfgFaces.hpp"
        #include "zeltron\CfgFaces.hpp"
    };
};
