#include <stdio.h>
#include <string.h>

int main ()
{
	int ret = 0, len;
	char	input[1000000];

	scanf("%[^\n]", input);
	len = strlen(input);
	if (len == 1 && input[0] == ' ')
	{
		printf("%d\n", 0);	
		return (0);
	}
	for (int i = 1; i < len - 1; i++) {
		if (input[i] == ' ')
			ret++;
	}
	printf("%d\n", ++ret);
	return (0);
}