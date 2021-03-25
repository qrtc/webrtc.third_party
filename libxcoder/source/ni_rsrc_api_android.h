/*!*****************************************************************************
*   \file   ni_rsrc_api_android.h
*
*  \brief  Exported definitions related to resource management of NI T-408 devices
*
*  \copyright  (c) 2020 NETINT Technologies Inc. All rights reserved.
*******************************************************************************/

#ifndef ANDROID_NI_RSRC_API_H
#define ANDROID_NI_RSRC_API_H

#define LOG_TAG "SharedBufferClient"
 
#include <binder/IServiceManager.h>
#include <cutils/properties.h>
#include <cutils/ashmem.h>
#include "common/ISharedBuffer.h"

extern sp<ISharedBuffer> service;

/*!*****************************************************************************
 *  \brief   Init android net.int.SharedBuffer service for binder using.
 *
 *	 \param 	  none
 *
 *	 \return      service (= 0) if get service , < 0 otherwise
 *
 ******************************************************************************/
int ni_rsrc_android_init();

#endif  // ANDROID_NI_RSRC_API_H

