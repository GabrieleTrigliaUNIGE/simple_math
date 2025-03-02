/**
* \file simple_math.h
* \brief a toy example of math library
* \author Gabriele Triglia
*/

#ifndef _SIMPLEMATH_
    #define _SIMPLEMATH_

    typedef struct complex_int {
        int re;
        int imm;
    } cx_int_t;
    
    typedef struct complex_float {
        float re;
        float imm;
    } cx_float_t;

    cx_float_t cx_mean (cx_int_t a, cx_int_t b);
    cx_int_t cx_max (cx_int_t a, cx_int_t b);

    float mean (int a, int b);

    int max (int a, int b);
#endif 


