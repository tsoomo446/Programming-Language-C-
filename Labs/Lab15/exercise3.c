#include <stdio.h>
#include <string.h>

void one(void)
{
    puts("You entered 1");
}

void two(void)
{
    puts("You entered 2");
}

void three(void)
{
    puts("You entered 3");
}

int main()
{
    int n;
    void (*func)(void);
    printf("1-3 hoorond utga oruulna uu?\n");
    scanf("%d", &n);
    if (n == 1)
    {
        func = &one;
    }
    else if (n == 2)
    {
        func = &two;
    }
    else
    {
        func = &three;
    }

    (*func)();

    return 0;
}