#ifndef _LINUX_QRNG_H_
#define _LINUX_QRNG_H_

#include <linux/types.h>
#include <linux/ioctl.h>

#define QRNG_IOC_MAGIC    0x100

#define QRNG_IOCTL_RESET_BUS_BANDWIDTH\
	_IO(QRNG_IOC_MAGIC, 1)

#endif /* _LINUX_QRNG_H_ */
