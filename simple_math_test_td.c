#include "simple_math.h"
#include <stdio.h>

int main()
{
    int a = 6;
    int b = 2;
    float avg = mean(a,b);
    int bossetti = max(a,b); 

    printf("Media tra %d e %d = %f\n", a, b, avg);
    printf("Massimo tra %d e %d = %d\n", a, b, bossetti);

    return 0;
}
