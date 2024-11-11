#include "wsp_prng_16.h"

uint16_t wsp_prng_16_randomize(struct wsp_prng_16_s *s) {
  s->fusion = ((s->fusion << 13) | (s->fusion >> 19)) ^ s->increment;
  s->increment += 1111111;
  return s->fusion;
}
