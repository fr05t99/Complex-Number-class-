#include <iostream>
#include "Complex.h"

int main()
{
    Complex c1(1, 9);
    Complex c2(1, -9);
    //std::cin >> c1;
    //std::cout << c1;
    Complex c3 = c1 - c2;
    std::cout << c3;
    return 0;
}
