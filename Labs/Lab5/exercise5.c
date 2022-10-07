#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    float f = 32;
    for (int i = 0; f < n; i++)
    {
        printf("%d %0.1f \n", i, f);
        f += 1.8;
    }

    return 0;
}