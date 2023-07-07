//Do not touch this.
#include "..\script_component.hpp"
#define CURRENTMOD ls
#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DATAPATH##\path

#define LS_NVG_KATARN_ANTENNA(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_commando_nvg_antenna {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\nvg\classname.paa)\
	};\
};

#define LS_NVG_KATARN_VISOR(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_commando_nvg {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\nvg\classname.paa),\
		PATHTO(katarn\nvg\classname.paa)\
	};\
};

#define LS_NVG_CLONE_MARSHALCOMMANDER_P1(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_p1MarshalCommander_nvg {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa),\
		PATHTO(trooper\nvg\classname.paa),\
		PATHTO(trooper\nvg\classname.paa)\
	};\
};

#define LS_NVG_CLONE_COMMANDER_P1(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_p1Commander_nvg {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa),\
		PATHTO(trooper\nvg\classname.paa),\
		""\
	};\
};

#define LS_NVG_CLONE_MARSHALCOMMANDER_P2(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_p2MarshalCommander_nvg {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa),\
		PATHTO(trooper\nvg\classname.paa),\
		PATHTO(trooper\nvg\classname.paa),\
	};\
};

#define LS_NVG_CLONE_COMMANDER_P2(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_p2Commander_nvg {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa),\
		PATHTO(trooper\nvg\classname.paa),\
		""\
	};\
};

#define LS_NVG_CLONE_TANKER(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_tanker_nvg {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa)\
	};\
};

#define LS_NVG_CLONE_MEDICALSCANNER(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_medicalScanner_nvg {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa),\
		"#(argb,8,8,3)color(0.501961,1,1,1.0,co)"\
	};\
};

#define LS_NVG_CLONE_MEDICALSCANNER_SPECIALIST(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_medicalScannerSPC_nvg {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa),\
		"#(argb,8,8,3)color(0.501961,1,1,1.0,co)"\
	};\
};

#define LS_NVG_CLONE_VISOR_P1(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_p1Standard_nvg {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa)\
	};\
};

#define LS_NVG_CLONE_VISOR_P2(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_standard_nvg {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa)\
	};\
};

#define LS_NVG_CLONE_VISOR_P2_SPECIALIST(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_standardSPC_nvg {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\nvg\classname.paa)\
	};\
};