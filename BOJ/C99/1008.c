#include <stdio.h>

int main ()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%0.9f\n", (double)a / b);
	return (0);
}