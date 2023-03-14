#include <stdlib.h>
#include <stdio.h>

int main()
{
	int len, max, min;
	int *arr;

	scanf("%d", &len);
	arr = (int *)malloc(sizeof(int) * (len + 1));
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
		if (i == 0)
		{
			max = arr[i];
			min = arr[i];
		}
		max = (arr[i] > max) ? arr[i] : max;
		min = (arr[i] < min) ? arr[i] : min;
	}
	printf("%d %d\n", min, max);
	free(arr);
	return (0);
}