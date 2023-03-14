#include <stdio.h>

int fn_isprime(int a)
{
	if (a < 2) return (0);
	else if (a == 2) return (1);
	else if (a % 2 == 0) return (0);
	else
	{
		for (int i = 3; i < a ; i += 2)
			if (a % i == 0) return (0);
	}
	return (1);
}

int main(void)
{
	int a, b, ix, min = -1, sum = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	ix = a;
	while (ix <= b)
	{
		if (fn_isprime(ix))
		{
			sum += ix;
			if (min == -1)
				min = ix;
		}
		ix++;
	}
	sum != 0 ? printf("%d\n%d\n", sum, min) : printf("-1\n"); 
	return (0);
}