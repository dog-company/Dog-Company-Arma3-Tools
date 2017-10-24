class CfgPatches {
    class gigga_modules_f_gigga {
        author = "Giggaflop";
        version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = {0,0,1};

        units[] = {
            "Gigga_Module_VcomAI_EnableUnit", 
            "Gigga_Module_VcomAI_DisableUnit"
        };


        requiredAddons[] =
		{
			"A3_UI_F",
			"A3_UI_F_Curator",
			"A3_Functions_F",
			"A3_Functions_F_Curator",
			"A3_Modules_F",
			"A3_Modules_F_Curator",
			"A3_Modules_F_Bootcamp_Misc"
		};
    };
};

#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"