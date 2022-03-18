#include <iostream>

int main(void)
{
    int A, ans = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> A;
        ans += A;
    }
    std::cout << ans;
    return 0;
}