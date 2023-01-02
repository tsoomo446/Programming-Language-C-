#include <stdio.h>

struct Rational
{
    int d, n;
};

typedef struct Rational Rational;
int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}
Rational simplify(Rational a)
{
    int gcd = 1;
    int n, m;
    if (a.d < 0)
    {
        n = -a.d;
    }
    else
    {
        n = a.d;
    }

    if (a.n < 0)
    {
        m = -a.n;
    }
    else
    {
        m = a.n;
    }

    for (int i = 1; i <= min(m, n); i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            gcd = i;
        }
    }
    a.d = a.d / gcd;
    a.n = a.n / gcd;
    return a;
}

Rational add(Rational a, Rational b)
{
    struct Rational c;
    c.n = a.n * b.n;
    c.d = a.d * b.n + b.d * a.n;
    return simplify(c);
}

Rational sub(Rational a, Rational b)
{
    struct Rational c;
    c.n = a.n * b.n;
    c.d = a.d * b.n - b.d * a.n;
    return simplify(c);
}

Rational mult(Rational a, Rational b)
{
    struct Rational c;
    c.d = a.d * b.d;
    c.n = a.n * b.n;
    return simplify(c);
}

Rational div(Rational a, Rational b)
{
    struct Rational c;
    c.d = a.d * b.n;
    c.n = a.n * b.d;
    return simplify(c);
}

void print(Rational a)
{
    printf("%d/%d\n", a.d, a.n);
}

int main()
{
    struct Rational a, b;
    printf("1-r toog oruulna uu?\n");
    scanf("%d %d", &a.d, &a.n);
    printf("2-r toog oruulna uu?\n");
    scanf("%d %d", &b.d, &b.n);
    printf("Niilber:  \n");
    print(add(a, b));
    printf("Ylgavar:  \n");
    print(sub(a, b));
    printf("Urjver:  \n");
    print(mult(a, b));
    printf("Nogdvor:  \n");
    print(div(a, b));
    return 0;
}