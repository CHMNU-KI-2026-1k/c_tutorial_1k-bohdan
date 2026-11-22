#include "app.h"

int main()
{
    double a, b, x;

    printf("Enter a, b, x:");

    int ret = scanf("%lf %lf %lf", &x, &a, &b);

    double t1 = pow(a, pow(x - 2, 0.25));
    printf("t1: %.3f\n", t1);

    double t2 = exp(b * log(2 * x));
    printf("t2: %.3f\n", t2);

    double t3 = cos(a * x);
    printf("t3: %.3f\n", t3);

    double result = t1 + t2 * t3;
    printf("Result: %.3f\n", result);

    return 0;
}