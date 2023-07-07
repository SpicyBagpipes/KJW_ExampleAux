//Do not touch this.
#include "..\script_component.hpp"
#define CURRENTMOD tas
#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DATAPATH##\path

#define TAS_BACKPACK_COLDWEATHER(classname,displayNameText)\
class TAG##_##classname##: 3AS_B_ColdAssault_Backpack {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(coldweather\backpack\classname.paa),\
	};\
};

#define TAS_BACKPACK_KATARN(classname,displayNameText)\
class TAG##_##classname##: 3AS_B_Katarn_Backpack {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\backpack\classname.paa)\
	};\
};