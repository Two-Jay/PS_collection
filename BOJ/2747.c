#include <stdio.h>

int dp[50];

int	fn_get_fibonacci(int i)
{
	if (i == 0 || i == 1)
		return (dp[i] = i);
	else if (dp[i]) return (dp[i]);
	else return (dp[i] = fn_get_fibonacci(i - 2) + fn_get_fibonacci(i - 1));
}

int	main(void)
{
	int	a;

	scanf("%d", &a);
	printf("%d\n", fn_get_fibonacci(a));
	return (0);
}