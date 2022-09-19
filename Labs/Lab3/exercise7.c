#include <stdio.h>

int main()
{
    int x, oron = 0;
    scanf("%d", &x);
    while (x > 0)
    {
        x /= 10;
        oron++;
    }
    printf("x ni %d orontoi too", oron);
    return 0;
}