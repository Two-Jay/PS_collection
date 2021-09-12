#include <stdio.h>

int fn_get_divsum(int a)
{
	int ret = a, tmp = a;

	while (tmp > 0)
	{
		ret += (tmp % 10);
		tmp /= 10;
	}
	return (ret);
}

int main(void)
{
	int trg, ret = 0, param = 1;

	scanf("%d", &trg);
	while (param < trg)
	{
		ret = fn_get_divsum(param++);
		if (ret == trg)
			break ;
	}
	ret == trg ? printf("%d\n", --param) : printf("0");
	return (0);
}