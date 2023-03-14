#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fn_getScore(char *input)
{
	int i = 0, len = strlen(input), ret = 0, cnt = 0;

	while (i < len)
	{
		if (input[i] == 'X')
			cnt = 0;
		if (input[i] == 'O')
			ret += ++cnt;
		i++;
	}
	return (ret);
}

int main()
{
	char *input;
	int len, i;
	
	i = 0;
	scanf("%d", &len);
	input = (char *)malloc(sizeof(char) * (81));
	while (i < len)
	{
		scanf("%s", input);
		printf("%d\n", fn_getScore(input));
		i++;
	}
	return (0);
}