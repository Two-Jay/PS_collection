#include <stdio.h>
char star[101];

int main (void)
{
	int N;
	
	scanf("%d", &N);
	for (int i = N; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			star[j] = '*';
		star[i] = '\0';
		printf("%s\n", star);
	}
	return (0);
}