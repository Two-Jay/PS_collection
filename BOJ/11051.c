#include <stdio.h>

unsigned long dp[1001][1001];

// 파스칼의 삼각형...
// f(n,k) == f(n - 1, k) + f(n - 1, k - 1)
void fn_binom(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == j || j == 0)
				dp[i][j] = 1;
			else
				dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % 10007;
		}
	}
}

int main (void)
{
	int a, b;

	fn_binom(1000);
	scanf("%d %d", &a, &b);
	printf("%lu\n", dp[a][b]);
	return (0);
}