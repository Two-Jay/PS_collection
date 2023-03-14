#include <stdio.h>
#include <stdlib.h>

int increase_index(int *circle, int N, int K, int i)
{
    int idx = i, cnt = 0;
    while (cnt != K)
    {
        if (idx == N) idx = 0;
        if (circle[idx] == 0) cnt++;
        idx++;
    }
    return (idx - 1);
}

void print_solution(int *circle, int N, int K)
{
    printf("<");
    int i = K - 1, killed = 0;
    while (1)
    {
        if (i >= N) i = i - N;
        if (killed == N - 1)
        {
            circle[i] = 1;
            printf("%d", i + 1);
            break ;
        }
        else
        {
            circle[i] = 1;
            printf("%d, ", i + 1);
            killed++;
        }
        i = increase_index(circle, N, K, i);
    }
    printf(">");
}

int main(void)
{
    int N, K;
    int *circle;

    scanf("%d %d", &N, &K);
    circle = (int *)calloc(sizeof(int), N + 1);
    circle[N] = '\0';
    print_solution(circle, N, K);
    return (0);
}