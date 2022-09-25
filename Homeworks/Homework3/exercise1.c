#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    a / 1000 == a % 10 && (a / 100) % 10 == (a / 10) % 10 && printf("1") || printf("0");
    return 0;
}