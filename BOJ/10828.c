#include <stdio.h>
#include <stdlib.h>

int store[100001];
int len;

int ft_strcmp(char* input, char* str, int len)
{
    int i = 0;
    while (i < len && input[i] && str[i])
    {
        if (input[i] != str[i])
            return (0);
        i++;
    }
    return (1);
}

void pop(void)
{
    if (!len)
        printf("-1\n");
    else
    {
        printf("%d\n", store[len - 1]);
        store[(len--) - 1] = 0;
    }
}

void top(void) { (len == 0) ? printf("-1\n") : printf("%d\n", store[len - 1]); }
void push(int nbr) { store[len++] = nbr; }
void size(void) { printf("%d\n", len); }
void empty(void) { (len == 0) ? printf("1\n") : printf("0\n"); }

int main()
{
    int count, i = 0, nbr = 0;
	char input[5];

    scanf("%d", &count);
    while (i < count)
    {
        scanf("%s", input);
        if (ft_strcmp(input, "push", 4))
        {
            scanf("%d", &nbr);
            push(nbr);
        }
        else if (ft_strcmp(input, "top", 3))
            top();
        else if (ft_strcmp(input, "pop", 3))
            pop();
        else if (ft_strcmp(input, "size", 4))
            size();
        else if (ft_strcmp(input, "empty", 5))
            empty();
        i++;
    }
    return (0);
}