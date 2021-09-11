#include <stdio.h>

int d(int n, int *m)
{
	int ret = n, tmp = n;
	while (tmp > 0)
	{
		ret += (tmp % 10);
		tmp /= 10;
	}
	if (ret <= 10000)
		m[ret]++;
	return (ret);
}

int main (void)
{
	int m[10001] = { 0, };
	int ix = 1;
	
	while (ix < 10000)
		d(ix++, m);
	for (int i = 1; i <= 10000; i++)
		if(!m[i]) printf("%d\n", i);
	return (0);
}