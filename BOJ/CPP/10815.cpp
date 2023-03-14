// https://www.acmicpc.net/problem/10815

#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

int getlineInt(void) {
    std::string buf;
    getline(std::cin, buf);
    return atoi(buf.c_str());
}

std::vector<int> split_int(std::string& s, char deli) {
    std::vector<int> ret; 
    std::stringstream ss(s);
    std::string tmp;
    while (getline(ss, tmp, deli)) ret.push_back(atoi(tmp.c_str()));
    return ret;
}

bool isInBucket_BinSearch(std::vector<int>& bucket, int target) {
    int lo = 0, hi = bucket.size() - 1, mid;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (bucket[mid] == target) return true;
        else if (bucket[mid] > target) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return false;
}

int main(void) {
    std::string buf;
    std::vector<int> bucket, toFind;
    int len1 = getlineInt();
    (void)len1;
    getline(std::cin, buf);
    bucket = split_int(buf, ' ');
    int len2 = getlineInt();
    getline(std::cin, buf);
    toFind = split_int(buf, ' ');
    sort(bucket.begin(), bucket.end());

    std::vector<int> ret;
    for (int i = 0; i < len2; i++) {
        if (isInBucket_BinSearch(bucket, toFind[i]) == true) {
            std::cout << "1";
        } else {
            std::cout << "0";
        }
        if (i != len2 - 1) std::cout << " "; 
        else std::cout << '\n';
    }
    return 0;
}
