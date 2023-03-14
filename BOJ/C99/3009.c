#include <stdio.h>

void check_solution(void)
{
    int tx, ty;
    int ax, ay, bx, by, cx, cy;

    scanf("%d %d", &ax, &ay);
    scanf("%d %d", &bx, &by);
    scanf("%d %d", &cx, &cy);
    
    if (ax == bx)
        tx = cx;
    else if (ax == cx)
        tx = bx;
    else
        tx = ax;
    if (ay == by)
        ty = cy;
    else if (ay == cy)
        ty = by;
    else
        ty = ay;
    printf("%d %d\n", tx, ty);
}

int main(void)
{
    check_solution();
    return (0);
}