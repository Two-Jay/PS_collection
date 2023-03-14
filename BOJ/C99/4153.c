#include <stdio.h>

typedef struct s_triangle
{
	int a;
	int b;
	int c;
}   t_triangle;

void fn_swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int fn_isRight(t_triangle *input)
{
	int hypot;
	int ret = 0;
	
	hypot = input->c;
	if (hypot < input->a)
		fn_swap(&hypot, &input->a);
	if (hypot < input->b)
		fn_swap(&hypot, &input->b);
	if (hypot * hypot != (input->a * input->a) + (input->b * input->b))
		return (0);
	else
		return (1);
}

int main(void)
{
	t_triangle input;


	while (1)
	{
		scanf("%d %d %d", &input.a, &input.b, &input.c);
		if (input.a == 0 && input.b == 0 && input.c == 0)
			break ;
		fn_isRight(&input) ? printf("right\n") : printf("wrong\n");
	}
	return (0);
}