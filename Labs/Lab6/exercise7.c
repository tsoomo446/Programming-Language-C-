#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d-r element %d ni B massive-iin %d bairand baina\n", i + 1, a[i], j + 1);
                break;
            }
        }
    }

    return 0;
}