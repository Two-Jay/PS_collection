#include <stdlib.h>
#include <stdio.h>

// BOJ에서 입력받을 때 == scanf 사용
int main(int argc, char **argv)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n%d\n%d\n%d\n", (a+b)%c, ((a%c) + (b%c))%c, (a*b)%c, ((a%c) * (b%c))%c);
    return (0);
}