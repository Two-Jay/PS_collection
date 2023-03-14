#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _R = 31;
int _N = 1234567891;

int fn_islowalpha(char c) { return (c >= 'a' && c <= 'z'); }

long long fn_get_mR(int a, int b)
{
	int i = 0;
	long long ret = 1;

	// D&CQ!!!!
	while ((a != 0 && b != 0) && i < b)
	{
		ret *= a;
		i++;
	}
	return (ret);
}

long long fn_get_hashed(char *s, int s_len)
{
	int ix = 0;
	long long ret = 0;

	while (ix < s_len && fn_islowalpha(s[ix]))
	{
		ret += (s[ix] - 96) * fn_get_mR(_R, ix);
		ix++;
	}
	ret %= _N;
	return (ret);
}

int main(void)
{
	char *input;
	int input_len;
	long long hashed;

	scanf("%d", &input_len);
	input = (char *)malloc(sizeof(char) * (input_len + 1));
	input[input_len] = '\0';
	scanf("%s", input);
	hashed = fn_get_hashed(input, input_len);
	printf("%lld\n", fn_pow(31, 49));
	printf("%lld\n", hashed);
}