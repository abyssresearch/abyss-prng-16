#include "wsp_prng_16.h"

uint16_t wsp_prng_16_randomize(struct wsp_prng_16_s *s) {
  s->increment_offset = ((s->increment_offset << 13)
    | (s->increment_offset >> 19)) ^ s->increment;
  s->increment += 1111111;
  return s->increment_offset;
}
