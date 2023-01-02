#include <stdio.h>

int *find(int *begin, int *end, int x, int y)
{
    int *p;
    for (p = begin; p < end; p++)
    {
        if (*p == x)
        {
            *p = y;
        }
    }
    return NULL;
}

int main()
{
    int a[5] = {3, 7, 1, 2, 4};
    int *p, x, y;
    printf("haih too: \n");
    scanf("%d", &x);
    printf("solih too: \n");
    scanf("%d", &y);
    p = find(a, a + 5, x, y);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}