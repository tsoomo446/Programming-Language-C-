#include <stdio.h>

int main()
{
    int n = -1;
    while (1 <= n && n < 100)
    {
        scanf("%d", &n);
        if (n >= 100 || n < 1)
        {
            printf("100 aas baga too oruulna uu");
        }
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}