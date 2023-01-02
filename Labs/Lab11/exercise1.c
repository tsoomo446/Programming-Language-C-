#include <stdio.h>

int main()
{
    int i, a[100];
    for (i = 0; i < 5; i++)
    {
        scanf("%d", a + i);
    }
    int *p = a;

    for (p = a; p < a + 5; p++)
    {
        printf("%d ", *p);
    }
    return 0;
}