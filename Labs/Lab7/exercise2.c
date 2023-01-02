#include <stdio.h>

int main()
{
    int count = 0, n;
    scanf("%d", &n);
    float height[n];
    float avg;
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &height[i]);
        avg += height[i];
    }

    avg = avg / n;

    for (int i = 0; i < n; i++)
    {
        if (height[i] > avg)
        {
            count++;
        }
    }

    printf("Dundjaas deesh undurtei %d huuhed baina.", count);

    return 0;
}