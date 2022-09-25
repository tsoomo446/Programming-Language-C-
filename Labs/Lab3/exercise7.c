#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    x >= 0 && x < 10 && printf("1 orontoi");
    x >= 10 && x < 100 && printf("2 orontoi");
    x >= 100 && x < 1000 && printf("3 orontoi");
    x >= 1000 && x < 10000 && printf("4 orontoi");
    x >= 10000 && x < 100000 && printf("5 orontoi");
    x >= 100000 && x < 1000000 && printf("6 orontoi");
    x >= 1000000 && x < 10000000 && printf("7 orontoi");
    x >= 10000000 && x < 100000000 && printf("8 orontoi");
    x >= 100000000 && x < 1000000000 && printf("9 orontoi");
    x >= 1000000000 && x < 100000000000 && printf("10 orontoi");
    return 0;
}