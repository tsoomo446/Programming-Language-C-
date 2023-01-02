#include <stdio.h>

struct Triangle
{
    int a, b, c;
};

void read(struct Triangle *p)
{
    int a, b, c;
    printf("Gurvaljnii gurvan taliig oruulna uu? \n");
    scanf("%d %d %d", &a, &b, &c);
    p->a = a;
    p->b = b;
    p->c = c;
}

int main()
{
    struct Triangle g;
    read(&g);
    printf("%d %d %d", g.a, g.b, g.c);
}