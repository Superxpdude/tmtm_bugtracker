class CfgPatches
{
	class example_retexture_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_OPFOR"
		};
	};
};
class CfgVehicleClasses
{
	class Meaty_MenISN
	{
		displayName="M_Men (Snow)";
	};
};
class CfgVehicles
{
	class I_soldier_F;
	class B_Carryall_Base;
	class Meaty_Soldier_IND_SN: I_soldier_F
	{
		author="Meatshield";
		_generalMacro="I_soldier_F";
		scope=2;
		displayName="Rifleman";
		vehicleClass="Meaty_MenISN";
		nakedUniform="U_BasicBody";
		uniformClass="IND_SN_Camo";
		backpack="Meaty_Carryall_SN_IND";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN\Data\IND_SN_camo_co.paa"
		};
		linkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		weapons[]=
		{
			"Meaty_Mk20_Arco_pointer_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"Meaty_Mk20_Arco_pointer_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
	};
	class Meaty_Medic_IND_SN: I_soldier_F
	{
		author="Meatshield";
		_generalMacro="I_soldier_F";
		scope=2;
		displayName="Medic";
		vehicleClass="Meaty_MenISN";
		nakedUniform="U_BasicBody";
		uniformClass="IND_SN_Camo";
		backpack="Meaty_Carryall_SN_med_IND";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN\Data\IND_SN_camo_co.paa"
		};
		linkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		weapons[]=
		{
			"Meaty_Mk20_Arco_pointer_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"Meaty_Mk20_Arco_pointer_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
	};
	class Meaty_teamlead_IND_SN: I_soldier_F
	{
		author="Meatshield";
		_generalMacro="I_soldier_F";
		scope=2;
		displayName="Team leader";
		vehicleClass="Meaty_MenISN";
		nakedUniform="U_BasicBody";
		uniformClass="IND_SN_Camo";
		backpack="Meaty_Carryall_SN_TL_IND";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN\Data\IND_SN_camo_co.paa"
		};
		linkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		weapons[]=
		{
			"Meaty_Mk20GL_Arco_pointer_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"Meaty_Mk20GL_Arco_pointer_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
	};
	class Meaty_squadlead_IND_SN: I_soldier_F
	{
		author="Meatshield";
		_generalMacro="I_soldier_F";
		scope=2;
		displayName="Squad leader";
		vehicleClass="Meaty_MenISN";
		nakedUniform="U_BasicBody";
		uniformClass="IND_SN_Camo";
		backpack="Meaty_Carryall_SN_SL_IND";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN\Data\IND_SN_camo_co.paa"
		};
		linkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		weapons[]=
		{
			"Meaty_Mk20GL_Arco_pointer_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"Meaty_Mk20GL_Arco_pointer_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
	};
	class Meaty_AT_PCML_IND_SN: I_soldier_F
	{
		author="Meatshield";
		_generalMacro="I_soldier_F";
		scope=2;
		displayName="Rifleman (AT)";
		vehicleClass="Meaty_MenISN";
		nakedUniform="U_BasicBody";
		uniformClass="IND_SN_Camo";
		backpack="Meaty_Carryall_SN_AT_IND";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN\Data\IND_SN_camo_co.paa"
		};
		linkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		weapons[]=
		{
			"Meaty_Mk20_Arco_pointer_F",
			"launch_NLAW_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"Meaty_Mk20_Arco_pointer_F",
			"launch_NLAW_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
	};
	class Meaty_AR_IND_SN: I_soldier_F
	{
		author="Meatshield";
		_generalMacro="I_soldier_F";
		scope=2;
		displayName="Automatic Rifleman";
		vehicleClass="Meaty_MenISN";
		nakedUniform="U_BasicBody";
		uniformClass="IND_SN_Camo";
		backpack="Meaty_Carryall_SN_AR_IND";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN\Data\IND_SN_camo_co.paa"
		};
		linkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		weapons[]=
		{
			"Meaty_LMG_pointer_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"Meaty_LMG_pointer_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer"
		};
		respawnMagazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer"
		};
	};
	class Meaty_Crew_IND_SN: I_soldier_F
	{
		author="Meatshield";
		_generalMacro="I_soldier_F";
		scope=2;
		displayName="Crewman";
		vehicleClass="Meaty_MenISN";
		nakedUniform="U_BasicBody";
		uniformClass="IND_SN_Camo";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN\Data\IND_SN_camo_co.paa"
		};
		linkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"IND_SN_Vest",
			"IND_SN_Helmet",
			"Meaty_NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		weapons[]=
		{
			"Meaty_Mk20_Arco_pointer_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"Meaty_Mk20_Arco_pointer_F",
			"hgun_Rook40_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
	};
	class Meaty_Carryall_SN_IND_Base: B_Carryall_Base
	{
		scope=2;
		author="Meatshield";
		displayName="Backpack_SN_IND";
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_hex.paa";
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN\Data\IND_SN_backpack.paa"
		};
	};
	class Meaty_Carryall_SN_IND: Meaty_Carryall_SN_IND_Base
	{
		scope=1;
		class TransportMagazines
		{
			class 16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=2;
			};
			class GrenadeHand
			{
				magazine="HandGrenade";
				count=2;
			};
		};
	};
	class Meaty_Carryall_SN_med_IND: Meaty_Carryall_SN_IND_Base
	{
		scope=1;
		class TransportMagazines
		{
			class SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class Meaty_Carryall_SN_TL_IND: Meaty_Carryall_SN_IND_Base
	{
		scope=1;
		class TransportMagazines
		{
			class SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class G_40mm_HE
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=12;
			};
		};
	};
	class Meaty_Carryall_SN_SL_IND: Meaty_Carryall_SN_IND_Base
	{
		scope=1;
		class TransportMagazines
		{
			class SmokeShell
			{
				magazine="SmokeShell";
				count=3;
			};
			class G_40mm_HE
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=12;
			};
			class G_40mm_Smoke
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=8;
			};
		};
	};
	class Meaty_Carryall_SN_AT_IND: Meaty_Carryall_SN_IND_Base
	{
		scope=1;
		class TransportMagazines
		{
			class SmokeShell
			{
				magazine="SmokeShell";
				count=3;
			};
			class M_NLAW_AT_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
	};
	class Meaty_Carryall_SN_AR_IND: Meaty_Carryall_SN_IND_Base
	{
		scope=1;
		class TransportMagazines
		{
			class GrenadeHand
			{
				magazine="HandGrenade";
				count=4;
			};
			class B_65x39_Caseless_green
			{
				magazine="200Rnd_65x39_cased_Box_Tracer";
				count=4;
			};
			class 16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=6;
			};
		};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class IND_SN_Camo: Uniform_Base
	{
		scope=2;
		displayName="IND_SN_Camo";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Meaty_Soldier_IND_SN";
			containerClass="Supply20";
			mass=80;
		};
	};
	class ItemCore;
	class HeadgearItem;
	class IND_SN_Helmet: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="IND_SN_Helmet";
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		model="\A3\characters_f_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN\Data\IND_SN_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=100;
			uniformModel="\A3\characters_f_beta\indep\headgear_helmet_canvas";
			modelSiSN[]={3,1};
			armor="3*0.5";
			passThrough=0.80000001;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class Vest_Camo_Base;
	class VestItem;
	class IND_SN_Vest: Vest_Camo_Base
	{
		scope=2;
		displayName="IND_SN_Vest";
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_1_ca.paa";
		model="\A3\characters_f_beta\indep\equip_ia_vest02";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Meaty_IND_SN\Data\IND_SN_equip.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\characters_f_beta\indep\equip_ia_vest02";
			containerClass="Supply100";
			mass=50;
			armor="5*0.5";
			passThrough=0.69999999;
			hiddenSelections[]=
			{
				"Camo"
			};
		};
	};
	class NVGoggles;
	class ItemInfo;
	class Meaty_NVGoggles: NVGoggles
	{
		modelOptics="\A3\weapons_f\reticle\optics_night";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f\common\data\nvg_opfor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff="A3\weapons_f\binocular\NVG_proxy_off.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class arifle_Mk20_F;
	class Meaty_Mk20_Arco_pointer_F: arifle_Mk20_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Mk20_GL_F;
	class Meaty_Mk20GL_Arco_pointer_F: arifle_Mk20_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class LMG_Mk200_F;
	class Meaty_LMG_pointer_F: LMG_Mk200_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
};
