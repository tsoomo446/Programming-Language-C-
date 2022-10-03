#include <stdio.h>

int main()
{
    float undur, jin;
    scanf("%f %f", &undur, &jin);

    float heviin_jin;
    heviin_jin = (undur - 150) / 2.5 * 1.9 + 52;
    if (heviin_jin < jin)
    {
        printf("jingiin iluudeltei baina");
    }
    else
    {
        printf("jingiin iluudelgui baina");
    }

    return 0;
}