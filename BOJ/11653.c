#include <stdio.h>

int main(void)
{
	int i = 2;
	int input;

	scanf("%d", &input);
	if (input < 2)
		return (0);
	while (i <= input)
	{
		while (input % i != 0)
			i++;
		printf("%d\n", i);
		input /= i;
		if (input == 1)
			break ;
	}
	return (0);
}