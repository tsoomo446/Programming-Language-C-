#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max = -1, max_bagana = -1;
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j][i] % 2 == 0)
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            max_bagana = i + 1;
        }
    }

    printf("%d-r bagana hamgiin ih tegsh tootoi", max_bagana);

    return 0;
}