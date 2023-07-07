//Do not touch this.
#include "..\script_component.hpp"

#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DIRECTORY##\##DATAPATH##\path

#define TAS_VEST_KATARN_DEMO(classname,displayNameText)\
class TAG##_##classname##: 3AS_V_Katarn_Vest_Demo {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\vest\classname.paa)\
	};\
};

#define TAS_VEST_KATARN_SNIPER(classname,displayNameText)\
class TAG##_##classname##: 3AS_Katarn_Vest_Sniper {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\vest\classname.paa)\
	};\
};

#define TAS_VEST_KATARN_TEAMLEADER(classname,displayNameText)\
class TAG##_##classname##: 3AS_Katarn_Vest_Team_Leader {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\vest\classname.paa)\
	};\
};

#define TAS_VEST_KATARN_TECH(classname,displayNameText)\
class TAG##_##classname##: 3AS_V_Katarn_Vest_Tech {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\vest\classname.paa)\
	};\
};