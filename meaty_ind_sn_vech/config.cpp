class CfgPatches
{
	class Meaty_Vech_IND_SN_F
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgVehicleClasses
{
	class Meaty_CarSN
	{
		displayName="M_Car (Snow)";
	};
	class Meaty_ArmouredSN
	{
		displayName="M_Armoured (Snow)";
	};
};
class cfgVehicles
{
	class I_MRAP_03_F;
	class Meaty_Strider_SN: I_MRAP_03_F
	{
		_generalMacro="I_MRAP_03_F";
		author="Meatshield";
		scope=2;
		side=2;
		vehicleClass="Meaty_CarSN";
		faction="IND_F";
		displayName="Strider (Snow)";
		crew="Meaty_Crew_IND_SN";
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN_Vech\data\mrap_03_ext_indp_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_IND_SN"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class I_MRAP_03_hmg_F;
	class Meaty_StriderHMG_SN: I_MRAP_03_hmg_F
	{
		_generalMacro="I_MRAP_03_hmg_F";
		author="Meatshield";
		scope=2;
		side=2;
		vehicleClass="Meaty_CarSN";
		faction="IND_F";
		displayName="Strider HMG (Snow)";
		crew="Meaty_Crew_IND_SN";
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN_Vech\data\mrap_03_ext_indp_co.paa",
			"Meaty_IND_SN_Vech\data\turret_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_IND_SN"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class I_MRAP_03_gmg_F;
	class Meaty_StriderGMG_SN: I_MRAP_03_gmg_F
	{
		_generalMacro="I_MRAP_03_gmg_F";
		author="Meatshield";
		scope=2;
		side=2;
		vehicleClass="Meaty_CarSN";
		faction="IND_F";
		displayName="Strider GMG (Snow)";
		crew="Meaty_Crew_IND_SN";
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN_Vech\data\mrap_03_ext_indp_co.paa",
			"Meaty_IND_SN_Vech\data\turret_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_IND_SN"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class I_APC_Wheeled_03_cannon_F;
	class Meaty_Gorgon_SN: I_APC_Wheeled_03_cannon_F
	{
		_generalMacro="I_APC_Wheeled_03_cannon_F";
		author="Meatshield";
		scope=2;
		side=2;
		vehicleClass="Meaty_ArmouredSN";
		faction="IND_F";
		displayName="AFV-4 Gorgon (Snow)";
		crew="Meaty_Crew_IND_SN";
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN_Vech\data\apc_wheeled_03_ext_indp_co.paa",
			"Meaty_IND_SN_Vech\data\apc_wheeled_03_ext2_indp_co.paa",
			"Meaty_IND_SN_Vech\data\rcws30_co.paa",
			"Meaty_IND_SN_Vech\data\apc_wheeled_03_ext_alpha_indp_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_IND_SN"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class I_APC_tracked_03_cannon_F;
	class Meaty_Mora_SN: I_APC_tracked_03_cannon_F
	{
		_generalMacro="I_APC_tracked_03_cannon_F";
		author="Meatshield";
		scope=2;
		side=2;
		vehicleClass="Meaty_ArmouredSN";
		faction="IND_F";
		displayName="FV-720 Mora (Snow)";
		crew="Meaty_Crew_IND_SN";
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN_Vech\data\apc_tracked_03_ext_indp_co.paa",
			"Meaty_IND_SN_Vech\data\apc_tracked_03_ext2_indp_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_IND_SN"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
};
