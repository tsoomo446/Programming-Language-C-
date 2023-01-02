#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

float div(int a, float b)
{
    return a / b;
}

int main()
{
    int (*p)(int, int) = &add;
    float (*p1)(int, float) = &div;

    int a, b;
    int c;
    float d;
    printf("Nemeh 2 toog oruulna uu?\n");
    scanf("%d %d\n", &a, &b);
    printf("Niilber %d\n", (*p)(a, b));
    printf("Huvaah 2 toog oruulna uu?\n");
    scanf("%d %f\n", &c, &d);
    printf("Nogdvor %0.2f\n", (*p1)(c, d));
    return 0;
}