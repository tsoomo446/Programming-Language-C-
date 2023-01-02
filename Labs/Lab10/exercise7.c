#include <stdio.h>
#include <string.h>

char db_u[4][100] = {"bat", "dorj", "bold", "tsetsgee"};
char db_p[4][100] = {"123456", "password", "pass247", "justinbeaber"};

int check(char u[], char p[])
{
    for (char i = 0; i < 4; i++)
    {
        if (!strcmp(u, db_u[i]) && !strcmp(p, db_p[i]))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char u[100], p[100];
    gets(u);
    gets(p);
    printf("%d", check(u, p));

    return 0;
}