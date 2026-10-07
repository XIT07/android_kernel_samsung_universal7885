/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Compatibility header for older kernels (4.4 / 4.9)
 * KernelSU-Next and some newer code expect linux/compiler_types.h
 * which was introduced in later kernel versions.
 */
#ifndef __LINUX_COMPILER_TYPES_H
#define __LINUX_COMPILER_TYPES_H

#include <linux/compiler.h>

/* Minimal stubs / re-exports needed by KernelSU-Next */
#ifndef __force
# define __force
#endif

#ifndef __user
# define __user
#endif

#ifndef __kernel
# define __kernel
#endif

#ifndef __iomem
# define __iomem
#endif

#ifndef __percpu
# define __percpu
#endif

#ifndef __rcu
# define __rcu
#endif

#ifndef __must_check
# define __must_check
#endif

#ifndef __cold
# define __cold
#endif

#ifndef __visible
# define __visible
#endif

#endif /* __LINUX_COMPILER_TYPES_H */
