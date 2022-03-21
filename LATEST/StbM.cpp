/******************************************************************************/
/* File   : StbM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "infStbM_Version.h"
#include "infStbM_EcuM.h"
#include "infStbM_Dcm.h"
#include "infStbM_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_StbM:
      public abstract_module
{
   public:
      FUNC(void, STBM_CODE) InitFunction   (void);
      FUNC(void, STBM_CODE) DeInitFunction (void);
      FUNC(void, STBM_CODE) GetVersionInfo (void);
      FUNC(void, STBM_CODE) MainFunction   (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_StbM, STBM_VAR) StbM;
CONSTP2VAR(infEcuMClient, STBM_VAR, STBM_CONST) gptrinfEcuMClient_StbM = &StbM;
CONSTP2VAR(infDcmClient,  STBM_VAR, STBM_CONST) gptrinfDcmClient_StbM  = &StbM;
CONSTP2VAR(infSchMClient, STBM_VAR, STBM_CONST) gptrinfSchMClient_StbM = &StbM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, STBM_CODE) module_StbM::InitFunction(void){
   StbM.IsInitDone = E_OK;
}

FUNC(void, STBM_CODE) module_StbM::DeInitFunction(void){
   StbM.IsInitDone = E_NOT_OK;
}

FUNC(void, STBM_CODE) module_StbM::GetVersionInfo(void){
}

FUNC(void, STBM_CODE) module_StbM::MainFunction(void){
}

#include "StbM_Unused.h"

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

