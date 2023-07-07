//Do not touch this.
#include "..\script_component.hpp"

#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DIRECTORY##\##DATAPATH##\path

#define JLTS_HELMET_AIRBORNE(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneHelmetAB {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(airborne\helmet\classname.paa)\
	};\
};

#define JLTS_HELMET_BARC(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneHelmetBARC {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(barc\helmet\classname.paa)\
	};\
};

#define JLTS_HELMET_TROOPER(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneHelmetP2 {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\helmet\classname.paa)\
	};\
};

#define JLTS_HELMET_SENATECOMMANDO(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneHelmetSC_SC {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(senatecommando\helmet\classname.paa)\
	};\
};

#define JLTS_HELMET_SENATECOMMANDOOFFICER(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneHelmetSCC_SC {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(senatecommando\helmet\classname.paa)\
	};\
};