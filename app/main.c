#include <stdio.h>

#include "myfunc.h"

int main()
{
    double *roots;
    printf("Hello World!\n");
    printf("%f\n", my_sqrt(9));
    roots = realQuadraticRoots(1, -4, 4);
    printf("%f\n", roots[0]);
    printf("%f\n", roots[1]);
    free(roots);
}
