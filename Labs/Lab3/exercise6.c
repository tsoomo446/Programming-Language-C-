#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    a == b &&a == c &&a == b &&printf("Zuv gurvaljin");
    a == b &&a != c &&printf("Adil hajuut gurvaljin");
    a == c &&a != b &&printf("Adil hajuut gurvaljin");
    b == c &&a != b &&printf("Adil hajuiut gurvaljin");
    a != b &&b != c &&a != c &&printf("Eldev talt gurvaljin");
}