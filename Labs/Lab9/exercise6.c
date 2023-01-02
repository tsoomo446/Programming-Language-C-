#include <stdio.h>

int arr[100];
int count = 0;

int prime(int n)
{
    int c = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int prime_range(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (prime(i))
        {
            arr[count] = i;
            count++;
        }
    }
    return count;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", prime_range(a, b));
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}