#include "settings.hpp"
#define DECLARE(classname) TAG##_##classname

class CfgPatches {
    #define CURRENTCLASSCFGPATCHES 1
    class KJW_ExampleAux_Textures {
        author = AUTHORS;
        requiredAddons[] = {
            "A3_Data_F_AoW_Loadorder",
            //3AS
            "3AS_Characters_Clones",
            "3AS_Characters_Droids",
            //LS
            "ls_Core",
            //JLTS
            "JLTS_characters_CloneArmor",
            "JLTS_characters_CloneArmor2",
            "JLTS_characters_CloneLegions"
        };
        units[] = {
            //DECLARE(myuniformhere) Example for "myuniformhere" classname.
        };
    };
    #undef CURRENTCLASSCFGPATCHES
};

class CfgWeapons {
    #define CURRENTCLASSCFGWEAPONS 1
    #include "..\includes\addons\include_cfgweapons.hpp" //Do not touch this.


    //Helmets

    #if LSADDON == 1
        //Example macro usage here.
    #endif
    #if JLTSADDON == 1
        //Example macro usage here.
    #endif
    #if TASADDON == 1
        //Example macro usage here.
    #endif


    //Vests

    #if LSADDON == 1
        //Example macro usage here.
    #endif
    #if JLTSADDON == 1
        //Example macro usage here.
    #endif
    #if TASADDON == 1
        //Example macro usage here.
    #endif


    //NVGs

    #if LSADDON == 1
        //Example macro usage here.
    #endif
    #if JLTSADDON == 1
        //Example macro usage here.
    #endif
    #if TASADDON == 1
        //3AS has no NVGs.
    #endif


    //Uniforms

    #if LSADDON == 1
        //Example macro usage here.
    #endif
    #if JLTSADDON == 1
        //Example macro usage here.
    #endif
    #if TASADDON == 1
        //Example macro usage here.
    #endif
    #undef CURRENTCLASSCFGWEAPONS
};

class CfgVehicles {
    #define CURRENTCLASSCFGVEHICLES 1
    #include "..\includes\addons\include_cfgvehicles.hpp" //Do not touch this.


    //Backpacks

    #if LSADDON == 1
        //Example macro usage here.
    #endif
    #if JLTSADDON == 1
        //Example macro usage here.
    #endif
    #if TASADDON == 1
        //Example macro usage here.
    #endif


    //Uniforms

    #if LSADDON == 1
        //Example macro usage here.
    #endif
    #if JLTSADDON == 1
        //Example macro usage here.
    #endif
    #if TASADDON == 1
        //Example macro usage here.
    #endif
    #undef CURRENTCLASSCFGVEHICLES
};
