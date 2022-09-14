#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, s;
    scanf("%f %f %f %f", &a, &b, &c, &d);

    s = (sqrt(pow((pow(a, 3) + b / c), 2) + d) / (pow(d, 2) - a * b / c)) * d;
    printf("%.2f", s);
    return 0;
}