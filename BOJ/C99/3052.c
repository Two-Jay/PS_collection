#include <stdlib.h>
#include <stdio.h>

int fn_check_outputset(int *input, int *ret, int idx)
{
	int retval = input[idx] % 42;

	for (int i = 0; i < idx; i++)
	{
		if (input[i] == retval && i != idx)
			return (-1);
	}
	return (retval);
}

int main ()
{
	int input[10];
	int i = 0, ret = 0;

	while (i < 10)
	{
		scanf("%d", &input[i]);
		input[i] = fn_check_outputset(input, &ret, i);
		if (input[i] != -1)
			ret++;
		i++;
	}
	printf("%d\n", ret);
	return (0);
}