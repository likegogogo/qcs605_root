/** 
    @file  i2c_config.h
    @brief interface to device configuration
 */
/*=============================================================================
            Copyright (c) 2017 Qualcomm Technologies, Incorporated.
                              All rights reserved.
              Qualcomm Technologies, Confidential and Proprietary.
=============================================================================*/

#ifndef __I2C_CONFIG_H__
#define __I2C_CONFIG_H__

#include "i2c_types.h"

typedef struct plat_clock_config 
{
    uint32  se_clock_frequency_khz;
    uint32  bus_speed_khz;
    uint8   clk_div;
    uint8   t_cycle;
    uint8   t_high;
    uint8   t_low;

} plat_clock_config;

typedef struct plat_device_config
{
    uint8      *core_base_addr;
    uint32      core_offset;
    uint8       qupv3_instance;
    uint8       core_index;
    uint16      core_irq;
    boolean     polled_mode;
    uint16      min_data_length_for_dma;

    uint8       gpi_index;

    uint32      active_scl_encoding;
    uint32      active_sda_encoding;
    uint32      inactive_scl_encoding;
    uint32      inactive_sda_encoding;
    boolean     gpio_exclusive_access;

    uint8      *tcsr_base_addr;
    uint32      tcsr_reg_offset;
    uint32      tcsr_reg_value;

    uint8     **common_clocks;
    uint8     **se_clock;
    uint8     **se_src_clock;
    uint32      resource_votes;

    plat_clock_config   *clock_config;

} plat_device_config;

uint32 plat_get_num_initialized_cores (void);
uint32 plat_get_num_clients (void);
void *plat_get_device_config_base (void);

#endif