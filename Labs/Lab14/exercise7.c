#include <stdio.h>

void read(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void find(int a[], int n, int *min, int *max)
{
    int mi = 2147483640;
    int ma = -2147483640;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > ma)
        {
            ma = a[i];
        }
        if (a[i] < mi)
        {
            mi = a[i];
        }
    }
    *min = mi;
    *max = ma;
}

int main()
{
    int a[100];
    read(a, 5);
    print(a, 5);
    int min, max;
    find(a, 5, &min, &max);
    printf("Hamgiin baga too: %d\n", min);
    printf("Hamgiin ih too %d\n", max);
    return 0;
}