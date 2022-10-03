#include <stdio.h>

int main()
{
    int x1, x2, x3, y1, y2, y3, d1, d2, d3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    d1 = x1 * x1 + y1 * y1;
    d2 = x2 * x2 + y2 * y2;
    d3 = x3 * x3 + y3 * y3;

    if (d1 >= d2 && d1 >= d3)
    {
        printf("Hamgiin hol tseg (%d,%d)", x1, y1);
    }
    else if (d2 >= d1 && d2 >= d3)
    {
        printf("Hamgiin hol tseg (%d,%d)", x2, y2);
    }
    else
    {
        printf("Hamgiin hol tseg (%d,%d)", x3, y3);
    }

    printf("\n");

    if (d1 >= d2 && d3 >= d2)
    {
        printf("Hamgiin oiriin tseg (%d,%d)", x2, y2);
    }
    else if (d2 >= d1 && d3 >= d1)
    {
        printf("Hamgiin oiriin tseg (%d,%d)", x1, y1);
    }
    else
    {
        printf("Hamgiin oiriin tseg (%d,%d)", x3, y3);
    }

    return 0;
}