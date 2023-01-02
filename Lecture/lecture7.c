#include <stdio.h>

int arr[4][4];

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};

void print(int arr[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int check(int arr[4][4])
{
    int start = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            if (i == 3 && j == 3 && arr[i][j] == 0)
            {
                return 1;
            }

            if (arr[i][j] == start)
            {
                start++;
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}

void solve(int arr[4][4], int x, int y)
{
    if (check(arr) == 1)
    {
        print(arr);
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (0 <= newX && newX <= 3 && 0 <= newY && newY <= 3)
        {
            arr[x][y] = arr[newX][newY];
            arr[newX][newY] = 0;
            solve(arr, newX, newY);
        }
    }
}

int main()
{
    int x, y;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);

            if (arr[i][j] == 0)
            {
                x = i;
                y = j;
            }
        }
    }

    solve(arr, x, y);
    return 0;
}