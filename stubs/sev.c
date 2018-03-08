/*
 * QEMU SEV stub
 *
 * Copyright Advanced Micro Devices 2018
 *
 * Authors:
 *      Brijesh Singh <brijesh.singh@amd.com>
 *
 * This work is licensed under the terms of the GNU GPL, version 2 or later.
 * See the COPYING file in the top-level directory.
 *
 */

#include "qemu/osdep.h"
#include "qemu-common.h"
#include "sysemu/sev.h"

void sev_set_debug_ops(void *handle, MemoryRegion *mr)
{
}

int sev_encrypt_data(void *handle, uint8_t *ptr, uint64_t len)
{
    return 1;
}

void *sev_guest_init(const char *id)
{
    return NULL;
}
