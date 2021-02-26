/*==================================================================================================

FILE: i2c_fw_load.h

DESCRIPTION: This module provides the firmware image for I2C Core.

Copyright (c) 2017 Qualcomm Technologies, Inc.
        All Rights Reserved.
Qualcomm Technologies, Inc. Confidential and Proprietary.

==================================================================================================*/
/*==================================================================================================
                                            DESCRIPTION
====================================================================================================

GLOBAL FUNCTIONS:
   i2c_fw_load

==================================================================================================*/
/*==================================================================================================
Edit History

$Header: //components/rel/boot.xf/2.1/QcomPkg/Library/I2CLib/i2c_fw_load.h#1 $

when       who     what, where, why
--------   ---     --------------------------------------------------------
13/07/17    VG       Initial revision

==================================================================================================*/
/*==================================================================================================
                                           INCLUDE FILES
==================================================================================================*/
#include "i2c_config.h"
#include "i2c_api.h"

/*==================================================================================================
                                        FUNCTION PROTOTYPES
==================================================================================================*/
i2c_status i2c_fw_load(plat_device_config *dcfg);