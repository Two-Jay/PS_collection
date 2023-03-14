#include <stdio.h>

int main()
{
	int a, b, lmt;
	
	scanf("%d", &lmt);
	for (int cnt = 1; cnt <= lmt; cnt++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", cnt, a + b);
	}
	return (0);
}