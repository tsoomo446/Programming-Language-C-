#include <stdio.h>
struct Rational
{
    int d, n;
};

void simplify(struct Rational *a)
{
    int gcd = 1;
    for (int i = 1; i <= (*a).d; i++)
    {
        if ((*a).d % i == 0 && (*a).n % i == 0)
        {
            gcd = i;
        }
    }
    a->d = a->d / gcd;
    a->n = a->n / gcd;
}

struct Rational add(struct Rational *a, struct Rational *b)
{
    struct Rational r;
    r.n = a->n * b->n;
    r.d = a->n * b->d + a->d * b->n;
    simplify(&r);
    return r;
}

struct Rational sub(struct Rational *a, struct Rational *b)
{
    struct Rational r;
    r.n = a->n * b->n;
    r.d = (a->d * b->n) - (a->n * b->d);
    simplify(&r);
    return r;
}
struct Rational mult(struct Rational *a, struct Rational *b)
{
    struct Rational r;
    r.n = a->n * b->n;
    r.d = a->d * b->d;
    simplify(&r);
    return r;
}
struct Rational div(struct Rational *a, struct Rational *b)
{
    struct Rational r;
    r.n = a->n * b->d;
    r.d = a->d * b->n;
    simplify(&r);
    return r;
}

void read(struct Rational *a)
{
    int d, n;
    scanf("%d", &d);
    scanf("%d", &n);
    (*a).d = d;
    (*a).n = n;
}

void print(struct Rational *a)
{
    printf("%d/%d \n", (*a).d, (*a).n);
}

int main()
{
    struct Rational a, b, n;
    read(&a);
    read(&b);
    printf("Niilber: \n");
    n = add(&a, &b);
    print(&n);
    printf("Ylgavar: \n");
    n = sub(&a, &b);
    print(&n);
    printf("Urjver: \n");
    n = mult(&a, &b);
    print(&n);
    printf("Nogdvor: \n");
    n = div(&a, &b);
    print(&n);
    return 0;
}