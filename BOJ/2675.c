#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *s;
	char input[20];
	int input_l, lmt, multiple, s_idx, ix, jx;

	scanf("%d", &lmt);
	for (int i = 0; i < lmt; i++)
	{
		scanf("%d %s", &multiple, input);
		input_l = strlen(input);
		if (multiple == 0 || input_l == 0)
			return (0);
		s = (char *)calloc(sizeof(char), input_l * multiple + 1);
		s[input_l * multiple] = '\0';
		s_idx = 0;
		ix = 0;
		while (ix < input_l * multiple)
		{
			jx = 0;
			while (jx < multiple)
			{
				s[ix + jx] = input[s_idx];
				jx++;
			}
			s_idx++;
			ix += multiple;
		}
		printf("%s\n", s);
	}
	return (0);
}