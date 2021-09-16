#include <stdio.h>

void calret_case()
{
	long x, y, len, turn_cnt = 1, moved = 1, move_add = 0;
	scanf("%ld %ld", &x, &y);
	len = x - y;
	while (moved < len)
	{
		move_add++;
		turn_cnt++;
		moved += move_add;
		if (moved >= len) break ;
		turn_cnt++;
		moved += move_add;
		if (moved >= len) break ;
	}
	if (moved > len) turn_cnt--;
	printf("%ld\n", turn_cnt);
}

int main(void)
{
	int N = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		calret_case();
	return (0);
}