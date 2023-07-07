//Do not touch this.
#include "..\tas\script_component.hpp"
#define CURRENTMOD tas
#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DATAPATH##\path

#ifdef CURRENTCLASSCFGVEHICLES
	#define TAS_UNIFORM_PILOTP3(classname,displayNameText)\
	class TAG##_##classname##_Unit: 3AS_U_Republic_Pilot {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(pilotp3\uniform\classname.paa),\
			PATHTO(pilotp3\uniform\1\classname.paa)\
		};\
	};
	#define TAS_UNIFORM_KATARN(classname,displayNameText)\
	class TAG##_##classname##_Unit: 3AS_Rep_Commando_F {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(katarn\uniform\classname.paa),\
			3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa\
		};\
	};
	#define TAS_UNIFORM_COLDWEATHER(classname,displayNameText)\
	class TAG##_##classname##_Unit: 3AS_Rep_ColdAssault_F {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(coldweather\uniform\classname.paa),\
			PATHTO(coldweather\uniform\classname.paa)\
		};\
	};
#endif
#ifdef CURRENTCLASSCFGWEAPONS
	#define TAS_UNIFORM_PILOTP3(classname,displayNameText)\
	class TAG##_##classname##: 3AS_U_Pilot_Phase3 {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
	#define TAS_UNIFORM_KATARN(classname,displayNameText)\
	class TAG##_##classname##: 3AS_U_Rep_Katarn_Armor {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
	#define TAS_UNIFORM_COLDWEATHER(classname,displayNameText)\
	class TAG##_##classname##: 3AS_U_Rep_ColdAssault_Armor {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
#endif