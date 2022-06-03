/******************************************************************************/
/* File   : StbM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgStbM.hpp"
#include "StbM_core.hpp"
#include "infStbM_Exp.hpp"
#include "infStbM_Imp.hpp"

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
      INTERFACES_EXPORTED_STBM
      public abstract_module
   ,  public class_StbM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};

   public:
      module_StbM(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, STBM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, STBM_CONFIG_DATA, STBM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, STBM_CODE) DeInitFunction (void);
      FUNC(void, STBM_CODE) MainFunction   (void);
      STBM_CORE_FUNCTIONALITIES
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

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_StbM, STBM_VAR) StbM(
   {
#if(STD_ON == _ReSIM)
// char strModuleName[6];
#else
#endif
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
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgStbM;
         }
      }
      else{
#if(STD_ON == StbM_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == StbM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == StbM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  STBM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, STBM_CODE) module_StbM::DeInitFunction(void){
#if(STD_ON == StbM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == StbM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == StbM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  STBM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, STBM_CODE) module_StbM::MainFunction(void){
#if(STD_ON == StbM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == StbM_InitCheck)
   }
   else{
#if(STD_ON == StbM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  STBM_E_UNINIT
      );
#endif
   }
#endif
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

