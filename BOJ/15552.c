#include <stdio.h>

int main()
{
	int a, b, lmt = 0;

	scanf("%d", &lmt);
	for (int cnt = 0; cnt < lmt; cnt++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return (0);
}