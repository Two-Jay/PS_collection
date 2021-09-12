#include <stdio.h>
#include <stdlib.h>

long long fn_get_sumarr(int *a)
{
	int ix = 0;
	long long ret = 0;

	while (a[ix])
		ret += a[ix++];
	return (ret);
}

int main (void)
{
	int *a;
	int lmt, bck, ix = 0, a_ix= 0;

	a = (int *)calloc(sizeof(int), 100000);
	scanf("%d", &lmt);
	while (ix < lmt)
	{
		bck = 0;
		scanf("%d", &bck);
		if (a_ix == 0 && bck == 0)
			a[a_ix] = 0;
		else if (a_ix > 0 && bck == 0)
			a[--a_ix] = 0;
		else 
			a[a_ix++] = bck;
		ix++;
	}
	printf("%llu\n", fn_get_sumarr(a));
	return (0);
}