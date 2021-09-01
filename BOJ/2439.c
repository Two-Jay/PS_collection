#include <stdio.h>
#include <unistd.h>

int main()
{
	int i, j, lmt = 0;

	scanf("%d", &lmt);
	for (i = 0; i < lmt; i++) {
		for (j = 0; j < lmt - i - 1; j++)
			write(1, " ", 1);
		for (j = 0; j <= i; j++)
			write(1, "*", 1);
		write(1, "\n", 1);
	}
	return (0);
}