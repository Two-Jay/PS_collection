// https://www.acmicpc.net/problem/2609

#include <string>
#include <sstream>
#include <iostream>
#include <vector>

std::vector<int> split_int(std::string& s, char deli) {
    std::vector<int> ret;
    std::stringstream ss(s);
    std::string tmp;

    while (getline(ss, tmp, deli)) ret.push_back(atoi(tmp.c_str()));
    return ret;
}

int getLcm(int a, int b, int gcd){
    return a * b / gcd;
}

int getGcd(int a, int b) {
	return b ? getGcd(b, a%b) : a;
}

int main(void) {
    int m, n;
    std::string buf;
    std::vector<int> vec;
    
    getline(std::cin, buf);
    vec = split_int(buf, ' ');
    m = vec[0];
    n = vec[1];

    int gcd = getGcd(m, n);
    int lcm = getLcm(m, n, gcd);
    std::cout << gcd << '\n' << lcm << '\n';
    return 0;
}