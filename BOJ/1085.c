#include <stdio.h>

typedef struct	s_current
{
	int x;
	int y;
}				t_current;

typedef struct	s_side
{
	int x;
	int y;
}				t_side;

int fn_find_way(t_current *me, t_side *border)
{
	int ret = 0;
	
	ret = me->x;
	if (ret > border->x - me->x)
		ret = border->x - me->x;
	if (ret > me->y)
		ret = me->y;
	if (ret > border->y - me->y)
		ret = border->y - me->y;
	return (ret);
}

int main (void)
{
	t_current	me;
	t_side		border;

	scanf("%d %d", &me.x, &me.y);
	scanf("%d %d", &border.x, &border.y);
	printf("%d\n", fn_find_way(&me, &border));
	return (0);
}