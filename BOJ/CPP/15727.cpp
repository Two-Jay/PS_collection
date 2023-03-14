#include <iostream>

int main(void)
{
    int L;
    
    std::cin >> L;
    if (L % 5 == 0)
        std::cout << L / 5;
    else
        std::cout << L / 5 + 1;
    return 0;
}