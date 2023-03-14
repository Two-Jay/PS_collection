#include <list>
#include <string>
#include <iostream>

int main(void) {
    std::list<int> q;
    int limit, tmp;
    std::string buf;

    getline(std::cin, buf);
    limit = atoi(buf.c_str());
    for (int i = 1; i < limit + 1; i++) {
        q.push_back(i);
    }
    if (q.size() != 1) {
        while (1) {
            q.pop_front();
            if (q.size() == 1) break ;
            tmp = q.front();
            q.pop_front();
            q.push_back(tmp);
        }
    }
    std::cout << q.front() << std::endl;
    return 0;
}
