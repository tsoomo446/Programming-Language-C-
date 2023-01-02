#include <stdio.h>

int is_even(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (is_even(i) == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}