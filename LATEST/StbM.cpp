/******************************************************************************/
/* File   : StbM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.hpp"
#include "CfgStbM.hpp"
#include "infStbM_EcuM.hpp"
#include "infStbM_Dcm.hpp"
#include "infStbM_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define STBM_AR_RELEASE_MAJOR_VERSION                                          4
#define STBM_AR_RELEASE_MINOR_VERSION                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(STBM_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible STBM_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(STBM_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible STBM_AR_RELEASE_MINOR_VERSION!"
#endif

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

   private:
      CONST(Std_TypeVersionInfo, STBM_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
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
#if(STD_ON == StbM_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, STBM_CODE) module_StbM::MainFunction(void){
}

#include "StbM_Unused.hpp"

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

