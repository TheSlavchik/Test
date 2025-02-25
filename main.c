#include "integral.h"
#include "equation.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double sinus(double x)
{
    return sin(x);
}

int main()
{
    double *arr = solve_equation(1,0,-1);
    int arr_length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < arr[0]+1; i++)
    {
        printf("%lf", arr[i]);
    }

    return 0;
}