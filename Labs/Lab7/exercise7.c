#include <stdio.h>

int main()
{
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);
    int a[N][M], b[M][K], c[N][K];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < K; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            int el = 0;
            for (int q = 0; q < M; q++)
            {
                el += a[i][q] * b[q][j];
            }
            c[i][j] = el;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}