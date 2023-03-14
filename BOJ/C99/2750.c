#include <stdio.h>
#include <stdlib.h>

void fn_swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

int *set_arr(int N)
{
	int *arr;
	int nbr;

	arr = (int *)malloc(sizeof(int) * (N + 1));
	arr[N] = '\0';
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &nbr);
		arr[i] = nbr;
	}
	return (arr);
}

int fn_bubble_sort(int *arr, int N)
{
	int flag = 1;
	for (int j = 0; j < N - 1 && flag; j++)
	{
		flag = 0;
		for (int i = 1; i < N; i++)
		{
			if (arr[i] < arr[i - 1]) fn_swap(&arr[i], &arr[i - 1]);
			flag = 1;
		}
	}
	return (0);
}

void print_arr(int *arr, int N)
{
	for (int i = 0; i < N; i++)
			printf("%d\n", arr[i]);
}

int main(void)
{
	int *arr;
	int N;

	scanf("%d", &N);
	arr = set_arr(N);
	fn_bubble_sort(arr, N);
	print_arr(arr, N);
	return (0);
}
