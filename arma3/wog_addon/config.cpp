class CfgPatches
{
	class wog_addon
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
		author[] = {"[TF]Nkey"};
		authorUrl = "https://github.com/michail-nikolaev/wog-addon";
		version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = {0,0,1};
	};
};

class CfgMarkers
{
	class hd_objective
	{
		name = "$STR_CFG_MARKERS_dot";
		icon = "\A3\ui_f\data\map\markers\handdrawn\dot_CA.paa";
		color[] = {0,0,0,1};
		size = 32;
		shadow = 1;
		scope = 2;
		markerClass = "draw";
	};
	class hd_dot
	{
		name = "$STR_CFG_MARKERS_FLAG";
		icon = "\A3\ui_f\data\map\markers\handdrawn\objective_CA.paa";
		color[] = {0,0,0,1};
		size = 32;
		shadow = 1;
		scope = 2;
		markerClass = "draw";
	};
};