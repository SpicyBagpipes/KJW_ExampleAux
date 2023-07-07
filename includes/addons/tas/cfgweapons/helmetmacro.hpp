//Do not touch this.
#include "..\script_component.hpp"

#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DIRECTORY##\##DATAPATH##\path

#define TAS_HELMET_COLDWEATHER(classname,displayNameText)\
class TAG##_##classname##: 3AS_H_ColdAssault_Helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(coldweather\helmet\classname.paa),\
		PATHTO(coldweather\helmet\classname.paa),\
		PATHTO(coldweather\helmet\classname.paa)\
	};\
};

#define TAS_HELMET_ARF(classname,displayNameText)\
class TAG##_##classname##: 3AS_ARF_Helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(arf\helmet\classname.paa),\
		PATHTO(arf\helmet\classname.paa)\
	};\
};

#define TAS_HELMET_ATRT(classname,displayNameText)\
class TAG##_##classname##: 3as_ATRT_Helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(atrt\helmet\classname.paa)\
	};\
};

#define TAS_HELMET_ENGINEER(classname,displayNameText)\
class TAG##_##classname##: 3as_Engineer_Helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(engineer\helmet\classname.paa)\
	};\
};

#define TAS_HELMET_KATARN(classname,displayNameText)\
class TAG##_##classname##: 3AS_H_Katarn_Helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\helmet\classname.paa),\
		PATHTO(katarn\helmet\classname.paa)\
	};\
};

#define TAS_HELMET_PHASE1(classname,displayNameText)\
class TAG##_##classname##: 3as_P1_Base {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(phase1\helmet\classname.paa)\
	};\
};

#define TAS_HELMET_PILOTP2(classname,displayNameText)\
class TAG##_##classname##: 3as_P2_Pilot_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(pilotp2\helmet\classname.paa),\
		PATHTO(pilotp2\helmet\classname.paa),\
		,\
		3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa,\
		PATHTO(pilotp2\helmet\classname.paa),\
		\
	};\
};

#define TAS_HELMET_PILOTP3(classname,displayNameText)\
class TAG##_##classname##: 3AS_P3_Pilot_Helmet_P {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(pilotp3\helmet\classname.paa),\
		3AS\3AS_Characters\Clones\Headgear\Textures\PilotP3\Phase3_Pilot_Tubes_Standard_co.paa\
	};\
};

#define TAS_HELMET_TANKERP2(classname,displayNameText)\
class TAG##_##classname##: 3AS_H_ColdAssault_Helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(tankerp2\helmet\classname.paa)\
	};\
};