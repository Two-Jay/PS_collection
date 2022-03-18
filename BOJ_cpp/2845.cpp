#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> papers;
    int L, P, base, in;
    
    std::cin >> L >> P;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> in;
        papers.push_back(in);
    }
    base = L * P;
    for (int i = 0; i < 5; i++)
    {
        std::cout << papers[i] - base;
        if (i != 5 - 1)
            std::cout << " ";
    }
}