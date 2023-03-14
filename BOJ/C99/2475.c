#include <stdio.h>

int main ()
{
	int ret = 0, val = 0;
	
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &val);
		ret += (val * val);
	}
	printf("%d\n", ret % 10);
	return (0);
}