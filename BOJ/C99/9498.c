#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int a;
    scanf("%d", &a);
	if (a <= 100 && a >= 90)
		write(1, "A\n", 2);
	if (a <= 89 && a >= 80)
		write(1, "B\n", 2);
	if (a <= 79 && a >= 70)
		write(1, "C\n", 2);
	if (a <= 69 && a >= 60)
		write(1, "D\n", 2);
	if (a < 60)
		write(1, "F\n", 2);
	return (0);
}