#include <stdio.h>

typedef struct s_nbr
{
	int	x;
	int	y;
}	t_nbr;

int main()
{
	int		origin, target, cnt;
	t_nbr	nbr;

	cnt = 0;
	scanf("%d", &origin);
	nbr.x = origin < 10 ? 0 : origin / 10;
	nbr.y = origin % 10;
	while (1)
	{
		cnt++;
		target = (nbr.x + nbr.y) % 10;
		nbr.x = nbr.y;
		nbr.y = target;
		if ((nbr.x * 10 + nbr.y) == origin)
			break ;
	}
	printf("%d\n", cnt);
	return (0);
}