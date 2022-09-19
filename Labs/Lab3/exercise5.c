#include <stdio.h>

int main()
{
    int a, b, c, max, min, med;
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b && a > c) * a + (b > a && b > c) * b + (c > a && c > b) * c;
    min = (a < b && a < c) * a + (b < a && b < c) * b + (c < a && c < b) * c;
    med = a + b + c - max - min;
    printf("Hamgiin ih = %d\nDund = %d\nHamgiin baga = %d", max, med, min);

    return 0;
}