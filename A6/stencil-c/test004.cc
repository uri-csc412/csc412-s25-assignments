#include "dmalloc.h"
// Total allocation sizes.

int main() {
    void* ptrs[10];
    for (int i = 0; i != 10; ++i) {
        ptrs[i] = malloc(i + 1);
    }
    for (int i = 0; i != 5; ++i) {
        free(ptrs[i]);
    }
    print_statistics();
}

//! alloc count: active          5   total         10   fail          0
//! alloc size:  active         40   total         55   fail          0
