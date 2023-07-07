//Do not touch this.
#include "..\script_component.hpp"

#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DIRECTORY##\##DATAPATH##\path

#define JLTS_VEST_AIRBORNE(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneVestAirborne {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(airborne\vest\classname.paa),\
		PATHTO(airborne\vest\1\classname.paa)\
	};\
};

#define JLTS_VEST_AIRBORNE_NCO(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneVestAirborneNCO {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(airborne\vest\classname.paa),\
		PATHTO(airborne\vest\1\classname.paa)\
	};\
};

#define JLTS_VEST_ARC(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneVestARC {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(arc\vest\classname.paa)\
	};\
};

#define JLTS_VEST_COMMANDER(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneVestCommander {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\vest\classname.paa)\
	};\
};

#define JLTS_VEST_LIEUTENANT(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneVestLieutenant {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\vest\classname.paa)\
	};\
};

#define JLTS_VEST_OFFICER(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneVestOfficer {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\vest\classname.paa)\
	};\
};

#define JLTS_VEST_OFFICER_REVERSED(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneVestOfficer2 {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\vest\classname.paa)\
	};\
};

#define JLTS_VEST_RECON(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneVestRecon {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\vest\classname.paa)\
	};\
};

#define JLTS_VEST_RECON_NCO(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneVestReconNCO {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\vest\classname.paa)\
	};\
};

#define JLTS_VEST_RECON_OFFICER(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneVestReconOfficer {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\vest\classname.paa),\
		PATHTO(trooper\vest\1\classname.paa)\
	};\
};

#define JLTS_VEST_PURGE(classname,displayNameText)\
class TAG##_##classname##: JLTS_CloneVestPurge {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\vest\classname.paa)\
		PATHTO(trooper\vest\1\classname.paa)\
	};\
};