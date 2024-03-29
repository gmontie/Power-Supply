/****************************************************************************/
/*                                                                          */
/*  Programmer: Gregory L Montgomery                                        */
/*                                                                          */
/*  Copyright � 2010-2019                                                   */
/*                                                                          */
/*  COPYING: (See the file COPYING.md for the GNU General Public License).  */
/*  this program is free software, and you may redistribute it and/or       */
/*  modify it under the terms of the GNU General Public License as          */
/*  published by the Free Software Foundation                               */
/*                                                                          */
/* This file is part of Gregory L Montgomery's code base collection Project.*/
/*                                                                          */
/*     Gregory L Montgomery's code base collection Project is free software:*/
/*     you can redistribute it and/or modify  it under the terms of the GNU */
/*     General Public License as published by the Free Software Foundation, */
/*     either version 3 of the License, or (at your option)                 */
/*     any later version.                                                   */
/*                                                                          */
/*     Gregory L Montgomery's code base collection Project is distributed   */
/*     in the hope that it will be useful, but WITHOUT ANY WARRANTY;        */
/*     without even the implied warranty of MERCHANTABILITY or FITNESS FOR  */
/*     A PARTICULAR PURPOSE.  See the GNU General Public License for more   */
/*     details.                                                             */
/*                                                                          */
/*     You should have received a copy of the GNU General Public License    */
/*     along with Gregory L Montgomery's code base collection Project.      */
/*     If not, see <https://www.gnu.org/licenses/>.                         */
/*                                                                          */
/****************************************************************************/
#ifndef a24CMEM_H
#define	a24CMEM_H

#include "defs.h"
#include "System.h"

//#define I2C_BRG	(((Fcy / 2 / Fsck) - 1) << 2) // 50Khz
//#define I2C_BRG	(((Fcy / 2 / Fsck) - 1) << 1) // 100Khz
#define I2C_BRG	(((Fcy / 2 / Fsck) - 1) >> 1) // 333Khz
/*
typedef struct
{
    Boolean (*BlockWrite)(unsigned, byte *, unsigned);
    Boolean (*BlockRead)(unsigned, byte *, unsigned);
}I2CMemOps;
*/
#endif	/* 24CMEM_H */

