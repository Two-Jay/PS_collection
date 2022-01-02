#include <stdio.h>
#include <math.h>

void print_roomnbr(int HH, int WW)
{
    printf("%d", HH);
    if (WW < 10)
        printf("0%d\n", WW);
    else
        printf("%d\n", WW);    
}

int main(void)
{
    int c, w, h, n;
    int HH, WW;

    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
        scanf("%d %d %d", &h, &w, &n);
        HH = n % h;
        if (!HH)
            HH = h;
        WW = ceil((float)n / h);
        print_roomnbr(HH, WW);
    }
    return (0);
}