#include <stdio.h>

int main(void)
{
    int nbr, sum;
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &nbr);
        if (nbr <= 40) nbr = 40;
        sum += nbr;
    }
    printf("%d\n", sum / 5);
    return (0);
}