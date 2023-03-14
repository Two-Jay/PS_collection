// https://www.acmicpc.net/problem/18870
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    vector<int> v, back;
    int N, input;
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> input;
        v.push_back(input);
        back.push_back(input);
    }
    
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int i = 0; i < N; i++) {
        printf("%d ", lower_bound(v.begin(), v.end(), back[i]) - v.begin());
    }   
}
// 아래는 시간초과 소스
// 이 소스는... map 을 활용했기 때문에 상수가 크면, million만 가도 nlogn 을 넘는다.
#include <iostream>
#include <sstream>
#include <vector>
#include <map>

std::vector<int> split_int(std::string& s, char deli) {
    std::vector<int> ret;
    std::stringstream ss(s);
    std::string tmp;
    while (getline(ss, tmp, deli)) ret.push_back(atoi(tmp.c_str()));
    return ret; 
}

// increase count 1 as found a smaller number
int findCnt(std::map<int, int>& dp, std::vector<int>& vec, int current_idx) {
    int ret = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] < vec[current_idx]) ret++;
    }
    dp.insert(std::make_pair(vec[current_idx], ret));
    return ret;
}

int main(void) {
    std::vector<int> pressed;
    std::vector<int> bucket;
    std::string buf;
    std::map<int, int> dp;
    int m;

    getline(std::cin, buf);
    m = atoi(buf.c_str());
    getline(std::cin, buf);
    bucket = split_int(buf, ' ');
    for (int i = 0; i < bucket.size(); i++) {
        std::map<int, int>::iterator it = dp.find(bucket[i]);
        if (it == dp.end()) {
            pressed.push_back(findCnt(dp, bucket, i));
        } else {
            pressed.push_back(it->second);
        }
    }
    for (int i = 0; i < bucket.size(); i++) {
        if (i == m - 1)
            std::cout << pressed[i] << '\n';
        else
            std::cout << pressed[i] << ' ';
    }
    return 0;
}