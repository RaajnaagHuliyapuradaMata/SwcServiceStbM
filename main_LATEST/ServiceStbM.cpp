/******************************************************************************/
/* File   : ServiceStbM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceStbM.hpp"
#include "infServiceStbM_Imp.hpp"

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

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceStbM, STBM_VAR) ServiceStbM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, STBM_CODE) module_ServiceStbM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, STBM_CONST,       STBM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   STBM_CONFIG_DATA, STBM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceStbM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceStbM_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceStbM_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceStbM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceStbM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  STBM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, STBM_CODE) module_ServiceStbM::DeInitFunction(
   void
){
#if(STD_ON == ServiceStbM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceStbM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceStbM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  STBM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, STBM_CODE) module_ServiceStbM::MainFunction(
   void
){
#if(STD_ON == ServiceStbM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceStbM_InitCheck)
   }
   else{
#if(STD_ON == ServiceStbM_DevErrorDetect)
      ServiceDet_ReportError(
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

