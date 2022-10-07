#include <stdio.h>

int main()
{
    printf("3 sariin 1 doloo honogiin hed deh udur gedgiig oruulna uu (1-7)\n");
    int ehlel;
    int udur = 1;
    int mart = 8;
    int tsereg = 18;
    scanf("%d", &ehlel);

    printf("M    T    W    T    F    S    S\n");
    for (int i = 1; i <= 6 && udur <= 31; i++)
    {
        for (int j = 1; j <= 7 && udur <= 31; j++)
        {
            if (i == 1 && j == ehlel)
            {
                if (udur == mart || udur == tsereg || j == 6 || j == 7)
                {
                    printf("%d*  ", udur);
                }
                else
                {
                    printf("%d   ", udur);
                }
                if (udur < 10)
                {
                    printf(" ");
                }
                udur++;
            }
            else if (udur > 1)
            {
                if (udur == mart || udur == tsereg || j == 6 || j == 7)
                {
                    printf("%d*  ", udur);
                }
                else
                {
                    printf("%d   ", udur);
                }
                if (udur < 10)
                {
                    printf(" ");
                }
                udur++;
            }
            else
            {
                printf("     ");
            }
        }
        printf("\n");
    }

    return 0;
}