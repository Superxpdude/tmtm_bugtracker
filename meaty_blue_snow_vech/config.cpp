class CfgPatches
{
	class Meaty_Vech_B_Sn_F
	{
		units[]={"Meaty_Hunter_Sn","Meaty_HunterHMG_Sn","Meaty_HunterGMG_Sn","Meaty_Truck_B_Sn","Meaty_Marshall_Sn","Meaty_Panther_Sn","Meaty_Bobcat_Sn","Meaty_slammer_Sn", "Meaty_Scorcher_Sn", "Meaty_Sandstorm_Sn" };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgVehicleClasses
{
	class Meaty_CarSnow
	{
		displayName="M_Car (Snow)";
	};
	class Meaty_ArmouredSnow
	{
		displayName="M_Armoured (Snow)";
	};
};
class cfgVehicles
{
	class B_MRAP_01_F;
	class Meaty_Hunter_Sn: B_MRAP_01_F
	{
		_generalMacro="B_MRAP_01_F";
		author="Meatshield";
		scope=2;
		side=1;
		vehicleClass="Meaty_CarSnow";
		faction="BLU_F";
		displayName="Hunter (Snow)";
		crew="Meaty_Crew_B_Sn";
		hiddenSelectionsTextures[]=
		{
			"Meaty_Blue_Snow_Vech\data\hunter_base_co.paa",
			"Meaty_Blue_Snow_Vech\data\hunter_adds_co.paa",
			""
		};
		typicalCargo[]=
		{
			"Meaty_Crew_B_Sn"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class B_MRAP_01_hmg_F;
	class Meaty_HunterHMG_Sn: B_MRAP_01_hmg_F
	{
		_generalMacro="B_MRAP_01_hmg_F";
		author="Meatshield";
		scope=2;
		side=1;
		vehicleClass="Meaty_CarSnow";
		faction="BLU_F";
		displayName="Hunter HMG (Snow)";
		crew="Meaty_Crew_B_Sn";
		hiddenSelectionsTextures[]=
		{
			"Meaty_Blue_Snow_Vech\data\hunter_base_co.paa",
			"Meaty_Blue_Snow_Vech\data\hunter_adds_co.paa",
			"Meaty_Blue_Snow_Vech\data\hunter_turret_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_B_Sn"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class B_MRAP_01_gmg_F;
	class Meaty_HunterGMG_Sn: B_MRAP_01_gmg_F
	{
		_generalMacro="B_MRAP_01_gmg_F";
		author="Meatshield";
		scope=2;
		side=1;
		vehicleClass="Meaty_CarSnow";
		faction="BLU_F";
		displayName="Hunter GMG (Snow)";
		crew="Meaty_Crew_B_Sn";
		hiddenSelectionsTextures[]=
		{
			"Meaty_Blue_Snow_Vech\data\hunter_base_co.paa",
			"Meaty_Blue_Snow_Vech\data\hunter_adds_co.paa",
			"Meaty_Blue_Snow_Vech\data\hunter_turret_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_B_Sn"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class B_Truck_01_transport_F;
	class Meaty_Truck_B_Sn: B_Truck_01_transport_F
	{
		_generalMacro="B_Truck_01_transport_F";
		author="Meatshield";
		scope=2;
		side=1;
		vehicleClass="Meaty_CarSnow";
		faction="BLU_F";
		displayName="Transport Truck (Snow)";
		crew="Meaty_Crew_B_Sn";
		hiddenSelectionsTextures[]=
		{
			"Meaty_Blue_Snow_Vech\data\truck_01_ext_01_co.paa",
			"Meaty_Blue_Snow_Vech\data\truck_01_ext_02_co.paa",
			"Meaty_Blue_Snow_Vech\data\truck_01_cargo_co.paa",
			"Meaty_Blue_Snow_Vech\data\truck_01_cover_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_B_Sn"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class B_APC_Wheeled_01_cannon_F;
	class Meaty_Marshall_Sn: B_APC_Wheeled_01_cannon_F
	{
		_generalMacro="B_APC_Wheeled_01_cannon_F";
		author="Meatshield";
		scope=2;
		side=1;
		vehicleClass="Meaty_ArmouredSnow";
		faction="BLU_F";
		displayName="AMV-7 Marshall (Snow)";
		crew="Meaty_Crew_B_Sn";
		hiddenSelectionsTextures[]=
		{
			"Meaty_Blue_Snow_Vech\data\apc_wheeled_01_base_co.paa",
			"Meaty_Blue_Snow_Vech\data\apc_wheeled_01_adds_co.paa",
			"Meaty_Blue_Snow_Vech\data\apc_wheeled_01_tows_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_B_Sn"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class B_APC_Tracked_01_rcws_F;
	class Meaty_Panther_Sn: B_APC_Tracked_01_rcws_F
	{
		_generalMacro="B_APC_Tracked_01_rcws_F";
		author="Meatshield";
		scope=2;
		side=1;
		vehicleClass="Meaty_ArmouredSnow";
		faction="BLU_F";
		displayName="IFV-6c Panther (Snow)";
		crew="Meaty_Crew_B_Sn";
		hiddenSelectionsTextures[]=
		{
			"Meaty_Blue_Snow_Vech\data\apc_tracked_01_body_co.paa",
			"Meaty_Blue_Snow_Vech\data\mbt_01_body_co.paa",
			"Meaty_Blue_Snow_Vech\data\hunter_turret_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_B_Sn"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class B_APC_Tracked_01_CRV_F;
	class Meaty_Bobcat_Sn: B_APC_Tracked_01_CRV_F
	{
		_generalMacro="B_APC_Tracked_01_CRV_F";
		author="Meatshield";
		scope=2;
		side=1;
		vehicleClass="Meaty_ArmouredSnow";
		faction="BLU_F";
		displayName="CRV-6e Bobcat (Snow)";
		crew="Meaty_Crew_B_Sn";
		hiddenSelectionsTextures[]=
		{
			"Meaty_Blue_Snow_Vech\data\apc_tracked_01_body_co.paa",
			"Meaty_Blue_Snow_Vech\data\mbt_01_body_co.paa",
			"Meaty_Blue_Snow_Vech\data\hunter_turret_co.paa",
			"Meaty_Blue_Snow_Vech\data\apc_tracked_01_crv_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_B_Sn"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class B_APC_Tracked_01_AA_F;
	class Meaty_cheetah_Sn: B_APC_Tracked_01_AA_F
	{
		_generalMacro="B_APC_Tracked_01_AA_F";
		author="Meatshield";
		scope=2;
		side=1;
		vehicleClass="Meaty_ArmouredSnow";
		faction="BLU_F";
		displayName="IFV-6a Cheetah (Snow)";
		crew="Meaty_Crew_B_Sn";
		hiddenSelectionsTextures[]=
		{
			"Meaty_Blue_Snow_Vech\data\apc_tracked_01_body_co.paa",
			"Meaty_Blue_Snow_Vech\data\mbt_01_body_co.paa",
			"Meaty_Blue_Snow_Vech\data\apc_tracked_01_aa_tower_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_B_Sn"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class B_MBT_01_cannon_F;
	class Meaty_slammer_Sn: B_MBT_01_cannon_F
	{
		_generalMacro="B_MBT_01_cannon_F";
		author="Meatshield";
		scope=2;
		side=1;
		vehicleClass="Meaty_ArmouredSnow";
		faction="BLU_F";
		displayName="M2A1 Slammer (Snow)";
		crew="Meaty_Crew_B_Sn";
		hiddenSelectionsTextures[]=
		{
			"Meaty_Blue_Snow_Vech\data\mbt_01_body_co.paa",
			"Meaty_Blue_Snow_Vech\data\mbt_01_tow_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_B_Sn"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class B_MBT_01_arty_F;
	class Meaty_Scorcher_Sn: B_MBT_01_arty_F
	{
		_generalMacro="B_MBT_01_arty_F";
		author="Meatshield";
		scope=2;
		side=1;
		vehicleClass="Meaty_ArmouredSnow";
		faction="BLU_F";
		displayName="M4 Scorcher (Snow)";
		crew="Meaty_Crew_B_Sn";
		hiddenSelectionsTextures[]=
		{
			"Meaty_Blue_Snow_Vech\data\mbt_01_body_co.paa",
			"Meaty_Blue_Snow_Vech\data\mbt_01_scorcher_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_B_Sn"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class B_MBT_01_mlrs_F;
	class Meaty_Sandstorm_Sn: B_MBT_01_mlrs_F
	{
		_generalMacro="B_MBT_01_mlrs_F";
		author="Meatshield";
		scope=2;
		side=1;
		vehicleClass="Meaty_ArmouredSnow";
		faction="BLU_F";
		displayName="M5 Sandstorm MLRS (Snow)";
		crew="Meaty_Crew_B_Sn";
		hiddenSelectionsTextures[]=
		{
			"Meaty_Blue_Snow_Vech\data\mbt_01_body_co.paa",
			"Meaty_Blue_Snow_Vech\data\mbt_01_mlrs_co.paa"
		};
		typicalCargo[]=
		{
			"Meaty_Crew_B_Sn"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
};
