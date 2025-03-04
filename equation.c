#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double *solve_equation(double a, double b, double c)
{
    double D, x1, x2;

    if (a == 0)
    {
        printf("Error A = 0");
    }

    D = pow(b, 2) - 4 * a * c;

    if (D < 0)
    {
        double *arr = malloc(sizeof(double) * 1);

        arr[0] = 0;

        return arr;
    }
    else if (D == 0)
    {
        x1 = -b / 2 * a;

        double *arr = malloc(sizeof(double) * 2);

        arr[0] = 1;
        arr[1] = x1;

        return arr;
    }
    else
    {
        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = (-b - sqrt(D)) / 2 * a;

        double *arr = malloc(sizeof(double) * 3);

        arr[0] = 2;
        arr[1] = x1;
        arr[2] = x2;

        return arr;
    }
}
