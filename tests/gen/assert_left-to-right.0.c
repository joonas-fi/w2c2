
#include <stdio.h>
#include "w2c2_base.h"
#include "test.h"
#include "test_left-to-right.0.h"

void test() {
    lefttoright0Instance instance;
    lefttoright0Instantiate(&instance, resolveTestImports);
    printStart("left-to-right.0.wasm");
    assertEqualU32(
        lefttoright0_i32X5Fadd(&instance),
        258u,
        "i32_add()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fadd(&instance),
        258u,
        "i64_add()"
    );
    assertEqualU32(
        lefttoright0_i32X5Fsub(&instance),
        258u,
        "i32_sub()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fsub(&instance),
        258u,
        "i64_sub()"
    );
    assertEqualU32(
        lefttoright0_i32X5Fmul(&instance),
        258u,
        "i32_mul()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fmul(&instance),
        258u,
        "i64_mul()"
    );
    assertEqualU32(
        lefttoright0_i32X5FdivX5Fs(&instance),
        258u,
        "i32_div_s()"
    );
    assertEqualU32(
        lefttoright0_i64X5FdivX5Fs(&instance),
        258u,
        "i64_div_s()"
    );
    assertEqualU32(
        lefttoright0_i32X5FdivX5Fu(&instance),
        258u,
        "i32_div_u()"
    );
    assertEqualU32(
        lefttoright0_i64X5FdivX5Fu(&instance),
        258u,
        "i64_div_u()"
    );
    assertEqualU32(
        lefttoright0_i32X5FremX5Fs(&instance),
        258u,
        "i32_rem_s()"
    );
    assertEqualU32(
        lefttoright0_i64X5FremX5Fs(&instance),
        258u,
        "i64_rem_s()"
    );
    assertEqualU32(
        lefttoright0_i32X5FremX5Fu(&instance),
        258u,
        "i32_rem_u()"
    );
    assertEqualU32(
        lefttoright0_i64X5FremX5Fu(&instance),
        258u,
        "i64_rem_u()"
    );
    assertEqualU32(
        lefttoright0_i32X5Fand(&instance),
        258u,
        "i32_and()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fand(&instance),
        258u,
        "i64_and()"
    );
    assertEqualU32(
        lefttoright0_i32X5For(&instance),
        258u,
        "i32_or()"
    );
    assertEqualU32(
        lefttoright0_i64X5For(&instance),
        258u,
        "i64_or()"
    );
    assertEqualU32(
        lefttoright0_i32X5Fxor(&instance),
        258u,
        "i32_xor()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fxor(&instance),
        258u,
        "i64_xor()"
    );
    assertEqualU32(
        lefttoright0_i32X5Fshl(&instance),
        258u,
        "i32_shl()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fshl(&instance),
        258u,
        "i64_shl()"
    );
    assertEqualU32(
        lefttoright0_i32X5FshrX5Fu(&instance),
        258u,
        "i32_shr_u()"
    );
    assertEqualU32(
        lefttoright0_i64X5FshrX5Fu(&instance),
        258u,
        "i64_shr_u()"
    );
    assertEqualU32(
        lefttoright0_i32X5FshrX5Fs(&instance),
        258u,
        "i32_shr_s()"
    );
    assertEqualU32(
        lefttoright0_i64X5FshrX5Fs(&instance),
        258u,
        "i64_shr_s()"
    );
    assertEqualU32(
        lefttoright0_i32X5Feq(&instance),
        258u,
        "i32_eq()"
    );
    assertEqualU32(
        lefttoright0_i64X5Feq(&instance),
        258u,
        "i64_eq()"
    );
    assertEqualU32(
        lefttoright0_i32X5Fne(&instance),
        258u,
        "i32_ne()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fne(&instance),
        258u,
        "i64_ne()"
    );
    assertEqualU32(
        lefttoright0_i32X5FltX5Fs(&instance),
        258u,
        "i32_lt_s()"
    );
    assertEqualU32(
        lefttoright0_i64X5FltX5Fs(&instance),
        258u,
        "i64_lt_s()"
    );
    assertEqualU32(
        lefttoright0_i32X5FleX5Fs(&instance),
        258u,
        "i32_le_s()"
    );
    assertEqualU32(
        lefttoright0_i64X5FleX5Fs(&instance),
        258u,
        "i64_le_s()"
    );
    assertEqualU32(
        lefttoright0_i32X5FltX5Fu(&instance),
        258u,
        "i32_lt_u()"
    );
    assertEqualU32(
        lefttoright0_i64X5FltX5Fu(&instance),
        258u,
        "i64_lt_u()"
    );
    assertEqualU32(
        lefttoright0_i32X5FleX5Fu(&instance),
        258u,
        "i32_le_u()"
    );
    assertEqualU32(
        lefttoright0_i64X5FleX5Fu(&instance),
        258u,
        "i64_le_u()"
    );
    assertEqualU32(
        lefttoright0_i32X5FgtX5Fs(&instance),
        258u,
        "i32_gt_s()"
    );
    assertEqualU32(
        lefttoright0_i64X5FgtX5Fs(&instance),
        258u,
        "i64_gt_s()"
    );
    assertEqualU32(
        lefttoright0_i32X5FgeX5Fs(&instance),
        258u,
        "i32_ge_s()"
    );
    assertEqualU32(
        lefttoright0_i64X5FgeX5Fs(&instance),
        258u,
        "i64_ge_s()"
    );
    assertEqualU32(
        lefttoright0_i32X5FgtX5Fu(&instance),
        258u,
        "i32_gt_u()"
    );
    assertEqualU32(
        lefttoright0_i64X5FgtX5Fu(&instance),
        258u,
        "i64_gt_u()"
    );
    assertEqualU32(
        lefttoright0_i32X5FgeX5Fu(&instance),
        258u,
        "i32_ge_u()"
    );
    assertEqualU32(
        lefttoright0_i64X5FgeX5Fu(&instance),
        258u,
        "i64_ge_u()"
    );
    assertEqualU32(
        lefttoright0_i32X5Fstore(&instance),
        258u,
        "i32_store()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fstore(&instance),
        258u,
        "i64_store()"
    );
    assertEqualU32(
        lefttoright0_i32X5Fstore8(&instance),
        258u,
        "i32_store8()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fstore8(&instance),
        258u,
        "i64_store8()"
    );
    assertEqualU32(
        lefttoright0_i32X5Fstore16(&instance),
        258u,
        "i32_store16()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fstore16(&instance),
        258u,
        "i64_store16()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fstore32(&instance),
        258u,
        "i64_store32()"
    );
    assertEqualU32(
        lefttoright0_i32X5Fcall(&instance),
        258u,
        "i32_call()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fcall(&instance),
        258u,
        "i64_call()"
    );
    assertEqualU32(
        lefttoright0_i32X5FcallX5Findirect(&instance),
        66052u,
        "i32_call_indirect()"
    );
    assertEqualU32(
        lefttoright0_i64X5FcallX5Findirect(&instance),
        66052u,
        "i64_call_indirect()"
    );
    assertEqualU32(
        lefttoright0_i32X5Fselect(&instance),
        66053u,
        "i32_select()"
    );
    assertEqualU32(
        lefttoright0_i64X5Fselect(&instance),
        66053u,
        "i64_select()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fadd(&instance),
        258u,
        "f32_add()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fadd(&instance),
        258u,
        "f64_add()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fsub(&instance),
        258u,
        "f32_sub()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fsub(&instance),
        258u,
        "f64_sub()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fmul(&instance),
        258u,
        "f32_mul()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fmul(&instance),
        258u,
        "f64_mul()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fdiv(&instance),
        258u,
        "f32_div()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fdiv(&instance),
        258u,
        "f64_div()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fcopysign(&instance),
        258u,
        "f32_copysign()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fcopysign(&instance),
        258u,
        "f64_copysign()"
    );
    assertEqualU32(
        lefttoright0_f32X5Feq(&instance),
        258u,
        "f32_eq()"
    );
    assertEqualU32(
        lefttoright0_f64X5Feq(&instance),
        258u,
        "f64_eq()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fne(&instance),
        258u,
        "f32_ne()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fne(&instance),
        258u,
        "f64_ne()"
    );
    assertEqualU32(
        lefttoright0_f32X5Flt(&instance),
        258u,
        "f32_lt()"
    );
    assertEqualU32(
        lefttoright0_f64X5Flt(&instance),
        258u,
        "f64_lt()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fle(&instance),
        258u,
        "f32_le()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fle(&instance),
        258u,
        "f64_le()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fgt(&instance),
        258u,
        "f32_gt()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fgt(&instance),
        258u,
        "f64_gt()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fge(&instance),
        258u,
        "f32_ge()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fge(&instance),
        258u,
        "f64_ge()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fmin(&instance),
        258u,
        "f32_min()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fmin(&instance),
        258u,
        "f64_min()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fmax(&instance),
        258u,
        "f32_max()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fmax(&instance),
        258u,
        "f64_max()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fstore(&instance),
        258u,
        "f32_store()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fstore(&instance),
        258u,
        "f64_store()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fcall(&instance),
        258u,
        "f32_call()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fcall(&instance),
        258u,
        "f64_call()"
    );
    assertEqualU32(
        lefttoright0_f32X5FcallX5Findirect(&instance),
        66052u,
        "f32_call_indirect()"
    );
    assertEqualU32(
        lefttoright0_f64X5FcallX5Findirect(&instance),
        66052u,
        "f64_call_indirect()"
    );
    assertEqualU32(
        lefttoright0_f32X5Fselect(&instance),
        66053u,
        "f32_select()"
    );
    assertEqualU32(
        lefttoright0_f64X5Fselect(&instance),
        66053u,
        "f64_select()"
    );
    assertEqualU32(
        lefttoright0_brX5Fif(&instance),
        258u,
        "br_if()"
    );
    assertEqualU32(
        lefttoright0_brX5Ftable(&instance),
        258u,
        "br_table()"
    );
}
