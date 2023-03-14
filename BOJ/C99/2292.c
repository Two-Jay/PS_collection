#include <stdio.h>

int main(void)
{
	int a, border = 1, cnt = 1;

	scanf("%d", &a);
	while (a > border)
		border = border + (6 * cnt++);
	printf("%d\n", cnt);
	return (0);
}