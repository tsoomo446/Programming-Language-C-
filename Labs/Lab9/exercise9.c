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

int join(int a[], int b[], int n, int m)
{
    for (int i = n; i < n + m; i++)
    {
        a[i] = b[i - n];
    }
    return n + m;
}

int main()
{
    int a[100], b[100], n, m;
    scanf("%d %d", &n, &m);
    read(a, n);
    read(b, m);

    int k = join(a, b, n, m);
    print(a, k);

    return 0;
}