#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b;
    scanf("%d %d", &a, &b);
	if (a == 0 && b < 45)
		a = 24;
	if (b < 45)
	{
		b += 60;
		a--;
	}
	b -= 45;
	printf("%d %d\n", a, b);
	return (0);
}