#include <stdio.h>

int main()
{
	int a, answer = 0;

	scanf("%d", &a);
	for (int b = 0; b <= a; b++)
		answer += b;
	printf("%d\n", answer);
	return (0);
}