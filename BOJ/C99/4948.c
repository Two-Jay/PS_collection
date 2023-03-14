#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *init_base(int M, int N)
{
    int *ret;
    int ret_l = N - M + 1;

    ret = (int *)calloc(sizeof(int), ret_l);
    for (int i = 0; i < ret_l; i++)
        ret[i] = M + i;
    return (ret);
}

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

int get_next_prime(int before)
{
    int ret = before;
    
    while (!fn_isprime(++ret))
        ;
    return (ret);
}

void print_cnt_prime(int *base, int M, int N)
{
    int ret = 0;

    for (int i = M; i < N; i++)
    {
        if (base[i] != 0)
            ret++;
    }
    printf("%d\n", ret);
}

void check_prime_eratosthenes(int *base, int M, int N)
{
    int tprime = get_next_prime(0), target;
    int l = N - M + 1;

    target = N > 30 ? ceil(sqrt(N)) : N;
    if (base[0] == 1)
        base[0] = 0;
    while (tprime < target)
    {
        for (int i = 0; i < l; i++)
        {
            if (base[i] != tprime && base[i] % tprime == 0)
                base[i] = 0;
        }
        tprime = get_next_prime(tprime);
    }
}

int main(void)
{
    int M, N;
    int *base;

    base = init_base(1, 246912);
    check_prime_eratosthenes(base, 1, 246912);
    while (1)
    {
        scanf("%d", &M);
        N = 2 * M;
        if (M == 0)
            break ;
        else
            print_cnt_prime(base, M, N);
    }
    return (0);
}