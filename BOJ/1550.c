#include <stdio.h>
#include <string.h>

# define BASE_16 "0123456789ABCDEF"

int fn_get_decimal(char c, int rdx)
{
	int i = 0, ret = -1;
	
	while (i < 16)
	{
		if (c == BASE_16[i])
			ret = i;
		i++;
	}
	return (ret * rdx);
}

int main(void)
{
	char input[6];
	int len, ret, ix, rdx;


	ret = 0;
	rdx = 1;
	scanf("%s", input);
	len = strlen(input);
	ix = --len;
	while (ix >= 0)
	{
		ret += fn_get_decimal(input[ix--], rdx);
		rdx *= 16;
	}
	printf("%d\n", ret);
}