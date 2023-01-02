#include <stdint.h>
#include <string.h>
int main()
{
    char s[] = "hello";
    char s2[20] = "MUIS-iinhaan";
    for (int i = 0; i < 5; i++)
    {
        s2[i] = s[i];
    }
    for (int i = 5; i < 20; i++)
    {
        s2[i] = ' ';
    }
    puts(s2);
    return 0;
}