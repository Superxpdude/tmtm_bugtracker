////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Sat Mar 25 12:30:19 2017 : 'file' last modified on Wed Nov 26 02:14:02 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class a3_gpnvg18 : config.bin{
class CfgPatches
{
	class A3_GPNVG18
	{
		units[] = {"GPammobox"};
		weapons[] = {"A3_GPNVG18_F","A3_GPNVG18_BLK_F","A3_NVGHeadGearBlk_F","A3_GPNVG18b_F","A3_GPNVG18b_BLK_F","A3_GPNVG18_REC_F","A3_GPNVG18_REC_BLK_F","A3_GPNVG18b_REC_F","A3_GPNVG18b_REC_BLK_F","GPammobox"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
class cfgWeapons
{
    class Binocular;
	class NVGoggles : Binocular
    {
        class ItemInfo;        
    };
	class ItemCore;
	class HeadgearItem;
	class InventoryItem_Base_F;
	class A3_GPNVG18_F: NVGoggles
	{
		displayName = "GPNVG-18";
		nameSound = "nvgoggles";
		simulation = "NVGoggles";
		showEmpty = 0;
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		value = 5;
		weaponPoolAvailable = 1;
		opticsZoomMin = 1;
		opticsZoomMax = 1;
		modelOptics = "\A3_GPNVG18\GP_Optic";
		model = "\A3_GPNVG18\NVG18F_On";
		picture = "\A3_GPNVG18\data\UI\GPNVG18_ca.paa";
		descriptionUse = "$STR_A3_cfgWeapons_GPNVG18";
		Scope = 2;
		ScopeCurator = 2;
		class Library
		{
			libTextDesc = "$STR_LIB_GPNVG18";
		};
		descriptionShort = "L3 Panoramic GPNVG18";
		class ItemInfo : ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "A3_GPNVG18\NVG18F_On.p3d";
			modelOff = "A3_GPNVG18\NVG18_Off.p3d";
			mass = 12;
		};
	};
	class A3_GPNVG18_BLK_F: A3_GPNVG18_F
	{
		displayName = "GPNVG-18 BLK";
		modelOptics = "\A3_GPNVG18\GP_Optic";
		model = "\A3_GPNVG18\NVG18F_Blk_On";
		Scope = 2;
		ScopeCurator = 2;
		class ItemInfo : ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "A3_GPNVG18\NVG18F_Blk_On.p3d";
			modelOff = "A3_GPNVG18\NVG18_Blk_Off.p3d";
			mass = 14;
		};
	};
	class A3_GPNVG18b_F: A3_GPNVG18_F
	{
		displayName = "GPNVG-18 (Battery)";
		modelOptics = "\A3_GPNVG18\GP_Optic";
		model = "\A3_GPNVG18\NVG18F_Onb";
		Scope = 2;
		ScopeCurator = 2;
		class ItemInfo : ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "A3_GPNVG18\NVG18F_Onb.p3d";
			modelOff = "A3_GPNVG18\NVG18_Offb.p3d";
			mass = 14;
		};
	};
	class A3_GPNVG18b_BLK_F: A3_GPNVG18_F
	{
		displayName = "GPNVG-18 BLK (Battery)";
		modelOptics = "\A3_GPNVG18\GP_Optic";
		model = "\A3_GPNVG18\NVG18F_Blk_Onb";
		Scope = 2;
		ScopeCurator = 2;
		class ItemInfo : ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "A3_GPNVG18\NVG18F_Blk_Onb.p3d";
			modelOff = "A3_GPNVG18\NVG18_Blk_Offb.p3d";
			mass = 14;
		};
	};
	class A3_GPNVG18_REC_F: A3_GPNVG18_F
	{
		displayName = "GPNVG-18 (Recon)";
		modelOptics = "\A3_GPNVG18\GP_Optic";
		model = "\A3_GPNVG18\NVG18_Empty";
		Scope = 2;
		ScopeCurator = 2;
		class ItemInfo : ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "A3_GPNVG18\NVG18F_On.p3d";
			modelOff = "A3_GPNVG18\NVG18_Empty.p3d";
			mass = 14;
		};
	};
	class A3_GPNVG18_REC_BLK_F: A3_GPNVG18_F
	{
		displayName = "GPNVG-18 BLK (Recon)";
		modelOptics = "\A3_GPNVG18\GP_Optic";
		model = "\A3_GPNVG18\NVG18_Empty";
		Scope = 2;
		ScopeCurator = 2;
		class ItemInfo : ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "A3_GPNVG18\NVG18F_Blk_On.p3d";
			modelOff = "A3_GPNVG18\NVG18_Empty.p3d";
			mass = 14;
		};
	};
	class A3_GPNVG18b_REC_BLK_F: A3_GPNVG18_F
	{
		displayName = "GPNVG-18 BLK (Recon/Battery)";
		modelOptics = "\A3_GPNVG18\GP_Optic";
		model = "\A3_GPNVG18\NVG18_Empty";
		Scope = 2;
		ScopeCurator = 2;
		class ItemInfo : ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "A3_GPNVG18\NVG18F_Blk_Onb.p3d";
			modelOff = "A3_GPNVG18\NVG18_Empty.p3d";
			mass = 14;
		};
	};
	class A3_GPNVG18b_REC_F: A3_GPNVG18_F
	{
		displayName = "GPNVG-18 (Recon/Battery)";
		modelOptics = "\A3_GPNVG18\GP_Optic";
		model = "\A3_GPNVG18\NVG18_Empty";
		Scope = 2;
		ScopeCurator = 2;
		class ItemInfo : ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "A3_GPNVG18\NVG18F_Onb.p3d";
			modelOff = "A3_GPNVG18\NVG18_Empty.p3d";
			mass = 14;
		};
	};
	class A3_NVGHeadGearBlk_F: ItemCore
	{
		scope = 2;
		ScopeCurator = 2;
		displayName = "NVG BLK HeadStrap";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\A3_GPNVG18\NVG_HeadStrap.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3_GPNVG18\NVG_HeadStrap.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
		class FlashLight
		{
			color[] = {7000,7500,10000};
			ambient[] = {6,9,9};
			intensity = 2.0;
			size = 1;
			innerAngle = 10;
			outerAngle = 50;
			coneFadeCoef = 7;
			position = "flash dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.1;
			flareMaxDistance = "100.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 200;
				hardLimitEnd = 300;
			};
			scale[] = {0};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyGoggles;
	class ProxyNVG18F_On: ProxyGoggles
	{
		scope = 2;
		model = "\A3_GPNVG18\NVG18F_On";
	};
	class ProxyNVG18F: ProxyGoggles
	{
		scope = 2;
		model = "\A3_GPNVG18\NVG18F_On";
	};
};
class CfgVehicles
{
	class Box_NATO_Wps_F;
	class GPammobox: Box_NATO_Wps_F
	{
		displayName = "GPNVG18 Crate";
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems
		{
			class xxA3_GPNVG18_F
			{
				name = "A3_GPNVG18_F";
				count = 12;
			};
			class xxA3_GPNVG18_BLK_F
			{
				name = "A3_GPNVG18_BLK_F";
				count = 12;
			};
			class xxA3_NVGHeadGearBlk_F
			{
				name = "A3_NVGHeadGearBlk_F";
				count = 6;
			};
			class xxA3_GPNVG18b_F
			{
				name = "A3_GPNVG18b_F";
				count = 12;
			};
			class xxA3_GPNVG18b_BLK_F
			{
				name = "A3_GPNVG18b_BLK_F";
				count = 12;
			};
			class xxA3_GPNVG18_REC_F
			{
				name = "A3_GPNVG18_REC_F";
				count = 12;
			};
			class xxA3_GPNVG18_REC_BLK_F
			{
				name = "A3_GPNVG18_REC_BLK_F";
				count = 12;
			};
			class xxA3_GPNVG18b_REC_BLK_F
			{
				name = "A3_GPNVG18b_REC_BLK_F";
				count = 12;
			};
			class xxA3_GPNVG18b_REC_F
			{
				name = "A3_GPNVG18b_REC_F";
				count = 12;
			};
		};
	};
};
//};
