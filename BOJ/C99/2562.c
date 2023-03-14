#include <stdio.h>
#include <stdlib.h>

int main()
{
	int max = 0, idx = 1;
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		if (i == 0)
			max = arr[i];
		else if (arr[i] > max)
		{
			max = arr[i];
			idx = i + 1;
		}
	}
	printf("%d\n%d\n", max, idx);
	return (0);
}