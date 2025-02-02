#ifndef TT_KERNEL_INCLUDES
#define TT_KERNEL_INCLUDES

#include <cuda.h>
#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

#endif

void unload_{kernel_name}(void);
void load_{kernel_name}(void);
// tt-linker: {kernel_name}:{signature}
CUresult{kernel_name}(CUstream stream, unsigned int gX, unsigned int gY,
                      unsigned int gZ, unsigned int numWarps, {signature});
