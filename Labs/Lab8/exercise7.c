#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];

    gets(a);
    int count = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] != ' ')
        {
            for (int j = i + 1; j < strlen(a); j++)
            {
                if (a[j] == ' ')
                {
                    count++;
                    i = j;
                    break;
                }
            }
        }
    }

    count++;

    printf("%d", count);

    return 0;
}