#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m], c[n + m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        c[n + i] = b[i];
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}