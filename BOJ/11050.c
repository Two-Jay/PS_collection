#include <stdio.h>

int dp[11];

int fn_factorial(int nbr)
{
	int ret = 1;

	dp[0] = 1;
	for (int i = 1; i <= nbr; i++)
	{
		ret *= i;
		if (!dp[i])
			dp[i] = ret;
	}
	return (ret);
}

int fn_binom(int n1, int n2)
{
	if (n2 < 0)
		return (0);
	else if (n2 > n1)
		return (0);
	else
		return (dp[n1] / (dp[n2] * dp[n1 - n2]));
}

int main (void)
{
	int a, b;

	fn_factorial(10);
	scanf("%d %d", &a, &b);
	printf("%d\n", fn_binom(a, b));
	return (0);
}