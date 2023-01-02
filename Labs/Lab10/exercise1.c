#include <stdio.h>
#include <string.h>

int count(char s[])
{
    int egshig[5] = {65, 69, 73, 79, 85};
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (s[i] == egshig[j] || s[i] == egshig[j] + 32)
            {
                count++;
                break;
            }
        }
    }
    return count;
}

int main()
{
    char s[100];
    gets(s);
    printf("%d", count(s));

    return 0;
}