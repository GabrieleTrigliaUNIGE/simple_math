/**
 * \file simple_math.h
 * \brief a toy example of math library
 * \author Gabriele Triglia
 */
#include "simple_math.h"
#include <math.h>

/**
 * \param a primo numero
 * \param b secondo numero
 * \return media 
 */
float mean(int a, int b){
    return (a + b)/2;
}

int max(int a, int b){
    if(a > b)
        return a;
    return b;
}

cx_float_t cx_mean(cx_int_t a, cx_int_t b){
    cx_float_t avg;
    avg.re = (a.re + b.re) / 2;
    avg.imm = (a.imm + b.imm) /2;
    return avg;
}

cx_int_t cx_max(cx_int_t a, cx_int_t b){
    float mod_a, mod_b;
    mod_a = sqrtf((a.re * a.re)+(a.imm + a.imm));
    mod_b = sqrtf((b.re * b.re)+(b.imm + b.imm));
    if (mod_a > mod_b)
    {
        return a;
    }
    return b;
}