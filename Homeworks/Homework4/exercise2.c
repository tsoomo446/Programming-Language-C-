#include <stdio.h>

int main()
{
    int on, sar, udur;
    scanf("%d %d %d", &on, &sar, &udur);

    if (on < 2022)
    {
        printf("ungursun");
    }
    else if (on > 2022)
    {
        printf("ireedui");
    }
    else
    {
        if (sar < 9)
        {
            printf("ungursun");
        }
        else if (sar > 9)
        {
            printf("ireedui");
        }
        else
        {
            if (udur < 28)
            {
                printf("ungursun");
            }
            else if (udur > 28)
            {
                printf("ireedui");
            }
            else
            {
                printf("odoo");
            }
        }
    }

    return 0;
}