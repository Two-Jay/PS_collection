#include <stdio.h>
#include <stdlib.h>

int **init_base(void)
{
	int sum;
	int **ret;
	
	ret = (int **)calloc(sizeof(int *), 15);
	for (int i = 0; i < 15; i++)
		ret[i] = (int *)calloc(sizeof(int), 15);
	for (int i = 0; i < 15; i++)
		ret[0][i] = i + 1;
	for (int i = 1; i < 15; i++)
	{
		sum = 0;
		for (int j = 0; j < 15; j++)
		{
			sum += ret[i - 1][j];
			ret[i][j] = sum;
		}
	}
	return (ret);
}

int main(void)
{
	int k, n, T;
	int **base;
	
	scanf("%d", &T);
	base = init_base();
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &k);
		scanf("%d", &n);
		printf("%d\n", base[k][n - 1]);
	}
	return (0);
}