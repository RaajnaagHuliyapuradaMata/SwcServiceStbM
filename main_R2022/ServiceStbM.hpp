#pragma once
/******************************************************************************/
/* File   : ServiceStbM.hpp                                                          */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceStbM.hpp"
#include "CfgServiceStbM.hpp"
#include "ServiceStbM_core.hpp"
#include "infServiceStbM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceStbM:
      INTERFACES_EXPORTED_SERVICESTBM
      public abstract_module
   ,  public class_ServiceStbM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceStbM_Type* lptrConst = (ConstServiceStbM_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICESTBM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICESTBM_CONST,       SERVICESTBM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESTBM_CONFIG_DATA, SERVICESTBM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICESTBM_CODE) DeInitFunction (void);
      FUNC(void, SERVICESTBM_CODE) MainFunction   (void);
      SERVICESTBM_CORE_FUNCTIONALITIES
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
extern VAR(module_ServiceStbM, SERVICESTBM_VAR) ServiceStbM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

