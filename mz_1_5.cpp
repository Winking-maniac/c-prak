#include <iostream>

void GetNumber()
{
    unsigned int mas[4];
    if (std::cin >> std::hex >> mas[0] >> mas[1] >> mas[2] >> mas[3]) {
        std::cout << ((((((mas[0] << 8) + mas[1]) << 8) + mas[2]) << 8) +mas[3]) << std::endl;
    }
}

int main()
{
    unsigned int num = 0;
    while(std::cin >> std::hex >> num) {
        GetNumber();
        GetNumber();
        GetNumber();
        GetNumber();
    }
}
