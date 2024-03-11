#pragma once

#include <stdint.h>

typedef struct lfstack {
  // TODO: ??
} lfstack_t;

int lfstack_init(lfstack_t *stack) {
  // TODO: initialize stack
  return 0; // success
}

int lfstack_push(lfstack_t *stack, uintptr_t value) {
  // TODO: push value into stack
  return 0; // success
}

int lfstack_pop(lfstack_t *stack, uintptr_t *value) {
  // TODO: pop from stack and store result in *value
  return 0; // success
}

int lfstack_destroy(lfstack_t *stack) {
  // TODO: destroy empty stack
  return 0; // success
}
