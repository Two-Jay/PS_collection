#include <stdio.h>

int main ()
{
	int amnt = 0, ret = 0;
	
	scanf("%d", &amnt);
	if (amnt % 5 == 0)
		ret = amnt / 5;
	else if (amnt % 5 == 1)
		ret = amnt / 5 + 1;
	else if (amnt % 5 == 2 && amnt >= 12)
		ret = amnt / 5 + 2;
	else if (amnt % 5 == 3)
		ret = amnt / 5 + 1;
	else if (amnt % 5 == 4 && amnt >= 9)
		ret = amnt / 5 + 2;
	else if (amnt % 3 == 0)
		ret = amnt / 3;
	else
		ret = -1;
	printf("%d\n", ret);
	return (0);
}