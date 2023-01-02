#include <stdio.h>

int count(int N, int a[])
{
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            a[count] = i;
            count++;
        }
    }
    return count;
}

int main()
{
    int N, a[100];
    int d;
    scanf("%d", &N);
    d = count(N, a);
    printf("%d\n", d);
    for (int i = 0; i < d; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}