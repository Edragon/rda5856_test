/* 
 * Copyright (c) 2006-2016 RDA Microelectronics, Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


////////////////////////////////////////////////////////////////////////////////
//                                                                            //
/// @file                                                                     //
/// That file Implements the functions to register the module.
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#include "cs_types.h"

#include "aud_m.h"

#include "hal_map_engine.h"

#include "aud_map.h"



// =============================================================================
//  MACROS
// =============================================================================

#define AUD_BEIJING_VERSION_STRING "Hello, I'm the AUD module!"
//#include "audp_version.h"



// =============================================================================
//  GLOBAL VARIABLES
// =============================================================================


// =============================================================================
// g_audMapVersion
// -----------------------------------------------------------------------------
/// Contains the version of the module.
/// The macro used is generated by the make process.
// =============================================================================
//PROTECTED HAL_MAP_VERSION_T g_audMapVersion = AUD_VERSION_STRUCT;



// =============================================================================
// g_audMapAccess
// -----------------------------------------------------------------------------
/// Contains the addresses of the structures of the module that will be
/// accessible from a remote PC (e.g. through CoolWatcher).
// =============================================================================
PROTECTED AUD_MAP_ACCESS_T g_audMapAccess =
{
    0// Put your initialization here.
};



// =============================================================================
//  FUNCTIONS
// =============================================================================


// =============================================================================
// aud_RegisterYourself
// -----------------------------------------------------------------------------
/// This function registers the module itself to HAL so that the version and
/// the map accessor are filled. Then, the CSW get version function and the
/// CoolWatcher get version command will work.
// =============================================================================
PUBLIC VOID aud_RegisterYourself(VOID)
{
//    hal_MapEngineRegisterModule(HAL_MAP_ID_AUD, &g_audMapVersion, &g_audMapAccess);
}