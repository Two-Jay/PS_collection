#include <stdio.h>

int fn_check_sol(int target)
{
    int cnt = 0;
    while (1)
    {
        if (target % 10 == 6)
            cnt++;
        else if (target % 10 != 6)
            cnt = 0;
		target /= 10;
		if (cnt == 3 || target == 0)
			break ;
    }
    return (cnt == 3 ? 1 : 0);
}

int main()
{
    int a, target = 665, ret = 0, i = 0;
    
    scanf("%d", &a);
	if (a == 0)
	{
		printf("0\n");
		return (0);
	}
    while (i != a)
    {
		target++;
        if (fn_check_sol(target))
            i++;
    }
	printf("%d\n", target);
	return (0);
}