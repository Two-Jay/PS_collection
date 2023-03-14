#include <stdio.h>

#define MAXSIZE 10001

int cnt[MAXSIZE] = {0,};

// counting sort
// precondition - every elements of the array must be positive integer.
// time complexity : O(n+k) - usually it's faster than quick sort and merge sort;
// space complexity : O(n+k) - it needs for two arrays, the one is for inputs, the other is for counting coefficients. 
int main(void)
{
	int N, nbr;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &nbr);
		cnt[nbr]++;
	}
	for (int i = 0; i < MAXSIZE; i++)
	{
		if (cnt[i] == 0) continue ;
		for (int j = 0; j < cnt[i]; j++)
			printf("%d\n", i);
	}
	return (0);
}
