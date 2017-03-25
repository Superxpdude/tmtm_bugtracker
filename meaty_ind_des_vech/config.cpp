class CfgPatches
{
	class Meaty_Vech_IND_DES_F
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgVehicleClasses
{
	class Meaty_CarDES
	{
		displayName="M_Car (Desert)";
	};
	class Meaty_ArmouredDES
	{
		displayName="M_Armoured (Desert)";
	};
};
class cfgVehicles
{
	class I_MRAP_03_F;
	class Meaty_Strider_DES: I_MRAP_03_F
	{
		_generalMacro="I_MRAP_03_F";
		author="Meatshield";
		scope=2;
		side=2;
		vehicleClass="Meaty_CarDES";
		faction="IND_F";
		displayName="Strider (Desert)";
		crew="Meaty_Crew_IND_DES";
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_DES_Vech\data\mrap_03_ext_indp_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_IND_DES"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class I_MRAP_03_hmg_F;
	class Meaty_StriderHMG_DES: I_MRAP_03_hmg_F
	{
		_generalMacro="I_MRAP_03_hmg_F";
		author="Meatshield";
		scope=2;
		side=2;
		vehicleClass="Meaty_CarDES";
		faction="IND_F";
		displayName="Strider HMG (Desert)";
		crew="Meaty_Crew_IND_DES";
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_DES_Vech\data\mrap_03_ext_indp_co.paa",
			"Meaty_IND_DES_Vech\data\turret_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_IND_DES"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class I_MRAP_03_gmg_F;
	class Meaty_StriderGMG_DES: I_MRAP_03_gmg_F
	{
		_generalMacro="I_MRAP_03_gmg_F";
		author="Meatshield";
		scope=2;
		side=2;
		vehicleClass="Meaty_CarDES";
		faction="IND_F";
		displayName="Strider GMG (Desert)";
		crew="Meaty_Crew_IND_DES";
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_DES_Vech\data\mrap_03_ext_indp_co.paa",
			"Meaty_IND_DES_Vech\data\turret_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_IND_DES"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class I_APC_Wheeled_03_cannon_F;
	class Meaty_Gorgon_DES: I_APC_Wheeled_03_cannon_F
	{
		_generalMacro="I_APC_Wheeled_03_cannon_F";
		author="Meatshield";
		scope=2;
		side=2;
		vehicleClass="Meaty_ArmouredDES";
		faction="IND_F";
		displayName="AFV-4 Gorgon (Desert)";
		crew="Meaty_Crew_IND_DES";
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_DES_Vech\data\apc_wheeled_03_ext_indp_co.paa",
			"Meaty_IND_DES_Vech\data\apc_wheeled_03_ext2_indp_co.paa",
			"Meaty_IND_DES_Vech\data\rcws30_co.paa",
			"Meaty_IND_DES_Vech\data\apc_wheeled_03_ext_alpha_indp_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_IND_DES"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class I_APC_tracked_03_cannon_F;
	class Meaty_Mora_DES: I_APC_tracked_03_cannon_F
	{
		_generalMacro="I_APC_tracked_03_cannon_F";
		author="Meatshield";
		scope=2;
		side=2;
		vehicleClass="Meaty_ArmouredDES";
		faction="IND_F";
		displayName="FV-720 Mora (Desert)";
		crew="Meaty_Crew_IND_DES";
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_DES_Vech\data\apc_tracked_03_ext_indp_co.paa",
			"Meaty_IND_DES_Vech\data\apc_tracked_03_ext2_indp_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_IND_DES"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
};
