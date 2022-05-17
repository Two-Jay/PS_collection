// https://www.acmicpc.net/problem/1920

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

bool isInBucket(std::vector<long long>& vec, long long target) {
    int lo = 0, hi = vec.size() - 1, mid;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (vec[mid] == target) return true;
        else if (vec[mid] > target) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return false;
}

std::vector<long long> split_int(std::string& buf, char deli) {
    std::vector<long long> ret;
    std::stringstream ss(buf);
    std::string tmp;
    while (getline(ss, tmp, deli)) ret.push_back(atoll(tmp.c_str()));
    return ret;
}

int main(void) {
    std::string buf;
    std::vector<long long> M, N;
    getline(std::cin, buf);
    int A = atoi(buf.c_str());
    getline(std::cin, buf);
    M = split_int(buf, ' ');
    getline(std::cin, buf);
    int B = atoi(buf.c_str());
    getline(std::cin, buf);
    N = split_int(buf, ' ');

    (void)A;
    (void)B;
    sort(M.begin(), M.end());
    for (int i = 0; i < N.size(); i++) {
        if (isInBucket(M, N[i]) == true) std::cout << "1\n";
        else std::cout << "0\n";
    }
    return 0;
}