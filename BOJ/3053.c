#include <stdio.h>
#include <math.h>

int main(void)
{
    const double pi = acos(-1.0);
    double r;

    scanf("%lf", &r);
    printf("%f\n", r * r * pi);
    printf("%f\n", (2 * r) * r);
    return (0);
}