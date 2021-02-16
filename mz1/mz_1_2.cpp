#include <iostream>

class A
{
    public:
        A() : print(false) {
            std::cin >> x;
        }
        A(const A &a) : x(a.x), print(true) {
            int y;
            std::cin >> y;
            x += y;
        }
        ~A() {
            if (print) {
                std::cout << x;
            }
        }
    private:
        int x;
        bool print;
};
