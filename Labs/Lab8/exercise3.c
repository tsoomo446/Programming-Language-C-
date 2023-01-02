#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    if (strlen(a) != strlen(b))
    {
        printf("Tentsuu bish");
    }
    else
    {
        int diff = 0;
        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i] != b[i])
            {
                diff++;
            }
        }
        if (diff > 0)
        {
            printf("Tentsuu bish");
        }
        else
        {
            printf("Tentsuu");
        }
    }

    return 0;
}