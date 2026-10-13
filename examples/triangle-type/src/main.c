#include "app.h"
#define MAX_OF_3(a, b, c) (fabs(a) < fabs(b)) ? (fabs(b) < fabs(c) ? (c) : (b)) : (fabs(a) < fabs(c) ? (c) : (a))
int main()
{
    double a, b, c;

    printf("Enter a, b, c: ");

    int ret = scanf("%lf %lf %lf", &a, &b, &c);

    //==, !=
    //fabs(a - b) < 1e-9
    //a~b
    if (ret != 3)
    {
        printf("Invalid input\n");
        return 1;
    }

	double max = MAX_OF_3(a, b, c);

    if (fabs(max) < 1e-12)
    {
        printf("Small input\n");
        return 1;
    }

    if (fabs(a-b)/fabs(max) < 1e-3 && fabs(a-c) / fabs(max) < 1e-3 && fabs(b-c) / fabs(max) < 1e-3)
    {
        printf("Sides are equal\n");
    }
    else {
        printf("I don't know");
    }

    return 0;
}