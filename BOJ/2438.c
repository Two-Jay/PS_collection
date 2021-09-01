#include <stdio.h>
#include <unistd.h>

int main()
{
	int lmt = 0;

	scanf("%d", &lmt);
	for (int i = 0; i < lmt; i++) {
		for (int j = 0; j <= i; j++)
			write(1, "*", 1);
		write(1, "\n", 1);
	}
	return (0);
}