#include <stdio.h>

void read(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int max(int a[], int n)
{
    int m = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
    }
    return m;
}

int main()
{
    int a[5], b[3];
    read(a, 5);
    read(b, 3);
    if (max(a, 5) > max(b, 3))
    {
        printf("A");
    }
    else
    {
        printf("B");
    }

    return 0;
}