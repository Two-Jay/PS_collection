// https://www.acmicpc.net/problem/10816
#include <vector>
#include <iostream>
#include <utility>
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

int isInBucket_BinSearch(std::vector< std::pair<int, int> >& hash, int target) {
    int lo = 0, hi = hash.size() - 1, mid;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (hash[mid].first == target) {
            return hash[mid].second;
        } else if (hash[mid].first > target) {
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
    stable_sort(bucket.begin(), bucket.end());
    std::vector<std::pair<int, int> > hash;

    for (int i = 0; i < bucket.size(); i++) {
        if (hash.empty() || hash.back().first != bucket[i]) hash.push_back(std::make_pair(bucket[i], 1));
        else hash.back().second += 1;
    }
    int ret;
    for (int i = 0; i < len2; i++) {
        ret = isInBucket_BinSearch(hash, toFind[i]);
        std::cout << ret;
        if (i != len2 - 1) std::cout << " "; 
        else std::cout << '\n';
    }
    return 0;
}
