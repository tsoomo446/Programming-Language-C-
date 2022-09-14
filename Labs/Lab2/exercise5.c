#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    int uldegdel = int(a) % int(b);
    printf("a+b=%d\n", int(a + b));
    printf("a-b=%d\n", int(a - b));
    printf("a*b=%d\n", int(a * b));
    printf("a/b=%.2f\n", a / b);
    printf("a%%b=%d", uldegdel);
    return 0;
}
