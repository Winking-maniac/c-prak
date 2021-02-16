#include <iostream>
#include <iomanip>
#include <cmath>
int main()
{
    double s1 = 0.0, s2 = 0.0;
    unsigned int n = 0;
    double x;
    while (std::cin >> x) {
        s1 += x;
        s2 += x*x;
        n++;
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(10) << s1/n << std::endl;
    std::cout << std::setprecision(10) << sqrt(s2*n - s1*s1)/n << std::endl;
}
