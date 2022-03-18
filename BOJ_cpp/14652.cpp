#include<iostream>

int main (void)
{
    int N, M, K;
    std::cin >> N >> M >> K;

    std::cout << static_cast<int>(K / M) << " " << static_cast<int>(K % M);
    return 0;
}