#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fn_islower_alpha(char c) { return (c >= 'a' && c <= 'z'); }
int fn_isupper_alpha(char c) { return (c >= 'A' && c <= 'Z'); }

int fn_check_memo(int *m, int len, int max)
{
	int ret = 0, i = 1, dupflag = 0;

	while (i < 26)
	{
		if (m[ret] == m[i] && m[ret] == max && m[i] != 0)
		{
			dupflag++;
			break ;
		}
		if (m[ret] < m[i])
			ret = i;
		i++;
	}
	return (dupflag ? -1 : ret);
}

int main (void)
{
	char input[1000001];
	int max = 0, len, checker = -1;
	int memo[26] = { 0, };

	scanf("%s", input);
	len = strlen(input);
	for (int i = 0, idx = -1; i < len; i++)
	{
		if (fn_isupper_alpha(input[i]))
			idx = input[i] - 65;
		else if (fn_islower_alpha(input[i]))
			idx = input[i] - 97;
		if (idx != -1)
			memo[idx]++;
		idx = -1;
	}
	for (int i = 0; i < 26; i++)
		if (max < memo[i])
			max = memo[i];
	checker = fn_check_memo(memo, len, max);
	checker == -1 ? printf("?\n") : printf("%c\n", 65 + checker);
	return (0);
}