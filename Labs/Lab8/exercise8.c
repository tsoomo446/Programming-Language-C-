#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char newString[10][10];
    int i, j, ctr, ma = -1;
    gets(str1);
    char result[10];
    j = 0;
    ctr = 0;
    for (i = 0; i <= (strlen(str1)); i++)
    {
        if (str1[i] == ' ')
        {
            newString[ctr][j] = ' ';
            ctr++;
            j = 0;
        }
        else
        {
            newString[ctr][j] = str1[i];
            j++;
        }
    }

    for (i = 0; i < ctr; i++)
    {
        int egshig_useg[10] = {65, 97, 69, 101, 73, 105, 79, 111, 85, 117};

        for (int j = 0; j < strlen(newString[i]) - 1; j++)
        {
            int egshig = 0;
            for (int l = 0; l < 10; l++)
            {
                if (newString[i][j] == egshig_useg[l])
                {
                    egshig++;
                }
            }
            printf("%d", egshig);
            if (egshig > ma)
            {
                ma = egshig;
                printf("%d %d", i, egshig);
                strcpy(result, newString[i]);
            }
        }
    }
    puts(result);
    return 0;
}