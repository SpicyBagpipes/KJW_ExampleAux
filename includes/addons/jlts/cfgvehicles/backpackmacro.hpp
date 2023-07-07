//Do not touch this.
#include "..\script_component.hpp"

#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DIRECTORY##\##DATAPATH##\path

#define JLTS_BACKPACK_RTO_MINI(classname,displayNameText)\
class TAG##_##classname##: JLTS_Clone_RTO_pack {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\backpack\classname.paa)\
	};\
};

#define JLTS_BACKPACK_RTO(classname,displayNameText)\
class TAG##_##classname##: JLTS_Clone_backpack_RTO {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\backpack\classname.paa)\
	};\
};

#define JLTS_BACKPACK_CHICKEN_JUMPPACK(classname,displayNameText)\
class TAG##_##classname##: JLTS_Clone_jumppack_Chicken {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\backpack\classname.paa)\
	};\
};

#define JLTS_BACKPACK_JT12_JUMPPACK(classname,displayNameText)\
class TAG##_##classname##: JLTS_Clone_Jumppack_JT12 {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\backpack\classname.paa)\
	};\
};

#define JLTS_BACKPACK_MC_JUMPPACK(classname,displayNameText)\
class TAG##_##classname##: JLTS_Clone_jumppack_mc {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(marshalcommander\backpack\classname.paa)\
	};\
};

#define JLTS_BACKPACK_REGULAR_JUMPPACK(classname,displayNameText)\
class TAG##_##classname##: JLTS_Clone_jumppack {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\backpack\classname.paa)\
	};\
};

#define JLTS_BACKPACK_REGULAR(classname,displayNameText)\
class TAG##_##classname##: JLTS_Clone_backpack {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\backpack\classname.paa)\
	};\
};

#define JLTS_BACKPACK_ARC(classname,displayNameText)\
class TAG##_##classname##: JLTS_Clone_ARC_backpack {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(arc\backpack\classname.paa)\
	};\
};