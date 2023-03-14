#include <stdio.h>

void fn_reverse(int *a)
{
	int ret = 0;

	ret += (*a % 10) * 100 + (*a / 100);
	ret += *a -= (ret % 10) * 100 + (ret / 100);
	*a = ret;
}

int main()
{
	int a, b, target;

	scanf("%d %d", &a, &b);
	fn_reverse(&a);
	fn_reverse(&b);
	target = a > b ? a : b;
	printf("%d\n", target);
}