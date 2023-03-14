#include <stdio.h>

int main()
{
	int stnd, lmt, a;

	scanf("%d %d", &lmt, &stnd);
	for (int i = 0; i < lmt; i++) {
		scanf("%d", &a);
		if (a < stnd && i == lmt - 1)
			printf("%d\n", a);
		else if (a < stnd)
			printf("%d ", a);
	}
	return (0); 
}