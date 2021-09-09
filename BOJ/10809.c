#include <stdio.h>
#include <string.h>

int dp[26];

int fn_islowalpha(char c) {return ( c >= 'a' && c <= 'z');}

void fn_set_dp(void)
{
	for (int i = 0; i < 26; i++)
		dp[i] = -1;
}

void fn_printf_dp(void)
{
	for (int i = 0; i < 26; i++)
	{
		if (i == 25)
			printf("%d\n", dp[i]);
		else
			printf("%d ", dp[i]);		
	}
}

void fn_run_solution(char *s, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (fn_islowalpha(s[i]) && dp[s[i] - 97] == -1)
			dp[s[i] - 97] = i;
	}
}

int main (void)
{
	char s[100];
	int len, target;

	scanf("%s", s);
	len = strlen(s);
	fn_set_dp();
	fn_run_solution(s, len);
	fn_printf_dp();
	return (0);
}
