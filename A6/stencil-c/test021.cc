#include "dmalloc.h"
// Wild free inside heap-allocated data.

int main() {
    void* ptr = malloc(2001);
    fprintf(stderr, "Bad pointer %p\n", (char*) ptr + 128);
    free((char*) ptr + 128);
    print_statistics();
}

//! Bad pointer ??{0x\w+}=ptr??
//! MEMORY BUG???: invalid free of pointer ??ptr??, not allocated
//! ???
