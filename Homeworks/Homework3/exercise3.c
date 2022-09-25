#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);

    n = n * 100 / 35;
    n < 60 && printf("F");
    n >= 60 && n < 70 && printf("D");
    n >= 70 && n < 80 && printf("C");
    n >= 80 && n < 90 && printf("B");
    n >= 90 && n <= 100 && printf("A");
    return 0;
}