/******************************************************************************/
/* File   : StbM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infStbM_EcuM.hpp"
#include "infStbM_Dcm.hpp"
#include "infStbM_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define STBM_AR_RELEASE_VERSION_MAJOR                                          4
#define STBM_AR_RELEASE_VERSION_MINOR                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(STBM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible STBM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(STBM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible STBM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_StbM:
      public abstract_module
{
   public:
      module_StbM(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, STBM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, STBM_CONFIG_DATA, STBM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, STBM_CODE) DeInitFunction (void);
      FUNC(void, STBM_CODE) MainFunction   (void);
};

extern VAR(module_StbM, STBM_VAR) StbM;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, STBM_VAR, STBM_CONST) gptrinfEcuMClient_StbM = &StbM;
CONSTP2VAR(infDcmClient,  STBM_VAR, STBM_CONST) gptrinfDcmClient_StbM  = &StbM;
CONSTP2VAR(infSchMClient, STBM_VAR, STBM_CONST) gptrinfSchMClient_StbM = &StbM;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgStbM.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_StbM, STBM_VAR) StbM(
   {
         STBM_AR_RELEASE_VERSION_MAJOR
      ,  STBM_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, STBM_CODE) module_StbM::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, STBM_CONFIG_DATA, STBM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == StbM_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == StbM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == StbM_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfg_CanIf as back-up configuration
            lptrCfg = PBcfg_CanIf;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == StbM_InitCheck)
   }
#endif
}

FUNC(void, STBM_CODE) module_StbM::DeInitFunction(void){
#if(STD_ON == StbM_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == StbM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == StbM_InitCheck)
   }
#endif
}

FUNC(void, STBM_CODE) module_StbM::MainFunction(void){
#if(STD_ON == StbM_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == StbM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == StbM_InitCheck)
   }
#endif
}

class class_StbM_Unused{
   public:
};

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

