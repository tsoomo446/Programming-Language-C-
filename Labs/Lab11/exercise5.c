#include <stdio.h>

void reverse(int *begin, int *end)
{
    int *p1 = begin;
    int *p2 = end - 1;
    while (p1 < p2)
    {
        int temp = *p2;
        *p2 = *p1;
        *p1 = temp;
        p2--;
        p1++;
    }
}

int main()
{
    int a[5] = {3, 7, 1, 2, 4};
    reverse(a, a + 3);
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}