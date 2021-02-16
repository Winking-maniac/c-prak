#include<iostream>
#include<cstdio>
#include <unistd.h>
#include<cctype>

enum { BUF = 2048 };

int main()
{
    bool is_zero = false, is_number = false;
    char c;
    char buf[BUF];
    unsigned num;

    while ((num = read(0, buf, BUF)) > 0) {
        for (int i = 0; i < num; i++) {
            if (buf[i] != '0') {
                if (is_zero && !isdigit(buf[i])) {
                    std::cout << '0';
                    is_number = false;
                } else if (isdigit(buf[i])) {
                    is_number = true;
                } else {
                    is_number = false;
                }
                is_zero = false;
                std::cout << buf[i];
            } else {
                if (!is_number) {
                    is_zero = true;
                } else {
                    std::cout << '0';
                }
            }
        }
    }
    if (is_zero) {
        std::cout << '0';
    }
}
