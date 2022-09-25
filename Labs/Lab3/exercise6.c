#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d = (a == b) + (a == c) + (b == c);
    d == 3 && printf("Zuv gurvaljin");
    d == 1 && printf("Adil hajuut gurvaljin");
    d == 0 && printf("Eldev talt gurvaljin");
}