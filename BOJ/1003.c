#include <stdio.h>

int dp[41];

int fibonacci(int n) {
    if (n == 0) {
        dp[0] = 0;
        return 0;
    } else if (n == 1) {
        dp[1] = 1;
        return 1;
    } else {
		if (dp[n]) return dp[n];
        else return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main ()
{
	int	lmt = 0;
	int cas = 0;

	fibonacci(40);
	scanf("%d", &lmt);
	for (int i = 0; i < lmt; i++)
	{
		scanf("%d", &cas);
		if (cas == 0) printf("1 0\n");
		if (cas == 1) printf("0 1\n");
		if (cas > 1) printf("%d %d\n", dp[cas - 1], dp[cas]);
	}
	return (0);
}