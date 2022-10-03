#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        int m;
        m = n % 100;
        if (m % 4 == 0)
        {
            printf("%d - too ni tegsh ba 4-t huvaagdana", n);
        }
        else
        {
            printf("%d - too ni tegsh ba 4-t huvaagdahgui", n);
        }
    }
    else
    {
        int a, b, c, d, e, f;
        a = n % 10;
        b = (n - a) / 10 % 10;
        c = (n - b * 10 - a) / 100 % 10;
        d = (n - c * 100 - b * 10 - a) / 1000 % 10;
        e = (n - d * 1000 - c * 100 - b * 10 - a) / 10000 % 10;
        f = (n - e * 10000 - d * 1000 - c * 100 - b * 10 - a) / 100000 % 10;
        if ((a + b + c + d + e + f) % 3 == 0)
        {
            printf("%d - too ni sondgoi too ba 3-t huvaagdana", n);
        }
        else
        {
            printf("%d - too ni sondgoi too ba 3-t huvaagdahgui", n);
        }
    }
    return 0;
}