// https://www.acmicpc.net/problem/1181
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

bool cmp(const std::string& str1, const std::string& str2) {
    size_t len1 = str1.length();
    size_t len2 = str2.length();
    if (len1 == len2) return str1 < str2;
    return len1 < len2;
}

int main(void) {
    std::vector<std::string> vec;
    std::string buf;
    int N;

    getline(std::cin, buf);
    N = atoi(buf.c_str());
    for (int i = 0; i < N; i++) {
        getline(std::cin, buf);
        vec.push_back(buf);
    }
    stable_sort(vec.begin(), vec.end(), cmp);
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    std::cout << "answer==========" << '\n';
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << '\n';
    }
    return 0;
}