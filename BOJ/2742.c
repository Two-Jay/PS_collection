#include <stdio.h>

int main()
{
	int a;
	
	scanf("%d", &a);
	for (int b = a; b > 0; b--)
		printf("%d\n", b);
	return (0);
}