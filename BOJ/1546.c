#include <stdio.h>
#include <stdlib.h>

int main ()
{
	double *arr;
	double ret = 0;
	int len = 0, max = 0;

	scanf("%d", &len);
	arr = (double *)calloc(sizeof(double), len);
	for (int i = 0; i < len; i++)
	{
		scanf("%lf", &arr[i]);
		if (arr[i] > max)
			max = arr[i];
	}
	for (int i = 0; i < len; i++)
		ret += (arr[i] / max) * 100;
	printf("%f\n", ret / len);
	return (0);
}