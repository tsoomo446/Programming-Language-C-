#include <stdio.h>

int main()
{
    int n, m, count = 0;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                count++;
                printf("%d-%d\n", i + 1, j + 1);
            }
        }
    }

    if (count == 0)
    {
        printf("-1");
    }

    return 0;
}