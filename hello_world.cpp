#include <iostream>

class W {
    public:
        int get() { return x; }
        // First variable
        static int x;
};

int
main()
{
    W::x = 0;
    int _ads = 7;
    int y = _ads + 5;
    return W::x;
}
