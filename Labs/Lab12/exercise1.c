#include <stdio.h>
#include <math.h>

struct Triangle
{
    int a, b, c;
};
typedef struct Triangle Triangle;

double findArea(Triangle a)
{
    double p = (double)(a.a + a.b + a.c) / 2;
    return (sqrt(p * (p - a.a) * (p - a.b) * (p - a.c)));
}

int main()
{
    struct Triangle t;
    printf("Gurvaljiin a,b,c taliig oruulna uu? \n");
    scanf("%d %d %d", &t.a, &t.b, &t.c);
    printf("%.3f", findArea(t));
    return 0;
}