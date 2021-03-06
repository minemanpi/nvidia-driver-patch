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

#ifndef __lr10_dev_trim_h__
#define __lr10_dev_trim_h__
/* This file is autogenerated.  Do not edit */
#define NV_PCLOCK_NVSW_CLK_DIST_MODE                                                               0x0002402C /* RW-4R */
#define NV_PCLOCK_NVSW_CLK_DIST_MODE_SWITCH2CLK_DIST_MODE                                                 0:0 /* RWAUF */
#define NV_PCLOCK_NVSW_CLK_DIST_MODE_SWITCH2CLK_DIST_MODE_1XCLK                                    0x00000000 /* RW--V */
#define NV_PCLOCK_NVSW_CLK_DIST_MODE_SWITCH2CLK_DIST_MODE_2XCLK                                    0x00000001 /* RW--V */
#define NV_PCLOCK_NVSW_CLK_DIST_MODE_SWITCH2CLK_DIST_MODE_INIT                                     0x00000000 /* RWA-V */

#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF                                                             0x00024004 /* RW-4R */
#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF_MDIV                                                               7:0 /* RWAUF */
#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF_MDIV_INIT                                                   0x00000003 /* RWA-V */
#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF_MDIV_MAX                                                    0x000000FF /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF_MDIV_MIN                                                    0x00000001 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF_NDIV                                                              15:8 /* RWAUF */
#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF_NDIV_INIT                                                   0x00000050 /* RWA-V */
#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF_NDIV_MAX                                                    0x000000FF /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF_NDIV_MIN                                                    0x00000001 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF_PLDIV                                                            21:16 /* RWAUF */
#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF_PLDIV_INIT                                                  0x00000002 /* RWA-V */
#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF_PLDIV_MAX                                                   0x0000001F /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_COEFF_PLDIV_MIN                                                   0x00000001 /* RW--V */

#define NV_PCLOCK_NVSW_SWITCHPLL_CFG                                                               0x00024000 /* RW-4R */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_ENABLE                                                               0:0 /* RWAUF */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_ENABLE_INIT                                                   0x00000000 /* RWA-V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_ENABLE_NO                                                     0x00000000 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_ENABLE_YES                                                    0x00000001 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_IDDQ                                                                 1:1 /* RWAUF */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_IDDQ_INIT                                                     0x00000001 /* RWA-V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_IDDQ_POWER_OFF                                                0x00000001 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_IDDQ_POWER_ON                                                 0x00000000 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_SYNC_MODE                                                            2:2 /* RWAUF */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_SYNC_MODE_DISABLE                                             0x00000000 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_SYNC_MODE_ENABLE                                              0x00000001 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_SYNC_MODE_INIT                                                0x00000001 /* RWA-V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_PLL_LOCK                                                           17:17 /* R--UF */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_PLL_LOCK_FALSE                                                0x00000000 /* R---V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_PLL_LOCK_TRUE                                                 0x00000001 /* R---V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_PLL_SSA                                                            18:18 /* R--UF */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_PLL_SSA_FALSE                                                 0x00000000 /* R---V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_PLL_SSA_TRUE                                                  0x00000001 /* R---V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_PLL_SSD                                                            19:19 /* R--UF */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_PLL_SSD_FALSE                                                 0x00000000 /* R---V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_PLL_SSD_TRUE                                                  0x00000001 /* R---V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_BYPASSPLL_CYA                                                      21:21 /* RWAUF */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_BYPASSPLL_CYA_INIT                                            0x00000000 /* RWA-V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_LOOP_CTRL                                                          23:22 /* RWAUF */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_LOOP_CTRL_INIT                                                0x00000000 /* RWA-V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_PLL_FREQLOCK                                                       24:24 /* R--UF */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_PLL_FREQLOCK_NO                                               0x00000000 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_PLL_FREQLOCK_YES                                              0x00000001 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_RESETB                                                             25:25 /* RWAUF */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_RESETB_INIT                                                   0x00000000 /* RWA-V */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_SEL_TESTOUT                                                        28:26 /* RWAUF */
#define NV_PCLOCK_NVSW_SWITCHPLL_CFG_SEL_TESTOUT_INIT                                              0x00000000 /* RWA-V */

#define NV_PCLOCK_NVSW_SWITCHCLK                                                                   0x00024050 /* RW-4R */
#define NV_PCLOCK_NVSW_SWITCHCLK_MUX                                                                      7:0 /* RWAUF */
#define NV_PCLOCK_NVSW_SWITCHCLK_MUX_INIT                                                          0x00000001 /* RWA-V */
#define NV_PCLOCK_NVSW_SWITCHCLK_MUX_NVLINK_TXREFCLK                                               0x00000010 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHCLK_MUX_PCIE_TXREFCLK                                                 0x00000004 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHCLK_MUX_PEX_REFCLK                                                    0x00000001 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHCLK_MUX_PEX_REFCLK_FILLER1                                            0x00000020 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHCLK_MUX_PEX_REFCLK_FILLER2                                            0x00000040 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHCLK_MUX_PEX_REFCLK_FILLER3                                            0x00000080 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHCLK_MUX_SWITCHPLL                                                     0x00000008 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHCLK_MUX_TESTCLK                                                       0x00000002 /* RW--V */
#define NV_PCLOCK_NVSW_SWITCHCLK_RDY_PEX_REFCLK                                                           8:8 /* R--UF */
#define NV_PCLOCK_NVSW_SWITCHCLK_RDY_TESTCLK                                                              9:9 /* R--UF */
#define NV_PCLOCK_NVSW_SWITCHCLK_RDY_PCIE_TXREFCLK                                                      10:10 /* R--UF */
#define NV_PCLOCK_NVSW_SWITCHCLK_RDY_SWITCHPLL                                                          11:11 /* R--UF */
#define NV_PCLOCK_NVSW_SWITCHCLK_RDY_NVLINK_TXREFCLK                                                    12:12 /* R--UF */
#define NV_PCLOCK_NVSW_SWITCHCLK_RDY_PEX_REFCLK_FILLER1                                                 13:13 /* R--UF */
#define NV_PCLOCK_NVSW_SWITCHCLK_RDY_PEX_REFCLK_FILLER2                                                 14:14 /* R--UF */
#define NV_PCLOCK_NVSW_SWITCHCLK_RDY_PEX_REFCLK_FILLER3                                                 15:15 /* R--UF */

#define NV_PCLOCK_NVSW_SYSTEMCLK                                                                   0x00024080 /* RW-4R */
#define NV_PCLOCK_NVSW_SYSTEMCLK_MUX                                                                      7:0 /* RWAUF */
#define NV_PCLOCK_NVSW_SYSTEMCLK_MUX_INIT                                                          0x00000001 /* RWA-V */
#define NV_PCLOCK_NVSW_SYSTEMCLK_MUX_NVLINK_TXREFCLK                                               0x00000010 /* RW--V */
#define NV_PCLOCK_NVSW_SYSTEMCLK_MUX_PCIE_TXREFCLK                                                 0x00000004 /* RW--V */
#define NV_PCLOCK_NVSW_SYSTEMCLK_MUX_PEX_REFCLK                                                    0x00000001 /* RW--V */
#define NV_PCLOCK_NVSW_SYSTEMCLK_MUX_PEX_REFCLK_FILLER                                             0x00000002 /* RW--V */
#define NV_PCLOCK_NVSW_SYSTEMCLK_MUX_PEX_REFCLK_FILLER1                                            0x00000020 /* RW--V */
#define NV_PCLOCK_NVSW_SYSTEMCLK_MUX_PEX_REFCLK_FILLER2                                            0x00000040 /* RW--V */
#define NV_PCLOCK_NVSW_SYSTEMCLK_MUX_PEX_REFCLK_FILLER3                                            0x00000080 /* RW--V */
#define NV_PCLOCK_NVSW_SYSTEMCLK_MUX_SWITCHPLL                                                     0x00000008 /* RW--V */
#define NV_PCLOCK_NVSW_SYSTEMCLK_SYSTEMCLK_RDY_PEX_REFCLK                                                 8:8 /* R--UF */
#define NV_PCLOCK_NVSW_SYSTEMCLK_SYSTEMCLK_RDY_PEX_REFCLK_FILLER                                          9:9 /* R--UF */
#define NV_PCLOCK_NVSW_SYSTEMCLK_SYSTEMCLK_RDY_PCIE_TXREFCLK                                            10:10 /* R--UF */
#define NV_PCLOCK_NVSW_SYSTEMCLK_SYSTEMCLK_RDY_SWITCHPLL                                                11:11 /* R--UF */
#define NV_PCLOCK_NVSW_SYSTEMCLK_SYSTEMCLK_RDY_NVLINK_TXREFCLK                                          12:12 /* R--UF */
#define NV_PCLOCK_NVSW_SYSTEMCLK_SYSTEMCLK_RDY_PEX_REFCLK_FILLER1                                       13:13 /* R--UF */
#define NV_PCLOCK_NVSW_SYSTEMCLK_SYSTEMCLK_RDY_PEX_REFCLK_FILLER2                                       14:14 /* R--UF */
#define NV_PCLOCK_NVSW_SYSTEMCLK_SYSTEMCLK_RDY_PEX_REFCLK_FILLER3                                       15:15 /* R--UF */

#define NV_PCLOCK_NVSW_JTAGINTFC                                                                   0x00024030 /* RW-4R */
#define NV_PCLOCK_NVSW_JTAGINTFC_CLK_DIVSEL                                                               2:0 /* RWAUF */
#define NV_PCLOCK_NVSW_JTAGINTFC_CLK_DIVSEL_INIT                                                   0x00000001 /* RWA-V */
#define NV_PCLOCK_NVSW_JTAGINTFC_JTAGTM_INTFC_CLK_EN                                                      3:3 /* RWAUF */
#define NV_PCLOCK_NVSW_JTAGINTFC_JTAGTM_INTFC_CLK_EN_INIT                                          0x00000001 /* RWA-V */
#define NV_PCLOCK_NVSW_JTAGINTFC_JTAGTM_INTFC_CLK_EN_OFF                                           0x00000000 /* RW--V */
#define NV_PCLOCK_NVSW_JTAGINTFC_JTAGTM_INTFC_CLK_EN_ON                                            0x00000001 /* RW--V */

#define NV_PCLOCK_NVSW_RX_BYPASS_REFCLK                                                            0x00024090 /* RW-4R */
#define NV_PCLOCK_NVSW_RX_BYPASS_REFCLK_DISABLE                                                           0:0 /* RWAUF */
#define NV_PCLOCK_NVSW_RX_BYPASS_REFCLK_DISABLE_INIT                                               0x00000000 /* RWA-V */
#define NV_PCLOCK_NVSW_RX_BYPASS_REFCLK_DIV_SYNC_WAIT                                                     3:1 /* RWAUF */
#define NV_PCLOCK_NVSW_RX_BYPASS_REFCLK_DIV_SYNC_WAIT_INIT                                         0x00000001 /* RWA-V */
#define NV_PCLOCK_NVSW_RX_BYPASS_REFCLK_DIV                                                              13:4 /* RWAUF */
#define NV_PCLOCK_NVSW_RX_BYPASS_REFCLK_DIV_INIT                                                   0x0000000C /* RWA-V */
#define NV_PCLOCK_NVSW_RX_BYPASS_REFCLK_REFCLK_BUF_EN_CYA                                               14:14 /* RWAUF */
#define NV_PCLOCK_NVSW_RX_BYPASS_REFCLK_REFCLK_BUF_EN_CYA_INIT                                     0x00000000 /* RWA-V */
#define NV_PCLOCK_NVSW_RX_BYPASS_REFCLK_REFCLK_BUF_EN_OVERRIDE                                          15:15 /* RWAUF */
#define NV_PCLOCK_NVSW_RX_BYPASS_REFCLK_REFCLK_BUF_EN_OVERRIDE_INIT                                0x00000000 /* RWA-V */
#endif // __lr10_dev_trim_h__
