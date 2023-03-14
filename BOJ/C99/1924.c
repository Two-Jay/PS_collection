#include <stdio.h>

char *days[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };

int main (void)
{
	int x, y, day_sum = 0;

	scanf("%d %d", &x, &y);
	if (x == 1 && y == 1) { printf("MON\n"); return(0); }
	for (int i = 1; i < x; i++)
	{
		if ((i < 8 && i % 2 == 1)||(i >= 8 && i % 2 == 0))
			day_sum += 31;
		else if (i == 2)
			day_sum += 28;
		else
			day_sum += 30;
	}
	day_sum += y;
	printf("%s\n", days[day_sum % 7]);
	return (0);
}