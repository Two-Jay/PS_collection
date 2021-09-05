#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main ()
{
	char input[1000000];
	int max = 0, len, checker = -1;
	int memo[26] = { 0, };

	scanf("%s", input);
	len = strlen(input);
	for (int i = 0; i < len; i++)
	{	
		if (input[i] >= 'A' && input[i] <= 'Z')
			memo[input[i] - 65]++;
		else if (input[i] >= 'a' && input[i] <= 'z')
			memo[input[i] - 97]++;
	}
	for (int i = 0; i < len; i++)
		if (max < memo[i])
			max = memo[i];
	checker = fn_check_memo(memo, len, max);
	checker == -1 ? printf("?\n") : printf("%c\n", 65 + checker);
	return (0);
}