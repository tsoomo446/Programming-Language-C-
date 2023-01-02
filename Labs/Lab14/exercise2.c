#include <stdio.h>

void even(int n, int *p)
{
    if (n % 2 == 0)
    {
        *p = 1;
    }
    else
    {
        *p = 0;
    }
}

int main()
{
    int x, n;
    scanf("%d", &n);
    even(n, &x);
    if (x == 1)
    {
        printf("tegsh");
    }
    else
    {
        printf("sondgoi");
    }
}