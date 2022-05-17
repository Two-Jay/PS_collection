// https://www.acmicpc.net/problem/11650

#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

class PointType {
    public:
        int x;
        int y;

        bool operator< (const PointType& p) const {
            return (this->x < p.x || this->y < p.y);
        }
        bool operator> (const PointType& p) const {
            return (this->x > p.x || this->y > p.y);
        }
        friend std::ostream& operator<< (std::ostream& out, PointType& p) {
            out << p.x << ' ' << p.y;
            return out;
        }
};

bool cmp (PointType& a, PointType& b) {
	if (a.x == b.x) return a.y < b.y;
	return a.x < b.x;
}


std::vector<std::string> split(std::string s, char deli) {
    std::vector<string> ret;
    std::stringstream ss(s);
    std::string tmp;

    while (getline(ss, tmp, deli)) ret.push_back(tmp);
    return ret;
}

int main(void) {
    std::string buf;
    int l;

    getline(std::cin, buf);
    l = atoi(buf.c_str());
    std::vector<PointType> vec;
    for (int i = 0; i < l; i++) {
        PointType p;
        vector<string> tmp;
        getline(std::cin, buf);
        tmp = split(buf, ' ');
        p.x = atoi(tmp[0].c_str());
        p.y = atoi(tmp[1].c_str());
        vec.push_back(p);
    }
    sort(vec.begin(), vec.end(), cmp);
    for (PointType i : vec) {
        std::cout << i << '\n';
    }
    return 0;
}