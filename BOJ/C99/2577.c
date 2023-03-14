#include <stdio.h>
#include <stdlib.h>

typedef struct s_nbrCnt
{
	int input[3];
	int *cnt;
	int calResult;
}		t_nbrCnt;

int main()
{
	int target, dival, i;
	t_nbrCnt data;
	
	i = 0;
	for (int i = 0; i < 3; i++)
		scanf("%d", &data.input[i]);
	data.calResult = data.input[0] * data.input[1] * data.input[2];
	target = data.calResult;
	data.cnt = (int *)calloc(sizeof(int), 10);
	while (target != 0)
	{
		dival = target % 10;
		target = target / 10;
		data.cnt[dival]++;
	}
	while (i < 10)
		printf("%d\n", data.cnt[i++]);
	return (0);
}