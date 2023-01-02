#include <stdio.h>

int is_palindrome(int n)
{
    int s = 0;
    int k = n;
    while (n > 0)
    {
        s = s * 10 + n % 10;
        n = n / 10;
    }

    if (s == k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if (is_palindrome(n))
    {
        printf("palindrome mun");
    }
    else
    {
        printf("palindrome bish");
    }

    return 0;
}