#include <iostream>
#include <vector>

int main(void)
{
    int temp[] = { 1, 1, 2, 2, 2, 8 };
    std::vector<int> base ( temp, temp + sizeof(temp) / sizeof(temp[0]));
    int check;
    for (int i = 0; i < base.size(); i++)
    {
        std::cin >> check;
        std::cout << (check - base[i]) * -1 << std::endl;
    }

    return 0;
}