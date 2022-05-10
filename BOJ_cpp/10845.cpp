#include <iostream>
#include <list>
#include <string>

class list_queue {
    private :
        std::list<int> storage;

    public :
        list_queue() {};
        ~list_queue() {};
        void front() {
            int value = storage.size() == 0 ? -1 : storage.front();
            std::cout << value << std::endl;
        };
        void back() {
            int value = storage.size() == 0 ? -1 : storage.back();
            std::cout << value << std::endl;
        };
        void empty() {
            int value = storage.size() == 0 ? 1 : 0;
            std::cout << value << std::endl;
        };
        void pop() {
            if (storage.size() == 0) std::cout << -1 << std::endl;
            else {
                int value = storage.front();
                storage.pop_front();
                std::cout << value << std::endl;
            }
        };
        void push_x(const char *input) {
            int value = atoi(input);
            storage.push_back(value);
        };
        void size() {
            std::cout << storage.size() << std::endl;
        };
};

int main(void) {
    int N;
    std::string input;
    list_queue Q;

    std::cin >> N;
    for (int i = 0; i <= N; i++) {
        getline(std::cin, input);
        if (input.compare(0, 4, "push") == 0) Q.push_x(input.c_str() + 5);
        if (input == "pop") Q.pop();
        if (input == "front") Q.front();
        if (input == "back") Q.back();
        if (input == "size") Q.size();
        if (input == "empty") Q.empty();
    }
}