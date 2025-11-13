#include "include/threads/fixed_pointer.h"

/* integer to fixed point */
int64_t int_to_fp(int n){
    return (int64_t)n * F;
}

/* FP to int (round toward zero) */
int64_t fp_to_int(int64_t x){
    return x / F;
}

/* FP to int (round to nearest) */
int64_t fp_to_int_round(int64_t x){
    if (x >= 0){
        return (x + F / 2) / F;
    } else {
        return (x - F / 2) / F;
    }
}

/* add two FP */
int64_t add_fp(int64_t x, int64_t y){
    return x + y;
}

/* add FP and int */
int64_t add_mixed(int64_t x, int n){
    return x + (int64_t)n * F;
}

/* subtract FP (x-y) */
int64_t sub_fp(int64_t x, int64_t y){
    return x - y;
}

/* subtract FP and int (x-n) */
int64_t sub_mixed(int64_t x, int n){
    return x - (int64_t)n * F;
}

/* multiply two FP */
int64_t mult_fp(int64_t x, int64_t y){
    return ((int64_t)x) * y / F;
}

/* multiply FP and int */
int64_t mult_mixed(int64_t x, int n){
    return x * n;
}

/* divide FP (x/y) */
int64_t div_fp(int64_t x, int64_t y){
    return ((int64_t)x) * F / y;
}

/* divide FP by int (x/n) */
int64_t div_mixed(int64_t x, int n){
    return x / n;
} 