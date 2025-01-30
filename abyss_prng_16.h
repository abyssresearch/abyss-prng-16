#ifndef ABYSS_PRNG_16_H
#define ABYSS_PRNG_16_H

#include <stdint.h>

struct abyss_prng_16_s {
  uint32_t increment;
  uint32_t increment_offset;
};

uint16_t abyss_prng_16_randomize(struct abyss_prng_16_s *s);

#endif
