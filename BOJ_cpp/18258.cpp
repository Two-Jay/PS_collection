#include <iostream>
#include <list>

class myqueue {
    private :
        std::list<int> q;
    
    public :
        void push_x(const std::string buf) {
            q.push_back(atoi(buf.c_str()));
        };
        void pop(void) {
            if (q.size() == 0) std::cout << -1 << '\n';
            else {
                std::list<int>::iterator it = q.begin();
                q.pop_front();
                std::cout << *it << '\n';
            }
        };
        void size(void) {
            std::cout << q.size() << '\n';
        };
        void empty(void) {
            int value = q.size() == 0 ? 1 : 0;
            std::cout << value << '\n';
        };
        void front(void) {
            if (q.size() == 0) std::cout << -1 << '\n';
            else {
                std::list<int>::iterator it = q.begin();
                std::cout << *it << '\n';
            }
        };
        void back(void) {
            if (q.size() == 0) std::cout << -1 << '\n';
            else {
                std::list<int>::reverse_iterator rit = q.rbegin();
                std::cout << *rit << '\n';
            }
        };
};

int main(void) {
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);
    int cmdmax;
    myqueue q;
    std::string buf;

    getline(std::cin, buf);
    cmdmax = atoi(buf.c_str());
    for (int i = 0; i < cmdmax; i++) {
        getline(std::cin, buf);
        if (buf.substr(0,4) == "push") q.push_x(buf.substr(5));
        if (buf == "front") q.front();
        if (buf == "back") q.back();
        if (buf == "size") q.size();
        if (buf == "empty") q.empty();
        if (buf == "pop") q.pop();
    }
}