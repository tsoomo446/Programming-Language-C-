#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, r, p = 3.141592654;
    scanf("%f %f %f", &a, &b, &r);

    c = sqrt(pow(b, 2) + pow(a, 2) - 2 * a * b * cos((r * p) / 180));

    printf("C tal = %.2f", c);

    return 0;
}