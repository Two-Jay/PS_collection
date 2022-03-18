#include <iostream>
#include <vector>
#include <numeric>

int main(void)
{
    std::vector<int> times;
    int input, sum;

    for (int i = 0; i < 4; i++)
    {
        std::cin >> input; 
        times.push_back(input);
    }
    sum = std::accumulate(times.begin(), times.end(), 0);
    std::cout << sum / 60 << '\n' << sum % 60;
    return 0;
}