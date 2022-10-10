#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        printf("%d-r muriin niilber %d\n", i + 1, sum);
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int j;
        for (j = 0; j < n; j++)
        {
            sum += a[j][i];
        }
        printf("%d-r baganii niilber %d\n", i + 1, sum);
    }

    int dia_left = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                dia_left += a[i][j];
            }
        }
    }

    printf("Zuun diagnaliin nillber %d\n", dia_left);

    int dia_right = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                dia_right += a[i][j];
            }
        }
    }

    printf("Baruun diagnaliin niilber %d", dia_right);

    return 0;
}