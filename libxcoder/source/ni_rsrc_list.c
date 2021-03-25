/*!*******************************************************************************
 *
 *   Copyright (C)  2018 NETINT Technologies. All rights reserved.
 *
 *   \file          ni_rsrc_list.c
 *
 *   @date          April 1, 2018
 *
 *   \brief
 *
 *   @author        
 *
 *******************************************************************************/

#ifdef __linux__
#include <unistd.h>
#endif

#include <stdio.h>
#include <stdlib.h>

#include "ni_rsrc_api.h"
#include "ni_util.h"


/*!******************************************************************************
 *  \brief  
 *
 *  \param  
 *
 *  \return
 *******************************************************************************/
int32_t main(void)
{
  ni_log_set_level(NI_LOG_INFO);
  ni_rsrc_print_all_devices_capability();
  return 0;
}
