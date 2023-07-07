//Do not touch this.
#include "..\script_component.hpp"
#define CURRENTMOD ls
#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DATAPATH##\path

#define LS_HELMET_KATARN(classname,displayNameText)\
class TAG##_##classname##: lsd_sob_commando_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\helmet\classname.paa),\
		PATHTO(katarn\helmet\classname.paa)\
	};\
};

#define LS_HELMET_SPECOPS_P1(classname,displayNameText)\
class TAG##_##classname##: ls_sob_phase1SpecOp_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\helmet\classname.paa),\
		ls_armor_bluefor\helmet\sob\phase1SpecOp\data\visor_co.paa\
	};\
};

#define LS_HELMET_SPECOPS_P2(classname,displayNameText)\
class TAG##_##classname##: ls_sob_phase2SpecOp_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\helmet\classname.paa),\
		ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa\
	};\
};

#define LS_HELMET_TROOPER_BARC(classname,displayNameText)\
class TAG##_##classname##: ls_gar_barc_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\helmet\classname.paa),\
		ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa\
	};\
};

#define LS_HELMET_AIRBORNE(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_airborne_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(airborne\helmet\classname.paa),\
		lsd_armor_bluefor\helmet\gar\airborne\data\visor_co.paa\
	};\
};

#define LS_HELMET_ARC(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_arc_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(arc\helmet\classname.paa),\
		lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa\
	};\
};

#define LS_HELMET_ARF_P1(classname,displayNameText)\
class TAG##_##classname##: ls_gar_phase1Arf_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(arf\helmet\classname.paa),\
		,\
		PATHTO(arf\helmet\classname.paa),\
	};\
};

#define LS_HELMET_ARF_P2(classname,displayNameText)\
class TAG##_##classname##: ls_gar_phase2Arf_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(arf\helmet\classname.paa),\
		ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa,\
		PATHTO(arf\helmet\classname.paa)\
	};\
};

#define LS_HELMET_TROOPER_PILOT_P1(classname,displayNameText)\
class TAG##_##classname##: ls_gar_phase1Pilot_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\helmet\classname.paa),\
		ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa,\
		ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa\
	};\
};

#define LS_HELMET_TROOPER_PILOT_P2(classname,displayNameText)\
class TAG##_##classname##: ls_gar_phase2Pilot_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\helmet\classname.paa),\
		ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa\
	};\
};

#define LS_HELMET_MARINE(classname,displayNameText)\
class TAG##_##classname##: ls_gar_phase2Insulated_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(marine\helmet\classname.paa)\
	};\
};

#define LS_HELMET_TROOPER_REGULAR_P1(classname,displayNameText)\
class TAG##_##classname##: ls_gar_phase1_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\helmet\classname.paa),\
		ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa,\
		ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa\
	};\
};

#define LS_HELMET_TROOPER_REGULAR_P2(classname,displayNameText)\
class TAG##_##classname##: ls_gar_phase2_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\helmet\classname.paa),\
		ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa\
	};\
};

#define LS_HELMET_SENATEGUARD(classname,displayNameText)\
class TAG##_##classname##: lsd_csf_senateGuard_helmet {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(senatecommando\helmet\classname.paa)\
	};\
};