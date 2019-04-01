/* SPDX-License-Identifier: MIT
 *
 * Copyright 2016-2018 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

/************************************
 ** This is an auto-generated file **
 **       DO NOT EDIT BELOW        **
 ************************************/

#ifndef ASIC_REG_MME_CMDQ_MASKS_H_
#define ASIC_REG_MME_CMDQ_MASKS_H_

/*
 *****************************************
 *   MME_CMDQ (Prototype: CMDQ)
 *****************************************
 */

/* MME_CMDQ_GLBL_CFG0 */
#define MME_CMDQ_GLBL_CFG0_PQF_EN_SHIFT                              0
#define MME_CMDQ_GLBL_CFG0_PQF_EN_MASK                               0x1
#define MME_CMDQ_GLBL_CFG0_CQF_EN_SHIFT                              1
#define MME_CMDQ_GLBL_CFG0_CQF_EN_MASK                               0x2
#define MME_CMDQ_GLBL_CFG0_CP_EN_SHIFT                               2
#define MME_CMDQ_GLBL_CFG0_CP_EN_MASK                                0x4
#define MME_CMDQ_GLBL_CFG0_DMA_EN_SHIFT                              3
#define MME_CMDQ_GLBL_CFG0_DMA_EN_MASK                               0x8

/* MME_CMDQ_GLBL_CFG1 */
#define MME_CMDQ_GLBL_CFG1_PQF_STOP_SHIFT                            0
#define MME_CMDQ_GLBL_CFG1_PQF_STOP_MASK                             0x1
#define MME_CMDQ_GLBL_CFG1_CQF_STOP_SHIFT                            1
#define MME_CMDQ_GLBL_CFG1_CQF_STOP_MASK                             0x2
#define MME_CMDQ_GLBL_CFG1_CP_STOP_SHIFT                             2
#define MME_CMDQ_GLBL_CFG1_CP_STOP_MASK                              0x4
#define MME_CMDQ_GLBL_CFG1_DMA_STOP_SHIFT                            3
#define MME_CMDQ_GLBL_CFG1_DMA_STOP_MASK                             0x8
#define MME_CMDQ_GLBL_CFG1_PQF_FLUSH_SHIFT                           8
#define MME_CMDQ_GLBL_CFG1_PQF_FLUSH_MASK                            0x100
#define MME_CMDQ_GLBL_CFG1_CQF_FLUSH_SHIFT                           9
#define MME_CMDQ_GLBL_CFG1_CQF_FLUSH_MASK                            0x200
#define MME_CMDQ_GLBL_CFG1_CP_FLUSH_SHIFT                            10
#define MME_CMDQ_GLBL_CFG1_CP_FLUSH_MASK                             0x400
#define MME_CMDQ_GLBL_CFG1_DMA_FLUSH_SHIFT                           11
#define MME_CMDQ_GLBL_CFG1_DMA_FLUSH_MASK                            0x800

/* MME_CMDQ_GLBL_PROT */
#define MME_CMDQ_GLBL_PROT_PQF_PROT_SHIFT                            0
#define MME_CMDQ_GLBL_PROT_PQF_PROT_MASK                             0x1
#define MME_CMDQ_GLBL_PROT_CQF_PROT_SHIFT                            1
#define MME_CMDQ_GLBL_PROT_CQF_PROT_MASK                             0x2
#define MME_CMDQ_GLBL_PROT_CP_PROT_SHIFT                             2
#define MME_CMDQ_GLBL_PROT_CP_PROT_MASK                              0x4
#define MME_CMDQ_GLBL_PROT_DMA_PROT_SHIFT                            3
#define MME_CMDQ_GLBL_PROT_DMA_PROT_MASK                             0x8
#define MME_CMDQ_GLBL_PROT_PQF_ERR_PROT_SHIFT                        4
#define MME_CMDQ_GLBL_PROT_PQF_ERR_PROT_MASK                         0x10
#define MME_CMDQ_GLBL_PROT_CQF_ERR_PROT_SHIFT                        5
#define MME_CMDQ_GLBL_PROT_CQF_ERR_PROT_MASK                         0x20
#define MME_CMDQ_GLBL_PROT_CP_ERR_PROT_SHIFT                         6
#define MME_CMDQ_GLBL_PROT_CP_ERR_PROT_MASK                          0x40
#define MME_CMDQ_GLBL_PROT_DMA_ERR_PROT_SHIFT                        7
#define MME_CMDQ_GLBL_PROT_DMA_ERR_PROT_MASK                         0x80

/* MME_CMDQ_GLBL_ERR_CFG */
#define MME_CMDQ_GLBL_ERR_CFG_PQF_ERR_INT_EN_SHIFT                   0
#define MME_CMDQ_GLBL_ERR_CFG_PQF_ERR_INT_EN_MASK                    0x1
#define MME_CMDQ_GLBL_ERR_CFG_PQF_ERR_MSG_EN_SHIFT                   1
#define MME_CMDQ_GLBL_ERR_CFG_PQF_ERR_MSG_EN_MASK                    0x2
#define MME_CMDQ_GLBL_ERR_CFG_PQF_STOP_ON_ERR_SHIFT                  2
#define MME_CMDQ_GLBL_ERR_CFG_PQF_STOP_ON_ERR_MASK                   0x4
#define MME_CMDQ_GLBL_ERR_CFG_CQF_ERR_INT_EN_SHIFT                   3
#define MME_CMDQ_GLBL_ERR_CFG_CQF_ERR_INT_EN_MASK                    0x8
#define MME_CMDQ_GLBL_ERR_CFG_CQF_ERR_MSG_EN_SHIFT                   4
#define MME_CMDQ_GLBL_ERR_CFG_CQF_ERR_MSG_EN_MASK                    0x10
#define MME_CMDQ_GLBL_ERR_CFG_CQF_STOP_ON_ERR_SHIFT                  5
#define MME_CMDQ_GLBL_ERR_CFG_CQF_STOP_ON_ERR_MASK                   0x20
#define MME_CMDQ_GLBL_ERR_CFG_CP_ERR_INT_EN_SHIFT                    6
#define MME_CMDQ_GLBL_ERR_CFG_CP_ERR_INT_EN_MASK                     0x40
#define MME_CMDQ_GLBL_ERR_CFG_CP_ERR_MSG_EN_SHIFT                    7
#define MME_CMDQ_GLBL_ERR_CFG_CP_ERR_MSG_EN_MASK                     0x80
#define MME_CMDQ_GLBL_ERR_CFG_CP_STOP_ON_ERR_SHIFT                   8
#define MME_CMDQ_GLBL_ERR_CFG_CP_STOP_ON_ERR_MASK                    0x100
#define MME_CMDQ_GLBL_ERR_CFG_DMA_ERR_INT_EN_SHIFT                   9
#define MME_CMDQ_GLBL_ERR_CFG_DMA_ERR_INT_EN_MASK                    0x200
#define MME_CMDQ_GLBL_ERR_CFG_DMA_ERR_MSG_EN_SHIFT                   10
#define MME_CMDQ_GLBL_ERR_CFG_DMA_ERR_MSG_EN_MASK                    0x400
#define MME_CMDQ_GLBL_ERR_CFG_DMA_STOP_ON_ERR_SHIFT                  11
#define MME_CMDQ_GLBL_ERR_CFG_DMA_STOP_ON_ERR_MASK                   0x800

/* MME_CMDQ_GLBL_ERR_ADDR_LO */
#define MME_CMDQ_GLBL_ERR_ADDR_LO_VAL_SHIFT                          0
#define MME_CMDQ_GLBL_ERR_ADDR_LO_VAL_MASK                           0xFFFFFFFF

/* MME_CMDQ_GLBL_ERR_ADDR_HI */
#define MME_CMDQ_GLBL_ERR_ADDR_HI_VAL_SHIFT                          0
#define MME_CMDQ_GLBL_ERR_ADDR_HI_VAL_MASK                           0xFFFFFFFF

/* MME_CMDQ_GLBL_ERR_WDATA */
#define MME_CMDQ_GLBL_ERR_WDATA_VAL_SHIFT                            0
#define MME_CMDQ_GLBL_ERR_WDATA_VAL_MASK                             0xFFFFFFFF

/* MME_CMDQ_GLBL_SECURE_PROPS */
#define MME_CMDQ_GLBL_SECURE_PROPS_ASID_SHIFT                        0
#define MME_CMDQ_GLBL_SECURE_PROPS_ASID_MASK                         0x3FF
#define MME_CMDQ_GLBL_SECURE_PROPS_MMBP_SHIFT                        10
#define MME_CMDQ_GLBL_SECURE_PROPS_MMBP_MASK                         0x400

/* MME_CMDQ_GLBL_NON_SECURE_PROPS */
#define MME_CMDQ_GLBL_NON_SECURE_PROPS_ASID_SHIFT                    0
#define MME_CMDQ_GLBL_NON_SECURE_PROPS_ASID_MASK                     0x3FF
#define MME_CMDQ_GLBL_NON_SECURE_PROPS_MMBP_SHIFT                    10
#define MME_CMDQ_GLBL_NON_SECURE_PROPS_MMBP_MASK                     0x400

/* MME_CMDQ_GLBL_STS0 */
#define MME_CMDQ_GLBL_STS0_PQF_IDLE_SHIFT                            0
#define MME_CMDQ_GLBL_STS0_PQF_IDLE_MASK                             0x1
#define MME_CMDQ_GLBL_STS0_CQF_IDLE_SHIFT                            1
#define MME_CMDQ_GLBL_STS0_CQF_IDLE_MASK                             0x2
#define MME_CMDQ_GLBL_STS0_CP_IDLE_SHIFT                             2
#define MME_CMDQ_GLBL_STS0_CP_IDLE_MASK                              0x4
#define MME_CMDQ_GLBL_STS0_DMA_IDLE_SHIFT                            3
#define MME_CMDQ_GLBL_STS0_DMA_IDLE_MASK                             0x8
#define MME_CMDQ_GLBL_STS0_PQF_IS_STOP_SHIFT                         4
#define MME_CMDQ_GLBL_STS0_PQF_IS_STOP_MASK                          0x10
#define MME_CMDQ_GLBL_STS0_CQF_IS_STOP_SHIFT                         5
#define MME_CMDQ_GLBL_STS0_CQF_IS_STOP_MASK                          0x20
#define MME_CMDQ_GLBL_STS0_CP_IS_STOP_SHIFT                          6
#define MME_CMDQ_GLBL_STS0_CP_IS_STOP_MASK                           0x40
#define MME_CMDQ_GLBL_STS0_DMA_IS_STOP_SHIFT                         7
#define MME_CMDQ_GLBL_STS0_DMA_IS_STOP_MASK                          0x80

/* MME_CMDQ_GLBL_STS1 */
#define MME_CMDQ_GLBL_STS1_PQF_RD_ERR_SHIFT                          0
#define MME_CMDQ_GLBL_STS1_PQF_RD_ERR_MASK                           0x1
#define MME_CMDQ_GLBL_STS1_CQF_RD_ERR_SHIFT                          1
#define MME_CMDQ_GLBL_STS1_CQF_RD_ERR_MASK                           0x2
#define MME_CMDQ_GLBL_STS1_CP_RD_ERR_SHIFT                           2
#define MME_CMDQ_GLBL_STS1_CP_RD_ERR_MASK                            0x4
#define MME_CMDQ_GLBL_STS1_CP_UNDEF_CMD_ERR_SHIFT                    3
#define MME_CMDQ_GLBL_STS1_CP_UNDEF_CMD_ERR_MASK                     0x8
#define MME_CMDQ_GLBL_STS1_CP_STOP_OP_SHIFT                          4
#define MME_CMDQ_GLBL_STS1_CP_STOP_OP_MASK                           0x10
#define MME_CMDQ_GLBL_STS1_CP_MSG_WR_ERR_SHIFT                       5
#define MME_CMDQ_GLBL_STS1_CP_MSG_WR_ERR_MASK                        0x20
#define MME_CMDQ_GLBL_STS1_DMA_RD_ERR_SHIFT                          8
#define MME_CMDQ_GLBL_STS1_DMA_RD_ERR_MASK                           0x100
#define MME_CMDQ_GLBL_STS1_DMA_WR_ERR_SHIFT                          9
#define MME_CMDQ_GLBL_STS1_DMA_WR_ERR_MASK                           0x200
#define MME_CMDQ_GLBL_STS1_DMA_RD_MSG_ERR_SHIFT                      10
#define MME_CMDQ_GLBL_STS1_DMA_RD_MSG_ERR_MASK                       0x400
#define MME_CMDQ_GLBL_STS1_DMA_WR_MSG_ERR_SHIFT                      11
#define MME_CMDQ_GLBL_STS1_DMA_WR_MSG_ERR_MASK                       0x800

/* MME_CMDQ_CQ_CFG0 */
#define MME_CMDQ_CQ_CFG0_RESERVED_SHIFT                              0
#define MME_CMDQ_CQ_CFG0_RESERVED_MASK                               0x1

/* MME_CMDQ_CQ_CFG1 */
#define MME_CMDQ_CQ_CFG1_CREDIT_LIM_SHIFT                            0
#define MME_CMDQ_CQ_CFG1_CREDIT_LIM_MASK                             0xFFFF
#define MME_CMDQ_CQ_CFG1_MAX_INFLIGHT_SHIFT                          16
#define MME_CMDQ_CQ_CFG1_MAX_INFLIGHT_MASK                           0xFFFF0000

/* MME_CMDQ_CQ_ARUSER */
#define MME_CMDQ_CQ_ARUSER_NOSNOOP_SHIFT                             0
#define MME_CMDQ_CQ_ARUSER_NOSNOOP_MASK                              0x1
#define MME_CMDQ_CQ_ARUSER_WORD_SHIFT                                1
#define MME_CMDQ_CQ_ARUSER_WORD_MASK                                 0x2

/* MME_CMDQ_CQ_PTR_LO */
#define MME_CMDQ_CQ_PTR_LO_VAL_SHIFT                                 0
#define MME_CMDQ_CQ_PTR_LO_VAL_MASK                                  0xFFFFFFFF

/* MME_CMDQ_CQ_PTR_HI */
#define MME_CMDQ_CQ_PTR_HI_VAL_SHIFT                                 0
#define MME_CMDQ_CQ_PTR_HI_VAL_MASK                                  0xFFFFFFFF

/* MME_CMDQ_CQ_TSIZE */
#define MME_CMDQ_CQ_TSIZE_VAL_SHIFT                                  0
#define MME_CMDQ_CQ_TSIZE_VAL_MASK                                   0xFFFFFFFF

/* MME_CMDQ_CQ_CTL */
#define MME_CMDQ_CQ_CTL_RPT_SHIFT                                    0
#define MME_CMDQ_CQ_CTL_RPT_MASK                                     0xFFFF
#define MME_CMDQ_CQ_CTL_CTL_SHIFT                                    16
#define MME_CMDQ_CQ_CTL_CTL_MASK                                     0xFFFF0000

/* MME_CMDQ_CQ_PTR_LO_STS */
#define MME_CMDQ_CQ_PTR_LO_STS_VAL_SHIFT                             0
#define MME_CMDQ_CQ_PTR_LO_STS_VAL_MASK                              0xFFFFFFFF

/* MME_CMDQ_CQ_PTR_HI_STS */
#define MME_CMDQ_CQ_PTR_HI_STS_VAL_SHIFT                             0
#define MME_CMDQ_CQ_PTR_HI_STS_VAL_MASK                              0xFFFFFFFF

/* MME_CMDQ_CQ_TSIZE_STS */
#define MME_CMDQ_CQ_TSIZE_STS_VAL_SHIFT                              0
#define MME_CMDQ_CQ_TSIZE_STS_VAL_MASK                               0xFFFFFFFF

/* MME_CMDQ_CQ_CTL_STS */
#define MME_CMDQ_CQ_CTL_STS_RPT_SHIFT                                0
#define MME_CMDQ_CQ_CTL_STS_RPT_MASK                                 0xFFFF
#define MME_CMDQ_CQ_CTL_STS_CTL_SHIFT                                16
#define MME_CMDQ_CQ_CTL_STS_CTL_MASK                                 0xFFFF0000

/* MME_CMDQ_CQ_STS0 */
#define MME_CMDQ_CQ_STS0_CQ_CREDIT_CNT_SHIFT                         0
#define MME_CMDQ_CQ_STS0_CQ_CREDIT_CNT_MASK                          0xFFFF
#define MME_CMDQ_CQ_STS0_CQ_FREE_CNT_SHIFT                           16
#define MME_CMDQ_CQ_STS0_CQ_FREE_CNT_MASK                            0xFFFF0000

/* MME_CMDQ_CQ_STS1 */
#define MME_CMDQ_CQ_STS1_CQ_INFLIGHT_CNT_SHIFT                       0
#define MME_CMDQ_CQ_STS1_CQ_INFLIGHT_CNT_MASK                        0xFFFF
#define MME_CMDQ_CQ_STS1_CQ_BUF_EMPTY_SHIFT                          30
#define MME_CMDQ_CQ_STS1_CQ_BUF_EMPTY_MASK                           0x40000000
#define MME_CMDQ_CQ_STS1_CQ_BUSY_SHIFT                               31
#define MME_CMDQ_CQ_STS1_CQ_BUSY_MASK                                0x80000000

/* MME_CMDQ_CQ_RD_RATE_LIM_EN */
#define MME_CMDQ_CQ_RD_RATE_LIM_EN_VAL_SHIFT                         0
#define MME_CMDQ_CQ_RD_RATE_LIM_EN_VAL_MASK                          0x1

/* MME_CMDQ_CQ_RD_RATE_LIM_RST_TOKEN */
#define MME_CMDQ_CQ_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                  0
#define MME_CMDQ_CQ_RD_RATE_LIM_RST_TOKEN_VAL_MASK                   0xFFFF

/* MME_CMDQ_CQ_RD_RATE_LIM_SAT */
#define MME_CMDQ_CQ_RD_RATE_LIM_SAT_VAL_SHIFT                        0
#define MME_CMDQ_CQ_RD_RATE_LIM_SAT_VAL_MASK                         0xFFFF

/* MME_CMDQ_CQ_RD_RATE_LIM_TOUT */
#define MME_CMDQ_CQ_RD_RATE_LIM_TOUT_VAL_SHIFT                       0
#define MME_CMDQ_CQ_RD_RATE_LIM_TOUT_VAL_MASK                        0x7FFFFFFF

/* MME_CMDQ_CQ_IFIFO_CNT */
#define MME_CMDQ_CQ_IFIFO_CNT_VAL_SHIFT                              0
#define MME_CMDQ_CQ_IFIFO_CNT_VAL_MASK                               0x3

/* MME_CMDQ_CP_MSG_BASE0_ADDR_LO */
#define MME_CMDQ_CP_MSG_BASE0_ADDR_LO_VAL_SHIFT                      0
#define MME_CMDQ_CP_MSG_BASE0_ADDR_LO_VAL_MASK                       0xFFFFFFFF

/* MME_CMDQ_CP_MSG_BASE0_ADDR_HI */
#define MME_CMDQ_CP_MSG_BASE0_ADDR_HI_VAL_SHIFT                      0
#define MME_CMDQ_CP_MSG_BASE0_ADDR_HI_VAL_MASK                       0xFFFFFFFF

/* MME_CMDQ_CP_MSG_BASE1_ADDR_LO */
#define MME_CMDQ_CP_MSG_BASE1_ADDR_LO_VAL_SHIFT                      0
#define MME_CMDQ_CP_MSG_BASE1_ADDR_LO_VAL_MASK                       0xFFFFFFFF

/* MME_CMDQ_CP_MSG_BASE1_ADDR_HI */
#define MME_CMDQ_CP_MSG_BASE1_ADDR_HI_VAL_SHIFT                      0
#define MME_CMDQ_CP_MSG_BASE1_ADDR_HI_VAL_MASK                       0xFFFFFFFF

/* MME_CMDQ_CP_MSG_BASE2_ADDR_LO */
#define MME_CMDQ_CP_MSG_BASE2_ADDR_LO_VAL_SHIFT                      0
#define MME_CMDQ_CP_MSG_BASE2_ADDR_LO_VAL_MASK                       0xFFFFFFFF

/* MME_CMDQ_CP_MSG_BASE2_ADDR_HI */
#define MME_CMDQ_CP_MSG_BASE2_ADDR_HI_VAL_SHIFT                      0
#define MME_CMDQ_CP_MSG_BASE2_ADDR_HI_VAL_MASK                       0xFFFFFFFF

/* MME_CMDQ_CP_MSG_BASE3_ADDR_LO */
#define MME_CMDQ_CP_MSG_BASE3_ADDR_LO_VAL_SHIFT                      0
#define MME_CMDQ_CP_MSG_BASE3_ADDR_LO_VAL_MASK                       0xFFFFFFFF

/* MME_CMDQ_CP_MSG_BASE3_ADDR_HI */
#define MME_CMDQ_CP_MSG_BASE3_ADDR_HI_VAL_SHIFT                      0
#define MME_CMDQ_CP_MSG_BASE3_ADDR_HI_VAL_MASK                       0xFFFFFFFF

/* MME_CMDQ_CP_LDMA_TSIZE_OFFSET */
#define MME_CMDQ_CP_LDMA_TSIZE_OFFSET_VAL_SHIFT                      0
#define MME_CMDQ_CP_LDMA_TSIZE_OFFSET_VAL_MASK                       0xFFFFFFFF

/* MME_CMDQ_CP_LDMA_SRC_BASE_LO_OFFSET */
#define MME_CMDQ_CP_LDMA_SRC_BASE_LO_OFFSET_VAL_SHIFT                0
#define MME_CMDQ_CP_LDMA_SRC_BASE_LO_OFFSET_VAL_MASK                 0xFFFFFFFF

/* MME_CMDQ_CP_LDMA_SRC_BASE_HI_OFFSET */
#define MME_CMDQ_CP_LDMA_SRC_BASE_HI_OFFSET_VAL_SHIFT                0
#define MME_CMDQ_CP_LDMA_SRC_BASE_HI_OFFSET_VAL_MASK                 0xFFFFFFFF

/* MME_CMDQ_CP_LDMA_DST_BASE_LO_OFFSET */
#define MME_CMDQ_CP_LDMA_DST_BASE_LO_OFFSET_VAL_SHIFT                0
#define MME_CMDQ_CP_LDMA_DST_BASE_LO_OFFSET_VAL_MASK                 0xFFFFFFFF

/* MME_CMDQ_CP_LDMA_DST_BASE_HI_OFFSET */
#define MME_CMDQ_CP_LDMA_DST_BASE_HI_OFFSET_VAL_SHIFT                0
#define MME_CMDQ_CP_LDMA_DST_BASE_HI_OFFSET_VAL_MASK                 0xFFFFFFFF

/* MME_CMDQ_CP_LDMA_COMMIT_OFFSET */
#define MME_CMDQ_CP_LDMA_COMMIT_OFFSET_VAL_SHIFT                     0
#define MME_CMDQ_CP_LDMA_COMMIT_OFFSET_VAL_MASK                      0xFFFFFFFF

/* MME_CMDQ_CP_FENCE0_RDATA */
#define MME_CMDQ_CP_FENCE0_RDATA_INC_VAL_SHIFT                       0
#define MME_CMDQ_CP_FENCE0_RDATA_INC_VAL_MASK                        0xF

/* MME_CMDQ_CP_FENCE1_RDATA */
#define MME_CMDQ_CP_FENCE1_RDATA_INC_VAL_SHIFT                       0
#define MME_CMDQ_CP_FENCE1_RDATA_INC_VAL_MASK                        0xF

/* MME_CMDQ_CP_FENCE2_RDATA */
#define MME_CMDQ_CP_FENCE2_RDATA_INC_VAL_SHIFT                       0
#define MME_CMDQ_CP_FENCE2_RDATA_INC_VAL_MASK                        0xF

/* MME_CMDQ_CP_FENCE3_RDATA */
#define MME_CMDQ_CP_FENCE3_RDATA_INC_VAL_SHIFT                       0
#define MME_CMDQ_CP_FENCE3_RDATA_INC_VAL_MASK                        0xF

/* MME_CMDQ_CP_FENCE0_CNT */
#define MME_CMDQ_CP_FENCE0_CNT_VAL_SHIFT                             0
#define MME_CMDQ_CP_FENCE0_CNT_VAL_MASK                              0xFF

/* MME_CMDQ_CP_FENCE1_CNT */
#define MME_CMDQ_CP_FENCE1_CNT_VAL_SHIFT                             0
#define MME_CMDQ_CP_FENCE1_CNT_VAL_MASK                              0xFF

/* MME_CMDQ_CP_FENCE2_CNT */
#define MME_CMDQ_CP_FENCE2_CNT_VAL_SHIFT                             0
#define MME_CMDQ_CP_FENCE2_CNT_VAL_MASK                              0xFF

/* MME_CMDQ_CP_FENCE3_CNT */
#define MME_CMDQ_CP_FENCE3_CNT_VAL_SHIFT                             0
#define MME_CMDQ_CP_FENCE3_CNT_VAL_MASK                              0xFF

/* MME_CMDQ_CP_STS */
#define MME_CMDQ_CP_STS_MSG_INFLIGHT_CNT_SHIFT                       0
#define MME_CMDQ_CP_STS_MSG_INFLIGHT_CNT_MASK                        0xFFFF
#define MME_CMDQ_CP_STS_ERDY_SHIFT                                   16
#define MME_CMDQ_CP_STS_ERDY_MASK                                    0x10000
#define MME_CMDQ_CP_STS_RRDY_SHIFT                                   17
#define MME_CMDQ_CP_STS_RRDY_MASK                                    0x20000
#define MME_CMDQ_CP_STS_MRDY_SHIFT                                   18
#define MME_CMDQ_CP_STS_MRDY_MASK                                    0x40000
#define MME_CMDQ_CP_STS_SW_STOP_SHIFT                                19
#define MME_CMDQ_CP_STS_SW_STOP_MASK                                 0x80000
#define MME_CMDQ_CP_STS_FENCE_ID_SHIFT                               20
#define MME_CMDQ_CP_STS_FENCE_ID_MASK                                0x300000
#define MME_CMDQ_CP_STS_FENCE_IN_PROGRESS_SHIFT                      22
#define MME_CMDQ_CP_STS_FENCE_IN_PROGRESS_MASK                       0x400000

/* MME_CMDQ_CP_CURRENT_INST_LO */
#define MME_CMDQ_CP_CURRENT_INST_LO_VAL_SHIFT                        0
#define MME_CMDQ_CP_CURRENT_INST_LO_VAL_MASK                         0xFFFFFFFF

/* MME_CMDQ_CP_CURRENT_INST_HI */
#define MME_CMDQ_CP_CURRENT_INST_HI_VAL_SHIFT                        0
#define MME_CMDQ_CP_CURRENT_INST_HI_VAL_MASK                         0xFFFFFFFF

/* MME_CMDQ_CP_BARRIER_CFG */
#define MME_CMDQ_CP_BARRIER_CFG_EBGUARD_SHIFT                        0
#define MME_CMDQ_CP_BARRIER_CFG_EBGUARD_MASK                         0xFFF

/* MME_CMDQ_CP_DBG_0 */
#define MME_CMDQ_CP_DBG_0_VAL_SHIFT                                  0
#define MME_CMDQ_CP_DBG_0_VAL_MASK                                   0xFF

/* MME_CMDQ_CQ_BUF_ADDR */
#define MME_CMDQ_CQ_BUF_ADDR_VAL_SHIFT                               0
#define MME_CMDQ_CQ_BUF_ADDR_VAL_MASK                                0xFFFFFFFF

/* MME_CMDQ_CQ_BUF_RDATA */
#define MME_CMDQ_CQ_BUF_RDATA_VAL_SHIFT                              0
#define MME_CMDQ_CQ_BUF_RDATA_VAL_MASK                               0xFFFFFFFF

#endif /* ASIC_REG_MME_CMDQ_MASKS_H_ */
