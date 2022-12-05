
#include <stdio.h>
#include "w2c2_base.h"
#include "test.h"
#include "test_const.199.h"

void test() {
    const199Instance instance;
    const199Instantiate(&instance, resolveTestImports);
    printStart("const.199.wasm");
    assertEqualF32(
        const199_f(&instance),
        -8.88178631458362e-16,
        "f()"
    );
}
