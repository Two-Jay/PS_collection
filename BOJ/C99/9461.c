#include <stdio.h>

int main(void)
{
	long dp[101] = { 0, 1, 1, 1, 2, 2, 3, 4, 5, };
	int lmt, nbr;

	scanf("%d", &lmt);
	for (int i = 9; i <= 100; i++)
		dp[i] = dp[i - 5] + dp[i - 1];
	while (lmt-- > 0)
	{
		scanf("%d", &nbr);
		printf("%lu\n", dp[nbr]);
	}
	return (0);
}