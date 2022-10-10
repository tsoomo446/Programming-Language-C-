#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int asc = 0;
    int desc = 0;
    int curr_asc, curr_desc;
    scanf("%d", &a[0]);
    curr_asc = a[0];
    curr_desc = a[0];
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (curr_asc <= a[i])
        {
            curr_asc = a[i];
            asc++;
        }
        if (curr_desc >= a[i])
        {
            curr_desc = a[i];
            desc++;
        }
    }
    if (asc == n - 1)
    {
        printf("Usuhuur eremblegdsen");
    }
    else if (desc == n - 1)
    {
        printf("Buurahaar eremblegdsen");
    }
    else
    {
        printf("Eremblegdeegui");
    }

    return 0;
}