#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d\n", a * 1000 + b * 100 + c * 10 + d);
    printf("%d\n", a * 1000 + b * 100 + d * 10 + c);
    printf("%d\n", a * 1000 + c * 100 + b * 10 + d);
    printf("%d\n", a * 1000 + c * 100 + d * 10 + b);
    printf("%d\n", a * 1000 + d * 100 + b * 10 + c);
    printf("%d\n", a * 1000 + d * 100 + c * 10 + b);
    printf("%d\n", b * 1000 + a * 100 + c * 10 + d);
    printf("%d\n", b * 1000 + a * 100 + d * 10 + c);
    printf("%d\n", b * 1000 + c * 100 + a * 10 + d);
    printf("%d\n", b * 1000 + c * 100 + d * 10 + a);
    printf("%d\n", b * 1000 + d * 100 + a * 10 + c);
    printf("%d\n", b * 1000 + d * 100 + c * 10 + a);
    printf("%d\n", c * 1000 + a * 100 + b * 10 + d);
    printf("%d\n", c * 1000 + a * 100 + d * 10 + b);
    printf("%d\n", c * 1000 + b * 100 + a * 10 + d);
    printf("%d\n", c * 1000 + b * 100 + d * 10 + a);
    printf("%d\n", c * 1000 + d * 100 + a * 10 + b);
    printf("%d\n", c * 1000 + d * 100 + b * 10 + a);
    printf("%d\n", d * 1000 + a * 100 + b * 10 + c);
    printf("%d\n", d * 1000 + a * 100 + c * 10 + b);
    printf("%d\n", d * 1000 + b * 100 + c * 10 + a);
    printf("%d\n", d * 1000 + b * 100 + a * 10 + c);
    printf("%d\n", d * 1000 + c * 100 + a * 10 + b);
    printf("%d\n", d * 1000 + c * 100 + b * 10 + a);

    return 0;
}