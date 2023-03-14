#include <iostream>
#include <deque>

class mydeque {
    private :
        std::deque<int> dq;
    
    public :
        void push_front(int input) {
            dq.push_front(input);          
        }
        void push_back(int input) {
            dq.push_back(input);
        };
        void pop_front(void) {
            if (dq.size() == 0) std::cout << "-1\n";
            else {
                std::cout << dq.front() << '\n';     
                dq.pop_front();
            }
        };
        void pop_back(void) {
            if (dq.size() == 0) std::cout << "-1\n";
            else {
                std::cout << dq.back() << '\n';
                dq.pop_back();
            }
        };
        void size(void) {
            std::cout << dq.size() << '\n';
        };
        void empty(void) {
            std::cout << (dq.size() == 0) << '\n';
        };
        void front(void) {
            if (dq.size() == 0) std::cout << "-1\n";
            else {
                std::cout << dq.front() << '\n';
            }
        };
        void back(void) {
            if (dq.size() == 0) std::cout << "-1\n";
            else {
                std::cout << dq.back() << '\n';
            }
        };
};

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
    std::cout.tie(0);
    int N;
    std::string input;
    mydeque dq;

    std::cin >> N;
    for (int i = 0; i <= N; i++) {
        getline(std::cin, input);
        if (input.substr(0,10) == "push_front") dq.push_front(atoi(input.substr(11).c_str()));
        if (input.substr(0,9) == "push_back") dq.push_back(atoi(input.substr(10).c_str()));
        if (input == "pop_front") dq.pop_front();
        if (input == "pop_back") dq.pop_back();
        if (input == "size") dq.size();
        if (input == "empty") dq.empty();
        if (input == "front") dq.front();
        if (input == "back") dq.back();
    }
}