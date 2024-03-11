#include "falloc.h"

void falloc_init(file_allocator_t* allocator, const char* filepath, uint64_t allowed_page_count) {
    // TODO: init file_allocator_t fields
}

void falloc_destroy(file_allocator_t* allocator) {
    // TODO: destroy file_allocator_t fields
}

void* falloc_acquire_page(file_allocator_t* allocator) {
    // TODO: acquire a single page, return its address
}

void falloc_release_page(file_allocator_t* allocator, void** addr) {
    // TODO: release a single page, make it possible to acquire again
}
