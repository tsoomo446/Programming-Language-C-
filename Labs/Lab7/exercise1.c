#include <stdio.h>

int main()
{
    int i, n, j, a[10], k, tmp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            printf("%d %d %d %d %d %d %d %d %d %d\n", i, j, k, tmp, n, a[0], a[1], a[2], a[3], a[4]);
            if (a[k] > a[j])
            {
                k = j;
            }
        }
        tmp = a[k];
        a[k] = a[i];
        a[i] = tmp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}