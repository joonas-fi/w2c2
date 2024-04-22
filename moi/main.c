#include <stdio.h>
#include "w2c2_base.h"
#include "wasi.h"
#include "moi.h"

void
trap(
    Trap trap
) {
    fprintf(stderr, "TRAP: %s\n", trapDescription(trap));
    abort();
}

wasmMemory*
wasiMemory(
    void* instance
) {
    return moi_memory((moiInstance*)instance);
}

extern char** environ;

/* Main */

int main(int argc, char* argv[]) {
    moiInstance instance;
    moiInstantiate(&instance, NULL);

    if (!wasiInit(argc, argv, environ)) {
        fprintf(stderr, "failed to initialize WASI\n");
        return 1;
    }

    moi__start(&instance);
}
