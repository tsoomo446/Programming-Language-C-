#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    int count = 0;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
            printf("%d\n", i + 1);
        }
    }
    if (count == 0)
    {
        printf("-1");
    }

    return 0;
}