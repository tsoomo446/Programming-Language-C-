#include <stdio.h>

int main()
{
    int a = 0;
    int b = 2;
    int c = 1;
    int d = 1;
    int e;
    int f = 1;
    a || printf("o") && c;
    c &&d || printf("x");
    (d || b) && f || printf("x");
    a + b == 1 && printf("x");
    f &&printf("o");
    b &&d || printf("o");
    b + d == 3 && printf("o");
}