#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	if (a > c)
		printf("1\n");
	else
		printf("%d\n", (c - b - 1)/(a - b) + 1);
	return (0);
}
