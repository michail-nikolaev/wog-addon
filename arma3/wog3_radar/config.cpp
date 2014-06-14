class CfgPatches
{
	class wog_addon
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_armor_f_beta_APC_Tracked_02"};
		author[] = {"[TF]Nkey"};
		authorUrl = "https://github.com/michail-nikolaev/wog-addon";
		version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = {0,0,1};
	};
};

class CfgVehicles
{
	class O_APC_Tracked_02_base_F;
	class O_APC_Tracked_02_AA_F : O_APC_Tracked_02_base_F
	{
		irscanrangemax = 8000;
		irscantoeyefactor = 3;
	};
};