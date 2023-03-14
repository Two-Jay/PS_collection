#include <stdio.h>
#include <stdlib.h>

typedef struct	s_data
{
	int case_lmt;
	int std_lmt;
	int *std_score;
	int std_above_avrg;
	double avrg;
}				t_data;

int fn_get_std_above_avrg(t_data *data)
{
	int ret = 0, ix = 0;

	while (ix < data->std_lmt)
	{
		if (data->std_score[ix] > data->avrg)
			ret++;
		ix++;
	}
	return (ret);
}

double fn_get_average(int *arr, int std_lmt)
{
	double	ret = 0;
	int		ix = 0;
	
	while (ix < std_lmt)
		ret += arr[ix++];
	return (ret / std_lmt);
}

int main ()
{
	t_data data;
	int ix = 0, jx;
	double answer;
	
	scanf("%d", &data.case_lmt);
	while (ix < data.case_lmt)
	{
		scanf("%d", &data.std_lmt);
		data.std_score = (int *)malloc(sizeof(int) * (data.std_lmt + 1));
		data.std_score[data.std_lmt] = '\0';
		jx = 0;
		while (jx < data.std_lmt)
			scanf("%d", &data.std_score[jx++]);
		data.avrg = fn_get_average(data.std_score, data.std_lmt);
		data.std_above_avrg = fn_get_std_above_avrg(&data);
		answer = (double)data.std_above_avrg / data.std_lmt * 100;
		printf("%0.3f%%\n", answer);
		ix++;
	}
	return (0);
}