#pragma once

#include <stdint.h>

#include "wait.h"

typedef double field_t;

typedef field_t func_t(field_t);

typedef struct par_integrator {
  // TODO: ?
} par_integrator_t;

int par_integrator_init(par_integrator_t *self, size_t threads_num) {
  // TODO: ?

  return 0;
}

int par_integrator_start_calc(par_integrator_t *self, func_t *func,
                              field_t left_bound, field_t right_bound) {
  // TODO: ?

  return 0;
}

int par_integrator_get_result(par_integrator_t *self, field_t *result) {
  // TODO: ?

  return 0;
}

int par_integrator_destroy(par_integrator_t *self) {
  // TODO: ?

  return 0;
}
