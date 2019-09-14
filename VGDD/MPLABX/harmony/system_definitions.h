/*******************************************************************************
  System Definitions

  File Name:
    sys_definitions.h

  Summary:
    MPLAB Harmony project system definitions.

  Description:
    This file contains the system-wide prototypes and definitions for an MPLAB
    Harmony project.
 *******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 *******************************************************************************/
//DOM-IGNORE-END

#ifndef _SYS_DEFINITIONS_H
#define _SYS_DEFINITIONS_H


// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>
#include "system/devcon/sys_devcon.h"
// <editor-fold defaultstate="collapsed" desc="Generated Code">
// VGDD_MPLABX_WIZARD_START_SECTION: SystemDefinitions *** DO NOT DELETE THIS LINE! ***
// These lines will be replaced by VGDD MPLAB X Wizard with lines for the SystemDefinitions Section
// Don't delete the starting and ending markers!
// VGDD_MPLABX_WIZARD_END_SECTION *** DO NOT DELETE THIS LINE! ***
// </editor-fold>



// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* System Objects

  Summary:
    Structure holding the system's object handles

  Description:
    This structure contains the object handles for all objects in the
    MPLAB Harmony project's system configuration.

  Remarks:
    These handles are returned from the "Initialize" functions for each module
    and must be passed into the "Tasks" function for each module.
*/

typedef struct
{
    SYS_MODULE_OBJ  sysDevcon;
    SYS_MODULE_OBJ  sysDma;
    SYS_MODULE_OBJ  gfxObject0;
// <editor-fold defaultstate="collapsed" desc="Generated Code">
// VGDD_MPLABX_WIZARD_START_SECTION: SystemObjects *** DO NOT DELETE THIS LINE! ***
// These lines will be replaced by VGDD MPLAB X Wizard with lines for the SystemObjects Section
// Don't delete the starting and ending markers!
// VGDD_MPLABX_WIZARD_END_SECTION *** DO NOT DELETE THIS LINE! ***
// </editor-fold>
} SYSTEM_OBJECTS;


// *****************************************************************************
// *****************************************************************************
// Section: extern declarations
// *****************************************************************************
// *****************************************************************************

extern SYSTEM_OBJECTS sysObj;

#endif /* _SYS_DEFINITIONS_H */
/*******************************************************************************
 End of File
*/
