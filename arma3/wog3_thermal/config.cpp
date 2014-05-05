class CfgPatches
{
	class wog_addon
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Data_F", "A3_Animals_F"};
		author[] = {"[TF]Nkey"}; // Thanks to Drill for idea
		authorUrl = "https://github.com/michail-nikolaev/wog-addon";
		version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = {0,0,1};
	};
};

class CfgVehicles
{
	class Land;
	class Man: Land
	{
		mFact = 1; // Metabolism factor - number from interval <0, 1> (0 - metabolism has no influence, 1 - metabolism has full influence (no other temperature source will be considered))
		tBody = 32; // Metabolism temperature of the model (in celsius)
	};
	class All;
	// Up to this point, the thermal properties apply to the entire model, 
	// so if a vehicle's engine starts, the entire model will begin to warm up at the rate of htMax up to a temperature of afMax,
	// likewise if it begins driving, the entire model will heat up at the rate specified by htMax to a maximum temperature of mfMax.
	class AllVehicles: All
	{		
		htMin=60; //  Minimum half-cooling time (in seconds)
		htMax=1800; // Maximum half-cooling time (in seconds)
		afMax=70; // Maximum temperature in case the model is alive (in celsius)
		mfMax=50; //  Maximum temperature when the model is moving (in celsius)
		mFact=0.0; // Metabolism factor - number from interval <0, 1> (0 - metabolism has no influence, 1 - metabolism has full influence (no other temperature source will be considered))
		tBody=0;  // Metabolism temperature of the model (in celsius)		
	};
	class Animal;
	class Animal_Base_F: Animal
	{
		mFact = 1; // Metabolism factor - number from interval <0, 1> (0 - metabolism has no influence, 1 - metabolism has full influence (no other temperature source will be considered))
		tBody = 32; // Metabolism temperature of the model (in celsius)
	};
};
