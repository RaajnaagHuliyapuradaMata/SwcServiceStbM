/******************************************************************************/
/* File   : StbM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "StbM.hpp"
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

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, STBM_VAR, STBM_CONST) gptrinfEcuMClient_StbM = &StbM;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_StbM, STBM_VAR) StbM;

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
         lptrCfg = lptrCfgModule;
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

FUNC(void, STBM_CODE) module_StbM::DeInitFunction(
   void
){
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

FUNC(void, STBM_CODE) module_StbM::MainFunction(
   void
){
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

