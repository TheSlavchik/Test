#include "integral.h"
#include <math.h>
#include <stdio.h>

double integral(double (*func)(double), double a, double b, int n)
{
    if (n <= 0)
    {
        printf("n должно быть больше 0");
        return 0;
    }

    double step = (b - a) / n;
    double sum = 0.5 * (func(a) + func(b));

    for (int i = 0; i < n; i++)
    {
        double x = a + i * step;
        sum += func(x);
    }

    return sum * step;
}