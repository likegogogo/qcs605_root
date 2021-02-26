////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2017 Qualcomm Technologies, Inc.
// All Rights Reserved.
// Confidential and Proprietary - Qualcomm Technologies, Inc.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file  camxawb.h
/// @brief AWB algorithm interface implementation header
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CAMXAWB_H
#define CAMXAWB_H

#include "chiawbinterface.h"
#include "camxmoduleconfig.h"

/// @brief  Represents AWB internal data
struct AWBWrapperInternalDataType
{
    CHIAWBAlgorithm         AWBOps;         ///< AWB algorithm interface function pointers
    StatsAlgorithmHandle    hAWBAlgorithm;  ///< AWB algorithm handle
};

#endif // CAMXAWB_H