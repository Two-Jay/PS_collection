#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, sum = 0;
    
    scanf("%d", &a);
    for (int i = 0; i < 5; i++)
	{
		sum += pow(a % 10, 5);
		a /= 10;
	}
	printf("%d\n", sum);
	return (0); 
}