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
	int lmt, a, ret = 0;

	scanf("%d", &lmt);
	for (int i = 0; i < lmt; i++)
	{
		scanf("%d", &a);
		if (fn_isprime(a)) ret++;
	}
	printf("%d\n", ret);
	return (0);
}