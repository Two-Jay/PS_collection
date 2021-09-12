#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fn_strlen_croatic(char *s)
{
	int len = strlen(s), ix = len - 1; 

	while (ix >= 1)
	{
		if (ix >= 2 && s[ix] == '=' && (s[ix - 1] == 'z' && s[ix - 2] == 'd'))
			len -= 2;
		else if (ix >= 1)
		{
			if (s[ix] == '=' && (s[ix - 1] == 's' || s[ix - 1] == 'c' || s[ix - 1] == 'z'))
				len -= 1;
			else if (s[ix] == '-' && (s[ix - 1] == 'c' || s[ix - 1] == 'd'))
				len -= 1;
			else if (s[ix] == 'j' && (s[ix - 1] == 'l' || s[ix - 1] == 'n'))
				len -= 1;
		}
		ix--;
	}
	return (len);
}

int main(void)
{
	char *input;
	
	input = (char *)malloc(sizeof(char) * 101);
	scanf("%s", input);
	printf("%d\n", fn_strlen_croatic(input));
	free(input);
	return (0);
}