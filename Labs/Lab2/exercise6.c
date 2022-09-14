#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%.2f", sqrt((a + b) * (a + b) + d) / c);
    return 0;
}
