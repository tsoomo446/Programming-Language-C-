#include <stdio.h>
#include <string.h>

int is_valid(char pwd[])
{
    int n = strlen(pwd);
    if (n < 6)
    {
        return 1;
    }
    int is_upper_case = 0;
    int is_three_number = 0;
    int is_character = 0;
    for (int i = 0; i < n; i++)
    {
        if (pwd[i] <= 57 && pwd[i] >= 48)
        {
            is_three_number++;
        }
        else if (65 <= pwd[i] && pwd[i] <= 90)
        {
            is_upper_case++;
        }
        else if (pwd[i] == '?' || pwd[i] == '!' || pwd[i] == '$' || pwd[i] == ' ' || pwd[i] == '*' || pwd[i] == '(' || pwd[i] == ')' || pwd[i] == '-' || pwd[i] == '+')
        {
            is_character++;
        }
    }
    if (is_upper_case == 0)
    {
        return 2;
    }
    else if (is_three_number < 3)
    {
        return 3;
    }
    else if (is_character == 0)
    {
        return 4;
    }
    return 0;
}

int main()
{
    char s[100];
    gets(s);
    printf("%d", is_valid(s));
}