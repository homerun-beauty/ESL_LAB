/* mbed Microcontroller Library
* Copyright (c) 2006-2013 ARM Limited
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

#ifndef _BTLE_H_
#define _BTLE_H_


#ifdef __cplusplus
extern "C" {
#endif

#include "hci.h"
#include "bluenrg_hci.h"
#include "hci_internal.h"
#include "bluenrg_hci_internal.h"
#include "bluenrg_shield_bsp.h"
#include "bluenrg_gap.h"
#include "gatt_service.h"
#include <stdio.h>
#include <string.h>

    void btle_init(bool isSetAddress);
    void SPI_Poll(void);
    void User_Process(void);
    void setConnectable(void);

    extern uint16_t g_gap_service_handle;
    extern uint16_t g_appearance_char_handle;
    extern uint16_t g_device_name_char_handle;

#ifdef __cplusplus
}
#endif

#endif
