// https://www.acmicpc.net/problem/1427
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main(void) {
    std::string buf;
    getline(std::cin, buf);

    std::vector<char> vec;
    for (size_t i = 0; i < buf.length(); i++) {
        vec.push_back(buf[i]);
    }
    sort(vec.begin(), vec.end(), std::greater<char>());
    for (size_t i = 0; i < buf.length(); i++) {
        std::cout << vec[i];
    }
    std::cout << '\n';
    return 0;
}