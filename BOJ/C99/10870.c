#include <stdio.h>

int fn_get_fibonacci(int nbr)
{
	if (nbr == 0)
		return (0);
	else if (nbr == 1 || nbr == 2)
		return (1);
	else
		return fn_get_fibonacci(nbr - 1) + fn_get_fibonacci(nbr - 2);
}

int main (void)
{
	int nbr;

	scanf("%d", &nbr);
	printf("%d\n", fn_get_fibonacci(nbr));
	return (0);
}