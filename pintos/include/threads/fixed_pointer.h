#ifndef THREADS_FIXED_POINTER_H
#define THREADS_FIXED_POINTER_H

#include <stdint.h>

#define F (1 << 14) //fixed point 1 (17.14 format)
#define INT_MAX ((1 << 31) - 1)
#define INT_MIN (-(1 << 31))

// x and y denote fixed_point numbers in 17.14 format (32-bit)
// n is an integer
int64_t int_to_fp(int n); /* integer to fixed point */
int64_t fp_to_int_round(int64_t x); /* FP to int (round to nearest) */
int64_t fp_to_int(int64_t x); /* FP to int (round toward zero) */
int64_t add_fp(int64_t x, int64_t y); /* add two FP */
int64_t add_mixed(int64_t x, int n); /* add FP and int */
int64_t sub_fp(int64_t x, int64_t y); /* subtract FP (x-y) */
int64_t sub_mixed(int64_t x, int n); /* subtract FP and int (x-n) */
int64_t mult_fp(int64_t x, int64_t y); /* multiply two FP */
int64_t mult_mixed(int64_t x, int n); /* multiply FP and int */
int64_t div_fp(int64_t x, int64_t y); /* divide FP (x/y) */
int64_t div_mixed(int64_t x, int n); /* divide FP by int (x/n) */

#endif /* threads/fixed_pointer.h */