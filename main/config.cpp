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
            DECLARE(kjwsexampleuniform)
        };
        //Use commas after the brackets in DECLARE() for multiple uniforms.
    };
    #undef CURRENTCLASSCFGPATCHES
};

class CfgWeapons {
    #define CURRENTCLASSCFGWEAPONS 1
    #include "..\includes\addons\include_cfgweapons.hpp" //Do not touch this.


    //Helmets

    #if LSADDON == 1
        #define CURRENTMOD ls
    #endif
    #if JLTSADDON == 1
        #define CURRENTMOD jlts
        JLTS_HELMET_TROOPER(kjwsexamplehelmet,Example)
    #endif
    #if TASADDON == 1
        #define CURRENTMOD tas
        //Example macro usage here.
    #endif


    //Vests

    #if LSADDON == 1
        #define CURRENTMOD ls
        //Example macro usage here.
    #endif
    #if JLTSADDON == 1
        #define CURRENTMOD jlts
        //Example macro usage here.
    #endif
    #if TASADDON == 1
        #define CURRENTMOD tas
        //Example macro usage here.
    #endif


    //NVGs

    #if LSADDON == 1
        #define CURRENTMOD ls
        //Example macro usage here.
    #endif
    #if JLTSADDON == 1
        #define CURRENTMOD jlts
        //Example macro usage here.
    #endif
    #if TASADDON == 1
        #define CURRENTMOD tas
        //3AS has no NVGs.
    #endif


    //Uniforms

    #if LSADDON == 1
        #define CURRENTMOD ls
    #endif
    #if JLTSADDON == 1
        #define CURRENTMOD jlts
        JLTS_UNIFORM_TROOPER(kjwsexampleuniform,Example)
    #endif
    #if TASADDON == 1
        #define CURRENTMOD tas
        //Example macro usage here.
    #endif
    #undef CURRENTCLASSCFGWEAPONS
};

class CfgVehicles {
    #define CURRENTCLASSCFGVEHICLES 1
    #include "..\includes\addons\include_cfgvehicles.hpp" //Do not touch this.


    //Backpacks

    #if LSADDON == 1
        #define CURRENTMOD ls
        //Example macro usage here.
    #endif
    #if JLTSADDON == 1
        #define CURRENTMOD jlts
        //Example macro usage here.
    #endif
    #if TASADDON == 1
        #define CURRENTMOD tas
        //Example macro usage here.
    #endif


    //Uniforms

    #if LSADDON == 1
        #define CURRENTMOD ls
    #endif
    #if JLTSADDON == 1
        #define CURRENTMOD jlts
        JLTS_UNIFORM_TROOPER(kjwsexampleuniform,Example)
    #endif
    #if TASADDON == 1
        #define CURRENTMOD tas
        //Example macro usage here.
    #endif
    #undef CURRENTCLASSCFGVEHICLES
};
