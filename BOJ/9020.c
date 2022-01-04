#include <stdio.h>

int fn_isprime(int a)
{ 
	if (a < 2) return (0);
	else if (a == 2) return (1);
	else if (!(a & 1)) return (0);
	else
	{
		for (int i = 3; i < a ; i += 2)
			if (a % i == 0) return (0);
	}
	return (1);
}

int main(void)
{
    int T, n, halfn, a, b;
    
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        halfn = n / 2;
        for (int j = halfn; j >= 2; j--)
        {
            a = j;
            b = n - a;
            if (fn_isprime(a) && fn_isprime(b))
            {
                printf("%d %d\n", a, b);
                break ;
            }
        }
    }
    return (0);
}