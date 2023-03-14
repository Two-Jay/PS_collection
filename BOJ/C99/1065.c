#include <stdio.h>

int main(void)
{
	int ret, t, semit, nbr[3];
	
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		if (0 < i && i < 100) ret = i;
		else if (i == 1000) break ;
		else
		{
			semit = i;
			for (int j = 0; semit > 0; j++)
			{
				nbr[j] = semit % 10;
				semit /= 10;
			}
			if (nbr[0] - nbr[1] == nbr[1] - nbr[2]) ret++;
		}
	}
	printf("%d\n", ret);
	return (0);
}