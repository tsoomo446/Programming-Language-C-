#include <stdio.h>
#include <math.h>

struct Point
{
    int x, y;
};
typedef struct Point Point;

double distance(Point p1, Point p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int main()
{
    struct Point p1, p2;
    printf("1-r tsegiin koordinatiig oruulan uu?\n");
    scanf("%d %d", &p1.x, &p1.y);
    printf("2-r tsegiin koordinatiig oruulan uu?");
    scanf("%d %d", &p2.x, &p2.y);

    printf("%.3f", distance(p1, p2));

    return 0;
}