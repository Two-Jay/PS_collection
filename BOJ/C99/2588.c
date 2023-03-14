#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c, answer;
    scanf("%d", &a);
	scanf("%d", &b);
	answer = a * b;
	while (b != 0)
	{
		c = b % 10;
		b /= 10;
		printf("%d\n", a * c);
	}
	printf("%d\n", answer);
	return (0);
}