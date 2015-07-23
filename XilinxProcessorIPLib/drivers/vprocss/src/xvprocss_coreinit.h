/******************************************************************************
 *
 * Copyright (C) 2015 Xilinx, Inc.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * Use of the Software is limited solely to applications:
 * (a) running on a Xilinx device, or
 * (b) that interact with a Xilinx device through a bus or interconnect.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * XILINX CONSORTIUM BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Except as contained in this notice, the name of the Xilinx shall not be used
 * in advertising or otherwise to promote the sale, use or other dealings in
 * this Software without prior written authorization from Xilinx.
 *
******************************************************************************/
/*****************************************************************************/
/**
*
* @file xvprocss_coreinit.h
* @addtogroup vprocss
* @{
* @details
*
* This header file contains the video processing engine sub-cores
* initialization routines and helper functions.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who    Date     Changes
* ----- ---- -------- -------------------------------------------------------
* 1.00  rco  07/21/15   Initial Release

* </pre>
*
******************************************************************************/
#ifndef XVPROCSS_COREINIT_H__  /* prevent circular inclusions */
#define XVPROCSS_COREINIT_H__  /* by using protection macros */

#ifdef __cplusplus
extern "C" {
#endif

#include "xvprocss.h"
/************************** Constant Definitions *****************************/

/************************** Function Prototypes ******************************/
int XVprocss_SubcoreInitResetAxis(XVprocss *pVprocss);
int XVprocss_SubcoreInitResetAximm(XVprocss *pVprocss);
int XVprocss_SubcoreInitRouter(XVprocss *pVprocss);
int XVprocss_SubcoreInitCsc(XVprocss *pVprocss);
int XVprocss_SubcoreInitHScaler(XVprocss *pVprocss);
int XVprocss_SubcoreInitVScaler(XVprocss *pVprocss);
int XVprocss_SubcoreInitHCrsmplr(XVprocss *pVprocss);
int XVprocss_SubcoreInitVCrsmpleIn(XVprocss *pVprocss);
int XVprocss_SubcoreInitVCrsmpleOut(XVprocss *pVprocss);
int XVprocss_SubcoreInitLetterbox(XVprocss *pVprocss);
int XVprocss_SubcoreInitVdma(XVprocss *pVprocss);
int XVprocss_SubcoreInitDeinterlacer(XVprocss *pVprocss);

#ifdef __cplusplus
}
#endif

#endif
/** @} */