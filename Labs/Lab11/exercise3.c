#include <stdio.h>

int *find(int *begin, int *end, int x)
{
    int *p;
    for (p = begin; p < end; p++)
    {
        if (*p == x)
        {
            return p;
        }
    }
    return NULL;
}

int main()
{
    int a[5] = {3, 7, 1, 2, 4};
    int *p, x;
    printf("haih too: \n");
    scanf("%d", &x);
    p = find(a, a + 5, x);

    if (p == NULL)
    {
        printf("%d too oldsongui", x);
    }
    else
    {
        printf("%d too %ld bairlald oldloo\n", x, p - a);
    }
}