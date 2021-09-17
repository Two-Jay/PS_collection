#include <stdio.h>

void fn_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main (void)
{
	int arr[3];

	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

	if (arr[0] > arr[1]) fn_swap(&arr[0], &arr[1]);
	if (arr[1] > arr[2]) fn_swap(&arr[1], &arr[2]);
	if (arr[0] > arr[1]) fn_swap(&arr[0], &arr[1]);
	printf("%d\n", arr[1]);
	return (0);
}