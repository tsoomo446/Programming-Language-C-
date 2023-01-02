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
    struct Triangle t, t2;
    double s, s2;
    printf("1-r Gurvaljiin a,b,c taliig oruulna uu? \n");
    scanf("%d %d %d", &t.a, &t.b, &t.c);
    printf("2-r Gurvaljiin a,b,c taliig oruulna uu? \n");
    scanf("%d %d %d", &t2.a, &t2.b, &t2.c);
    s = findArea(t);
    s2 = findArea(t2);
    if (s > s2)
    {
        printf("1-r gurvaljin tom talbaitai");
    }
    else if (s == s2)
    {
        printf("2 gurvaljin tentsuu talbaita");
        }
    else
    {
        printf("2-r gurvaljin tom talbaitai");
    }

    return 0;
}