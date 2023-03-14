#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b;
    scanf("%d %d", &a, &b);
	if (a < b)
		write(1, "<\n", 2);
	else if (a > b)
		write(1, ">\n", 2);
	else
		write(1, "==\n", 3);
	return (0);
}