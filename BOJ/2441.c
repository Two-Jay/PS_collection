#include <stdio.h>
char star[101];

int main (void)
{
	int N;
	
	scanf("%d", &N);
	star[N] = '\0';
	for (int i = 0; i < N; i++)
		star[i] = '*';
	for (int i = 0; i < N; i++)
	{
		if (i > 0)
			star[i - 1] = ' ';
		printf("%s\n", star);
	}
	return (0);
}