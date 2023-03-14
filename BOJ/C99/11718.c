#include <stdio.h>

int main (void)
{
	char str[101];
	while (scanf("%[^\n]s", str) != EOF)
	{
		printf("%s\n", str);
		getchar();
	}
	return (0);
}