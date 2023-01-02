#include <stdio.h>

int power(int a, int b)
{
    int i, t = 1;
    for (i = 1; i <= b; i++)
    {
        t *= a;
    }
    return t;
}

int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    printf("%d", power(a, n));
    return 0;
}