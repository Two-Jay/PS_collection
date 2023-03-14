#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindrome(char *s, int len)
{
	int ix, ret, lmt, r_ix;

	ix = 0;
	ret = 1;
	lmt = len / 2;

	while (ix < lmt)
	{
		r_ix = len - 1 - ix;
		if (s[ix] != s[r_ix])
		{
			ret--;
			break ;
		}
		ix++;
	}
	return (ret);
}

int main (void)
{
	char *s;
	int len, status = 0;


	while (1)
	{
		s = (char *)malloc(sizeof(char) * 6);
		scanf("%s", s);
		len = strlen(s);
		if (s[0] == '0' && len == 1)
			break ;
		(status = is_palindrome(s, len)) ? printf("yes\n") : printf("no\n");
		free(s);
		s = NULL;
	}
	free(s);
	s = NULL;
	return (0);
}