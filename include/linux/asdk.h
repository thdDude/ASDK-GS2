/* include/linux/asdk.h
 *
 *  Copyright (c) 2013 Ayysir
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 * 
*/

#ifndef __LINUX_ASDK_H__
#define __LINUX_ASDK_H__

#define ASDK_MIN_FREQ 384000
#define ASDK_MAX_FREQ 1512000

#define FREQSTEPS 35

#define MIN_VDD_SC		700000 /* uV */
#define MAX_VDD_SC		1350000 /* uV */
#define MAX_VDD_MEM		1350000 /* uV */
#define MAX_VDD_DIG		1350000 /* uV */

#define GPU_2D 228571000
#define GPU_3D 320000000

#define ON 1
#define OFF 0

#endif /* __LINUX_ASDK_H__ */

