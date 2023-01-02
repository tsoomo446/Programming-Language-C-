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

int main()
{
    int a[5], b[3];
    read(a, 5);
    read(b, 3);
    print(a, 5);
    print(b, 3);

    return 0;
}