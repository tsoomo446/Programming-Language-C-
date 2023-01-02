#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char a[100];
    gets(a);
    int egshig_useg[10] = {65, 97, 69, 101, 73, 105, 79, 111, 85, 117};
    for (int i = 0; i < 100; i++)
    {
        int egshig = 0;
        for (int j = 0; j < 10; j++)
        {
            if (a[i] == egshig_useg[j])
            {
                egshig++;
            }
        }
        if (egshig > 0)
        {
            count++;
        }
    }

    printf("Ug ugend %d - sh egshig baina", count);

    return 0;
}
