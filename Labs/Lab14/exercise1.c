#include <stdio.h>

int main()
{
    int x;
    int *p;
    p = &x;
    *p = 3;
    printf("%d", x);
    return 0;
}