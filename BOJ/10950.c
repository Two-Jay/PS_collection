#include <stdio.h>

int main()
{
	int a, b, limit;
	
	scanf("%d", &limit);
	for (int c = 0; c < limit; c++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return (0);
}