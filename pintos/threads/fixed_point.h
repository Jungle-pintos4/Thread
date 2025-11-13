#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

/* 고정 소수점 자료형: 그냥 int지만 명시적으로 구분하기 위해 사용 */
typedef int fixed_t;

/* 17.14 포맷의 상수 F (1.0) */
#define F (1 << 14)

/* 정수 n을 고정 소수점으로 변환 */
#define INT_TO_FP(n) ((fixed_t)(n) * F)

/* 고정 소수점 x를 정수로 변환 (버림) */
#define FP_TO_INT(x) ((x) / F)

/* 고정 소수점 x를 정수로 변환 (반올림) */
#define FP_TO_INT_ROUND(x) ((x) >= 0 ? ((x) + F / 2) / F : ((x) - F / 2) / F)

/* 덧셈 & 뺄셈 */
#define ADD_FP(x, y) ((x) + (y))
#define SUB_FP(x, y) ((x) - (y))

/* 정수와의 덧셈 & 뺄셈 */
#define ADD_FP_INT(x, n) ((x) + ((n) * F))
#define SUB_FP_INT(x, n) ((x) - ((n) * F))

/* 곱셈 (오버플로우 방지를 위해 int64_t 사용) */
#define MULT_FP(x, y) ((fixed_t)(((int64_t)(x) * (y)) / F))

/* 정수와의 곱셈 */
#define MULT_FP_INT(x, n) ((x) * (n))

/* 나눗셈 (오버플로우 방지를 위해 int64_t 사용) */
#define DIV_FP(x, y) ((fixed_t)(((int64_t)(x) * F) / (y)))

/* 정수와의 나눗셈 */
#define DIV_FP_INT(x, n) ((x) / (n))

#endif /* threads/fixed_point.h */