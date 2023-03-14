#include <stdio.h>

/*
** 모든 문자값은 ascii 즉, int이다.
** 모든 int는 사칙연산이 가능하다.
*/
int fn_get_time_for_dial(char *s)
{
	int ret = 0, ix = 0, tmp;

	while (s[ix])
	{
		tmp = 3;
		if (s[ix] == 'S')
			tmp += 5;
		else if (s[ix] == 'Z' || s[ix] == 'Y')
			tmp += 7;
		else if (s[ix] == 'V')
			tmp += 6;
		else
			tmp += (s[ix] - 65) / 3;
		ret += tmp;
		ix++;
	}
	return (ret);
}

int main(void)
{
	char s[15], ret;

	scanf("%s", s);
	ret = fn_get_time_for_dial(s);
	printf("%d\n", ret);
	return (0);
}