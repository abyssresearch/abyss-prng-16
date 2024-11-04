#include "wsp_prng_16.h"

void wsp_prng_16_randomize(struct wsp_prng_16_s *s) {
  s->a = ((s->a << 13) | (s->a >> 19)) ^ s->b;
  s->b += 1111111;
}
