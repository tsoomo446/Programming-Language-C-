#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n + m], b[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count > 0)
        {
            a[i] = -1;
        }
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == b[i])
            {
                count++;
            }
        }
        if (count > 0)
        {
            a[n + i] = -1;
        }
        else
        {
            a[n + i] = b[i];
        }
    }

    for (int i = 0; i < n + m; i++)
    {
        if (a[i] != -1)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}