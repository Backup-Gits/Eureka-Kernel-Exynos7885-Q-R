#ifndef _ARCH_POWERPC_BOOT_LIBFDT_ENV_H
#define _ARCH_POWERPC_BOOT_LIBFDT_ENV_H

#include <types.h>
#include <string.h>

#define INT_MAX			((int)(~0U>>1))

#include "of.h"

typedef u32 uint32_t;
typedef u64 uint64_t;
typedef unsigned long uintptr_t;

typedef __be16 fdt16_t;
typedef __be32 fdt32_t;
typedef __be64 fdt64_t;

#define fdt16_to_cpu(x)		be16_to_cpu(x)
#define cpu_to_fdt16(x)		cpu_to_be16(x)
#define fdt32_to_cpu(x)		be32_to_cpu(x)
#define cpu_to_fdt32(x)		cpu_to_be32(x)
#define fdt64_to_cpu(x)		be64_to_cpu(x)
#define cpu_to_fdt64(x)		cpu_to_be64(x)

#endif /* _ARCH_POWERPC_BOOT_LIBFDT_ENV_H */
