#include <stdio.h>

int main()
{
    int a = 10, a1;
    float b = 5.5, b1;
    void *p;
    printf("a-giin shine utgiig oruulna uu?\n");
    scanf("%d\n", &a1);
    p = &a;
    *(int *)p = a1;
    printf("b-giin shine utgiig oruulna uu?\n");
    scanf("%f\n", &b1);
    p = &b;
    *(float *)p = b1;
    printf("a-%d \nb-%0.1f", a, b);
    return 0;
}