/*****************************************************/
/* File   : StbM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "StbM_EcuM.h"
#include "StbM_SchM.h"
#include "StbM_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_StbM:
      public abstract_module
   ,  public interface_StbM_EcuM
   ,  public interface_StbM_SchM
{
   public:
      FUNC(void, STBM_CODE) InitFunction   (void);
      FUNC(void, STBM_CODE) DeInitFunction (void);
      FUNC(void, STBM_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_StbM StbM;

interface_StbM_EcuM *EcuM_Client_ptr_StbM = &StbM;
interface_StbM_SchM *SchM_Client_ptr_StbM = &StbM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, STBM_CODE) module_StbM::InitFunction(void){
}

FUNC(void, STBM_CODE) module_StbM::DeInitFunction(void){
}

FUNC(void, STBM_CODE) module_StbM::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

