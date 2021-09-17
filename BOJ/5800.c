#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int fn_calc_gap(int *class, int len)
{
	int ret = 0, tmp;

	if (len < 1) return (0);
	else
	{
		for (int i = 1; i < len; i++)
		{
			tmp = class[i] - class[i - 1];
			if (tmp > ret) ret = tmp;
		}
	}
	return (ret);
}

int main(void)
{
	int lmt, len, max, min, gap;
	int *class;

	scanf("%d", &lmt);
	for (int i = 0; i < lmt; i++)
	{
		scanf("%d", &len);
		class = (int *)malloc(sizeof(int) * (len + 1));
		class[len] = '\0';
		for (int j = 0; j < len; j++)
		{
			scanf("%d", &class[j]);
			if (j == 0) max = min = class[0];
			else
			{
				if (class[j] > max) max = class[j];
				if (class[j] < min) min = class[j]; 
			}
		}
		qsort(class, len, sizeof(int), compare);
		gap = fn_calc_gap(class, len);
		printf("Class %d\nMax %d, Min %d, Largest gap %d\n", i + 1, max, min, gap);
	}
	return (0);
}