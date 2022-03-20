#include <iostream>

int main (void)
{
    int H, M, time;
    std::cin >> H >> M >> time;
    H += time / 60;
    M += time % 60;
    if (!(M <= 59))
    {
        H += (M / 60);
        M %= 60;
    }
    if (!(H <= 23))
        H %= 24;
    std::cout << H << " " << M;
    return 0;    
}