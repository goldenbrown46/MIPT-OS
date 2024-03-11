#include <stdint.h>

enum {
    MAX_ARGS_COUNT = 256,
    MAX_CHAIN_LINKS_COUNT = 256
};

typedef struct {
    char* command;
    uint64_t argc;
    char* argv[MAX_ARGS_COUNT];
} chain_link_t;

typedef struct {
    uint64_t chain_links_count;
    chain_link_t chain_links[MAX_CHAIN_LINKS_COUNT];
} chain_t;

void create_chain(char* command, chain_t* chain) {
    // TODO: Parse command and init chain object
}

void run_chain(chain_t* chain) {
    // TODO: Run pipeline described in chain object
}

int main(int argc, char* argv[]) {
    // TODO: Use implemented functions

    return 0;
}
