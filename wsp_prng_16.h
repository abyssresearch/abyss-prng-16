#ifndef WSP_PRNG_16_H
#define WSP_PRNG_16_H

#include <stdint.h>

struct wsp_prng_16_s {
  uint32_t increment;
  uint32_t increment_offset;
};

uint16_t wsp_prng_16_randomize(struct wsp_prng_16_s *s);

#endif
