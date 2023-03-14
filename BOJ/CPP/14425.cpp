//https://www.acmicpc.net/problem/14425

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <map> // 얘 해쉬테이블임!

std::vector<int> split_int(std::string& buf, char deli) {
    std::vector<int> ret;
    std::stringstream ss(buf);
    std::string tmp;

    while (getline(ss, tmp, deli)) ret.push_back(atoi(tmp.c_str()));
    return ret;
};

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
    int ret = 0;
    std::vector<int> len;
    std::string buf;
    getline(std::cin, buf);
    len = split_int(buf, ' ');
    std::map<std::string, bool> S;
    for (int i = 0; i < len[0]; i++) {
        getline(std::cin, buf);
        S.insert(make_pair(buf, true));
    }
    for (int i = 0; i < len[1]; i++) {
        getline(std::cin, buf);
        if (S[buf] == true) ret += 1;
    }
    std::cout << ret << '\n';
    return 0;
}