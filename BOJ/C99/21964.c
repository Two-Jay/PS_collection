#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int len = 0;
	char *song;
	char target[6];

	scanf("%d", &len);
	song = (char *)malloc(sizeof(char) * (len));
	scanf("%s", song);
	for (int i = 0; i < 5; i++)
		target[i] = song[len - 5 + i];
	printf("%s\n", target);
}