/*
 * wolfTPM compatibility definitions for Zephyr builds.
 *
 * Zephyr provides STRINGIFY() through its toolchain headers.  wolfTPM v3.10.0
 * defines STRINGIFY() when XSTRINGIFY() is not already defined, which causes a
 * macro-redefinition diagnostic when warnings are treated as errors.  Define
 * only the companion macro after loading Zephyr's canonical definition.
 */
#ifndef WOLFTPM_ZEPHYR_COMPAT_H_
#define WOLFTPM_ZEPHYR_COMPAT_H_

#include <zephyr/toolchain.h>

#ifndef XSTRINGIFY
#define XSTRINGIFY(s) STRINGIFY(s)
#endif

#endif /* WOLFTPM_ZEPHYR_COMPAT_H_ */
