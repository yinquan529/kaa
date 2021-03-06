/*
 * Copyright 2014-2016 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
@file econais_ec19d_configuration_persistence.c
 Created on: Feb 23, 2015
     Author: Andriy Panasenko <apanasenko@cybervisiontech.com>
*/


#include <stdbool.h>
#include <stddef.h>
#include "../../../platform/ext_configuration_persistence.h"
#include "econais_ec19d_file_utils.h"

#define KAA_CONFIGURATION_STORAGE    "kaa_configuration.bin"

void ext_configuration_read(char **buffer, size_t *buffer_size, bool *needs_deallocation)
{
    econais_ec19d_binary_file_read(KAA_CONFIGURATION_STORAGE, buffer, buffer_size, needs_deallocation);
}

void ext_configuration_store(const char *buffer, size_t buffer_size)
{
    econais_ec19d_binary_file_store(KAA_CONFIGURATION_STORAGE, buffer, buffer_size);
}

void ext_configuration_delete(void)
{
    econais_ec19d_binary_file_delete(KAA_CONFIGURATION_STORAGE);
}
