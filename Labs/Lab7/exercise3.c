#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int tegsh = 1;

    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            tegsh = 0;
        }
    }

    if (tegsh == 1)
    {
        printf("Tegsh hemtei massive");
    }
    else
    {
        printf("Tegsh hemgui massive");
    }

    return 0;
}