#ifndef WSP_PRNG_16_H
#define WSP_PRNG_16_H

#include <stdint.h>

struct wsp_prng_16_s {
  uint32_t a;
  uint32_t b;
};

void wsp_prng_16_randomize(struct wsp_prng_16_s *s);

#endif
