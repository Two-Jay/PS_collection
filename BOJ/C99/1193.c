#include <stdio.h>

void print_answer(int t, int c, int stn)
{
    int v = 0;

    while (stn + v != t)
        v++;
    if (c % 2 == 1)
        printf("%d/%d\n", c - v, v + 1);
    else
        printf("%d/%d\n", v + 1, c - v);
}

int main(void)
{
    int target;
    int cnt = 0, bigger_trinbr = 0, smaller_trinbr = 0;

    scanf("%d", &target);
    while (bigger_trinbr < target)
        bigger_trinbr += cnt++;
    smaller_trinbr = bigger_trinbr - cnt + 2;
    if (bigger_trinbr == 1)
        printf("1/1\n");
    else
        print_answer(target, --cnt, smaller_trinbr);
    return (0);
}