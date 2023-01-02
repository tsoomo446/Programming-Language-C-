#include <stdio.h>

int min2(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int min5(int a, int b, int c, int d, int e)
{
    return min2(min2(min2(a, b), min2(c, d)), e);
}

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d", min5(a, b, c, d, e));
    return 0;
}