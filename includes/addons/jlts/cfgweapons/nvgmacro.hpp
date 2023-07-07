//Do not touch this.
#include "..\script_component.hpp"

#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DIRECTORY##\##DATAPATH##\path

#define JLTS_NVG_COMMANDER(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneNVGCC {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa)\
	};\
};

#define JLTS_NVG_MARSHALCOMMANDER(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneNVGMC {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(marshalcommander\nvg\classname.paa)\
	};\
};

#define JLTS_NVG_NVVISOR(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneNVG {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa)\
	};\
};

#define JLTS_NVG_SPECIALISTVISOR(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneNVG_spec {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa)\
	};\
};

#define JLTS_NVG_RANGEFINDER(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneNVGRange {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa)\
	};\
};

