#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int main()
{
    int n;
    int (*func[])(int, int) = {add, sub, mul};
    printf("1-3 utga oruul: \n");
    scanf("%d", &n);
    int a, b;
    if (n == 1)
    {
        printf("Nemeh 2 too oruul: \n");
        scanf("%d %d\n", &a, &b);
        printf("%d", (*func[0])(a, b));
    }
    else if (n == 2)
    {
        printf("Hasah 2 too oruul: \n");
        scanf("%d %d\n", &a, &b);
        printf("%d", (*func[1])(a, b));
    }
    else
    {
        printf("Urjih 2 too oruul: \n");
        scanf("%d %d\n", &a, &b);
        printf("%d", (*func[2])(a, b));
    }
    return 0;
}