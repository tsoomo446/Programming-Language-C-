#include <stdio.h>

int count(int N)
{
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d", count(N));

    return 0;
}