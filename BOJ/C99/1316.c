#include <stdio.h>
#include <string.h>

void fn_clear_table(int *table)
{
	for (int i = 0; i < 27; i++)
		table[i] = 0;
}

int fn_check_groupword(char *s, int *table)
{
	int seq_flag = 0, ix = 0, len = strlen(s);

	if (len == 1) return (1);
	while (s[ix])
	{
		if (ix >= 1)
		{
			if (s[ix] == s[ix - 1])
				seq_flag++;
			else if (s[ix] != s[ix - 1])
				seq_flag = 0;
			if (!seq_flag && table[s[ix] - 97] > 0)
				return (0);
		}
		table[s[ix] - 97]++;
		ix++;
	}
	return (1);
}

int main(void)
{
	char s[101];
	int table[27] = { 0, };
	int lmt, ret = 0;

	scanf("%d", &lmt);
	while (lmt--)
	{
		scanf("%s", s);
		ret += fn_check_groupword(s, table);
		fn_clear_table(table);
	}
	printf("%d\n", ret);
	return (0);
}