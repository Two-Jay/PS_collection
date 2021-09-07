#include <stdio.h>

int fn_get_status(int *arr)
{
	int ix, ret;

	ix = 1;
	ret = 0;
	while (ix < 8)
	{
		if (ret == 1 && arr[ix] < arr[ix - 1])
			ret = 3;
		if (ret == 2 && arr[ix] > arr[ix - 1])
			ret = 3;
		if (ret == 3)
			break ;	
		if (arr[ix] > arr[ix - 1])
			ret = 1;
		if (arr[ix] < arr[ix - 1])
			ret = 2;
		ix++;
	}
	return (ret);
}

void fn_print_status(int stat)
{
	if (stat == 1)
		printf("ascending\n");
	if (stat == 2)
		printf("descending\n");
	if (stat == 3)
		printf("mixed\n");
}

int main()
{
	int arr[8], status;

	for (int ix = 0; ix < 8; ix++)
		scanf("%d", &arr[ix]);
	status = fn_get_status(arr);
	fn_print_status(status);
	return (0);
}