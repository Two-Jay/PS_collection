#include <stdio.h>

int main(int argc, char **argv)
{
    int a, flag = 0;
    scanf("%d", &a);
	if (a % 4 == 0)
		flag = 1;
	if (a % 4 == 0 && a % 100 == 0)
		flag = 0;
	if (a % 4 == 0 && a % 400 == 0)
		flag = 1;
	printf("%d\n", flag);
	return (0);
}