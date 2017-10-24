class Gigga_VcomAI_Module_Base : Gigga_Module_Base
{
	Category = "Curator";
	curatorCanAttach = 1;
};

class Gigga_Module_VcomAI_EnableUnit : Gigga_VcomAI_Module_Base
{
	scopeCurator = 2;
	displayName = "Enable VcomAI on Unit";
	function = "Gigga_fnc_VcomAIEnableUnit";
	// icon = "\gigga\data_f_gigga\icons\icon_unit.paa";
	// portrait = "\gigga\data_f_gigga\icons\icon_unit.paa";
};

class Gigga_Module_VcomAI_DisableUnit : Gigga_VcomAI_Module_Base
{
	scopeCurator = 2;
	displayName = "Disable VcomAI on Unit";
	function = "Gigga_fnc_VcomAIDisableUnit";
	// icon = "\gigga\data_f_gigga\icons\icon_unit.paa";
	// portrait = "\gigga\data_f_gigga\icons\icon_unit.paa";
};