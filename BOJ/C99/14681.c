#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, answer = 0;
    scanf("%d", &a);
    scanf("%d", &b);
	if (a > 0 && b > 0)
		answer = 1;
	if (a < 0 && b > 0)
		answer = 2;
	if (a < 0 && b < 0)
		answer = 3;
	if (a > 0 && b < 0)
		answer = 4;
	printf("%d\n", answer);
	return (0);
}