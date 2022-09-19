#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    c = (a > b) * a + (a <= b) * b;
    d = a + b - c;
    printf("%d , %d", d, c);
    return 0;
}