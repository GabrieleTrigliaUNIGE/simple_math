#include "simple_math.h"
#include <stdio.h>

int main()
{
    int a = 6;
    int b = 2;
    cx_int_t cx_a;
    cx_int_t cx_b;
    cx_a.re = 3;
    cx_a.imm = 4;
    cx_b.re = 1;
    cx_b.imm = 2;

    float avg = mean(a,b);
    int higher = max(a,b);
    
    cx_float_t cx_avg = cx_mean(cx_a, cx_b);
    cx_int_t cx_higher = cx_max(cx_a, cx_b);

    printf("Media tra %d e %d = %.2f\n", a, b, avg);
    printf("Massimo tra %d e %d = %d\n", a, b, higher);

    printf("Media tra %d+j%d e %d+j%d = %.2f+j%.2f\n", cx_a.re, cx_a.imm, cx_b.re, cx_b.imm, cx_avg.re, cx_avg.imm);
    printf("Massimo tra %d+j%d e %d+j%d = %d+j%d\n", cx_a.re, cx_a.imm, cx_b.re, cx_b.imm, cx_higher.re, cx_higher.imm);

    return 0;
}
