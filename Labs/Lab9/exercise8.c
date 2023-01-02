#include <stdio.h>

int digit_sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % digit_sum(i) == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}