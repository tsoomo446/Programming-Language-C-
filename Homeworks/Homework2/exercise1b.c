#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2;
    scanf("%f %f %f", &a, &b, &c);
    x1 = (-b + sqrt(b * b - 4 * a * c)) / 2;
    x2 = (-b - sqrt(b * b - 4 * a * c)) / 2;
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);
    return 0;
}