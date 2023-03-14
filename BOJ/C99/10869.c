#include <stdlib.h>
#include <stdio.h>

// BOJ에서 입력받을 때 == scanf 사용
int main(int argc, char **argv)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d\n%d\n%d\n%d\n", a + b, a - b, a * b, a / b, a % b);
    return (0);
}