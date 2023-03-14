#include <stdio.h>

int main ()
{
	int len, sum = 0;
	char nbr[100];

	scanf("%d", &len);
	scanf("%s", nbr);
	for (int i = 0; i < len; i++)
		sum += (nbr[i] - 48);
	printf("%d\n", sum);
	return (0);
}