#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    char b[20];
    gets(a);
    gets(b);

    int urt = strlen(a) + strlen(b);

    char c[urt];
    for (int i = 0; i < strlen(a); i++)
    {
        c[i] = a[i];
    }
    for (int i = strlen(a); i < urt; i++)
    {
        c[i] = b[i];
    }

    puts(c);

    return 0;
}