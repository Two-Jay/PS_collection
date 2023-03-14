#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <vector>


int main(void)
{
    std::vector<int>    vec;
    int cnt[8001] = {0, };
    int limit, sum = 0;
    
    std::cin >> limit;
    for (int i = 0; i < limit; i++)
    {
        int x;
        std::cin >> x;
        sum += x;
        vec.push_back(x);
        cnt[x + 4000]++;
    }
	int flag;
	int max = 0;
	
	for (int i = 0; i < 8001; i++)
	{
		if (cnt[i] > max)
		{
			max = cnt[i];
			flag = i;
		}
	}

	for (int i = flag + 1; i < 8001; i++)
	{
		if (cnt[i] == max)
		{
			flag = i;
			break;
		}
	}

    sort(vec.begin(), vec.end());
 
    std::cout << round((double)sum / limit) << '\n';
    std::cout << vec[(limit - 1) / 2] << '\n';
    std::cout << flag - 4000 << '\n';
    std::cout << vec[limit - 1] + (vec[0] * -1) << '\n';
    return 0;
}