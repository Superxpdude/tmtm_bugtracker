////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Thu Mar 23 13:50:22 2017 : 'file' last modified on Sun Dec 14 21:43:54 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class tfax_gear : data\models\NVG\config.bin{
class CfgPatches
{
	class tfax_nvg
	{
		units[] = {};
		weapons[] = {"TFAx_NVGoggles","TFAx_NVGoggles2"};
		icon = "";
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class cfgWeapons
{
    class Binocular;
	class NVGoggles : Binocular
    {
        class ItemInfo;
    };
	class TFAx_NVGoggles: NVGoggles
	{
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy";
		displayName = "TFAX AN/PVS-15";
		nameSound = "nvgoggles";
		simulation = "NVGoggles";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\TFAx_Gear\data\textures\tfa_nvg_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off.p3d";
			hiddenSelections[] = {"camo"};
			mass = 0.5;
		};
	};
	class TFAx_NVGoggles2: NVGoggles
	{
		displayName = "TFAX AN/PVS-14";
		nameSound = "nvgoggles";
		simulation = "NVGoggles";
		showEmpty = 0;
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		value = 5;
		opticsZoomMin = 1;
		opticsZoomMax = 1;
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\TFAx_Gear\data\models\NVG\HMNVS_UP";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\TFAx_Gear\data\models\NVG\HMNVS_DOWN.p3d";
			modelOff = "\TFAx_Gear\data\models\NVG\HMNVS_UP.p3d";
			mass = 0.5;
		};
	};
};
//};
