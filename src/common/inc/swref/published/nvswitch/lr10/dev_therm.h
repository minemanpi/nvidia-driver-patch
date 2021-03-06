/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the Software),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __lr10_dev_therm_h__
#define __lr10_dev_therm_h__
/* This file is autogenerated.  Do not edit */
#define NV_THERM_TSENSE_THRESHOLD_TEMPERATURES                                 0x00066f44 /* RW-4R */
#define NV_THERM_TSENSE_THRESHOLD_TEMPERATURES_WARNING_TEMPERATURE                   13:0 /* RWIVF */
#define NV_THERM_TSENSE_THRESHOLD_TEMPERATURES_WARNING_TEMPERATURE_INIT        0x00000e60 /* RWI-V */
#define NV_THERM_TSENSE_THRESHOLD_TEMPERATURES_OVERTEMP_TEMPERATURE                 29:16 /* RWIVF */
#define NV_THERM_TSENSE_THRESHOLD_TEMPERATURES_OVERTEMP_TEMPERATURE_INIT       0x000012c0 /* RWI-V */

#define NV_THERM_TSENSE_U2_A_0_BJT_0_TEMPERATURE_MODIFICATIONS                 0x00066f28 /* RW-4R */
#define NV_THERM_TSENSE_U2_A_0_BJT_0_TEMPERATURE_MODIFICATIONS_TEMPERATURE_OFFSET    13:0 /* RWIVF */
#define NV_THERM_TSENSE_U2_A_0_BJT_0_TEMPERATURE_MODIFICATIONS_TEMPERATURE_OFFSET_INIT  0x00000000 /* RWI-V */
#define NV_THERM_TSENSE_U2_A_0_BJT_0_TEMPERATURE_MODIFICATIONS_TEMPERATURE_OVERRIDE  29:16 /* RWIVF */
#define NV_THERM_TSENSE_U2_A_0_BJT_0_TEMPERATURE_MODIFICATIONS_TEMPERATURE_OVERRIDE_INIT  0x00000000 /* RWI-V */
#define NV_THERM_TSENSE_U2_A_0_BJT_0_TEMPERATURE_MODIFICATIONS_TEMPERATURE_OVERRIDE_EN  31:31 /* RWIVF */
#define NV_THERM_TSENSE_U2_A_0_BJT_0_TEMPERATURE_MODIFICATIONS_TEMPERATURE_OVERRIDE_EN_INIT  0x00000000 /* RWI-V */

#define NV_THERM_TSENSE_MAXIMUM_TEMPERATURE                                    0x00066f40 /* R--4R */
#define NV_THERM_TSENSE_MAXIMUM_TEMPERATURE_MAXIMUM_TEMPERATURE                      13:0 /* R--VF */
#define NV_THERM_TSENSE_MAXIMUM_TEMPERATURE_MAX_TEMP_SENSE_NUMBER                   21:16 /* R--VF */

#define NV_THERM_MSGBOX_COMMAND                                                0x000660e0 /* RW-4R */
#define NV_THERM_MSGBOX_COMMAND_DATA                                                 30:0 /* RWIVF */
#define NV_THERM_MSGBOX_COMMAND_DATA_INIT                                      0x00000000 /* RWI-V */
#define NV_THERM_MSGBOX_COMMAND_INTR                                                31:31 /* RWIVF */
#define NV_THERM_MSGBOX_COMMAND_INTR_NOT_PENDING                               0x00000000 /* RWI-V */
#define NV_THERM_MSGBOX_COMMAND_INTR_PENDING                                   0x00000001 /* RW--V */
#endif // __lr10_dev_therm_h__
