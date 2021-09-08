#include <stdio.h>

int main(void)
{
	int ret = 1, nbr;

	scanf("%d", &nbr);
	for (int i = 1; i <= nbr; i++)
		ret *= i;
	printf("%d\n", ret);
	return (0);
}