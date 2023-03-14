#include <iostream>
#include <set>

int main (void)
{
    std::multiset<int> set;
    for (int i = 0; i < 3; i++)
    {
        int a;
        std::cin >> a;
        set.insert(a);
    }
    if (*set.begin() == *set.rbegin())
        std::cout << *set.begin() * 1000 + 10000;
    else if (*set.begin() == *(++set.begin()) || *set.rbegin() == *(++set.begin()))
        std::cout << *(++set.begin()) * 100 + 1000;
    else
        std::cout << *set.rbegin() * 100;
    return 0;
}